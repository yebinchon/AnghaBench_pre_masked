
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct vc4_rcl_setup {TYPE_2__* zs_write; TYPE_3__* msaa_zs_write; TYPE_3__* msaa_color_write; scalar_t__ color_write; TYPE_3__* zs_read; TYPE_3__* color_read; } ;
struct vc4_exec_info {int tile_alloc_offset; int bin_tiles_x; struct drm_vc4_submit_cl* args; } ;
struct TYPE_5__ {int bits; int offset; } ;
struct TYPE_8__ {int flags; int bits; int offset; } ;
struct drm_vc4_submit_cl {scalar_t__ bin_cl_size; TYPE_1__ zs_write; TYPE_4__ msaa_zs_write; TYPE_4__ msaa_color_write; TYPE_4__ zs_read; TYPE_4__ color_read; } ;
struct TYPE_7__ {int paddr; } ;
struct TYPE_6__ {int paddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct vc4_rcl_setup*,int) ;
 int FUNC_1 (struct vc4_rcl_setup*,int) ;
 int FUNC_2 (struct vc4_rcl_setup*,int ) ;
 int FUNC_3 (struct vc4_exec_info*,TYPE_3__*,TYPE_4__*,int,int) ;
 int FUNC_4 (struct vc4_rcl_setup*) ;
 int FUNC_5 (struct vc4_rcl_setup*,int,int) ;

__attribute__((used)) static void FUNC_6(struct vc4_exec_info *VAR_15,
        struct vc4_rcl_setup *VAR_16,
        uint8_t VAR_17, uint8_t VAR_18, bool VAR_19, bool VAR_20)
{
 struct drm_vc4_submit_cl *VAR_21 = VAR_15->args;
 bool VAR_22 = VAR_21->bin_cl_size != 0;





 if (VAR_16->color_read) {
  if (VAR_21->color_read.flags &
      VAR_14) {
   FUNC_2(VAR_16, VAR_6);
   FUNC_1(VAR_16,
    FUNC_3(VAR_15, VAR_16->color_read,
          &VAR_21->color_read, VAR_17, VAR_18) |
    VAR_2);
  } else {
   FUNC_2(VAR_16, VAR_7);
   FUNC_0(VAR_16, VAR_21->color_read.bits);
   FUNC_1(VAR_16, VAR_16->color_read->paddr +
    VAR_21->color_read.offset);
  }
 }

 if (VAR_16->zs_read) {
  if (VAR_16->color_read) {

   FUNC_5(VAR_16, VAR_17, VAR_18);
   FUNC_4(VAR_16);
  }

  if (VAR_21->zs_read.flags &
      VAR_14) {
   FUNC_2(VAR_16, VAR_6);
   FUNC_1(VAR_16,
    FUNC_3(VAR_15, VAR_16->zs_read,
          &VAR_21->zs_read, VAR_17, VAR_18) |
    VAR_1);
  } else {
   FUNC_2(VAR_16, VAR_7);
   FUNC_0(VAR_16, VAR_21->zs_read.bits);
   FUNC_1(VAR_16, VAR_16->zs_read->paddr +
    VAR_21->zs_read.offset);
  }
 }




 FUNC_5(VAR_16, VAR_17, VAR_18);




 if (VAR_19 && VAR_22)
  FUNC_2(VAR_16, VAR_12);

 if (VAR_22) {
  FUNC_2(VAR_16, VAR_5);
  FUNC_1(VAR_16, (VAR_15->tile_alloc_offset +
    (VAR_18 * VAR_15->bin_tiles_x + VAR_17) * 32));
 }

 if (VAR_16->msaa_color_write) {
  bool VAR_23 = (!VAR_16->msaa_zs_write &&
     !VAR_16->zs_write &&
     !VAR_16->color_write);
  uint32_t VAR_24 = VAR_2;

  if (!VAR_23)
   VAR_24 |= VAR_0;
  else if (VAR_20)
   VAR_24 |= VAR_3;
  FUNC_2(VAR_16, VAR_8);
  FUNC_1(VAR_16,
   FUNC_3(VAR_15, VAR_16->msaa_color_write,
         &VAR_21->msaa_color_write, VAR_17, VAR_18) |
   VAR_24);
 }

 if (VAR_16->msaa_zs_write) {
  bool VAR_25 = (!VAR_16->zs_write &&
     !VAR_16->color_write);
  uint32_t VAR_26 = VAR_1;

  if (VAR_16->msaa_color_write)
   FUNC_5(VAR_16, VAR_17, VAR_18);
  if (!VAR_25)
   VAR_26 |= VAR_0;
  else if (VAR_20)
   VAR_26 |= VAR_3;
  FUNC_2(VAR_16, VAR_8);
  FUNC_1(VAR_16,
   FUNC_3(VAR_15, VAR_16->msaa_zs_write,
         &VAR_21->msaa_zs_write, VAR_17, VAR_18) |
   VAR_26);
 }

 if (VAR_16->zs_write) {
  bool VAR_27 = !VAR_16->color_write;

  if (VAR_16->msaa_color_write || VAR_16->msaa_zs_write)
   FUNC_5(VAR_16, VAR_17, VAR_18);

  FUNC_2(VAR_16, VAR_11);
  FUNC_0(VAR_16, VAR_21->zs_write.bits |
   (VAR_27 ?
    0 : VAR_13));
  FUNC_1(VAR_16,
   (VAR_16->zs_write->paddr + VAR_21->zs_write.offset) |
   ((VAR_20 && VAR_27) ?
    VAR_4 : 0));
 }

 if (VAR_16->color_write) {
  if (VAR_16->msaa_color_write || VAR_16->msaa_zs_write ||
      VAR_16->zs_write) {
   FUNC_5(VAR_16, VAR_17, VAR_18);
  }

  if (VAR_20)
   FUNC_2(VAR_16, VAR_10);
  else
   FUNC_2(VAR_16, VAR_9);
 }
}
