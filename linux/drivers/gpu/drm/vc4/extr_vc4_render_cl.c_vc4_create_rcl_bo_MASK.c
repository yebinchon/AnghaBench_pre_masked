
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct vc4_rcl_setup {int next_offset; TYPE_7__* rcl; TYPE_3__* color_write; int * zs_write; int * msaa_zs_write; int * msaa_color_write; scalar_t__ color_read; scalar_t__ zs_read; } ;
struct vc4_exec_info {int ct1ca; int ct1ea; int unref_list; struct drm_vc4_submit_cl* args; } ;
struct TYPE_12__ {int bits; scalar_t__ offset; } ;
struct TYPE_10__ {int flags; } ;
struct TYPE_9__ {int flags; } ;
struct drm_vc4_submit_cl {scalar_t__ bin_cl_size; int min_x_tile; int min_y_tile; int max_x_tile; int max_y_tile; int flags; TYPE_4__ color_write; int height; int width; int clear_s; scalar_t__ clear_z; scalar_t__* clear_color; TYPE_2__ zs_read; TYPE_1__ color_read; } ;
struct drm_device {int dummy; } ;
struct TYPE_15__ {int paddr; int base; } ;
struct TYPE_14__ {int unref_head; } ;
struct TYPE_13__ {TYPE_7__ base; } ;
struct TYPE_11__ {scalar_t__ paddr; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (TYPE_7__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_3 (struct vc4_exec_info*,struct vc4_rcl_setup*,int,int,int,int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct vc4_rcl_setup*,int ) ;
 int FUNC_6 (struct vc4_rcl_setup*,scalar_t__) ;
 int FUNC_7 (struct vc4_rcl_setup*,int ) ;
 TYPE_6__* FUNC_8 (int *) ;
 TYPE_5__* FUNC_9 (struct drm_device*,int,int,int ) ;
 int FUNC_10 (struct vc4_rcl_setup*,int ,int ) ;

__attribute__((used)) static int FUNC_11(struct drm_device *VAR_20, struct vc4_exec_info *VAR_21,
        struct vc4_rcl_setup *VAR_22)
{
 struct drm_vc4_submit_cl *VAR_23 = VAR_21->args;
 bool VAR_24 = VAR_23->bin_cl_size != 0;
 uint8_t VAR_25 = VAR_23->min_x_tile;
 uint8_t VAR_26 = VAR_23->min_y_tile;
 uint8_t VAR_27 = VAR_23->max_x_tile;
 uint8_t VAR_28 = VAR_23->max_y_tile;
 uint8_t VAR_29 = VAR_27 - VAR_25 + 1;
 uint8_t VAR_30 = VAR_28 - VAR_26 + 1;
 uint8_t VAR_31, VAR_32;
 uint32_t VAR_33, VAR_34;
 bool VAR_35 = 1;
 bool VAR_36 = 1;

 if (VAR_23->flags & VAR_15) {
  if (!(VAR_23->flags & VAR_16))
   VAR_35 = 0;
  if (!(VAR_23->flags & VAR_17))
   VAR_36 = 0;
 }

 VAR_33 = VAR_13;
 VAR_34 = VAR_11;

 if (VAR_23->flags & VAR_18) {
  VAR_33 += VAR_4 +
   VAR_11 +
   VAR_10;
 }

 if (VAR_22->color_read) {
  if (VAR_23->color_read.flags &
      VAR_19) {
   VAR_34 += VAR_5;
  } else {
   VAR_34 += VAR_6;
  }
 }
 if (VAR_22->zs_read) {
  if (VAR_22->color_read) {
   VAR_34 += VAR_11;
   VAR_34 += VAR_10;
  }

  if (VAR_23->zs_read.flags &
      VAR_19) {
   VAR_34 += VAR_5;
  } else {
   VAR_34 += VAR_6;
  }
 }

 if (VAR_24) {
  VAR_33 += VAR_14;
  VAR_34 += VAR_2;
 }

 if (VAR_22->msaa_color_write)
  VAR_34 += VAR_7;
 if (VAR_22->msaa_zs_write)
  VAR_34 += VAR_7;

 if (VAR_22->zs_write)
  VAR_34 += VAR_10;
 if (VAR_22->color_write)
  VAR_34 += VAR_8;


 VAR_34 += VAR_11 *
  ((VAR_22->msaa_color_write != ((void*)0)) +
   (VAR_22->msaa_zs_write != ((void*)0)) +
   (VAR_22->color_write != ((void*)0)) +
   (VAR_22->zs_write != ((void*)0)) - 1);

 VAR_33 += VAR_29 * VAR_30 * VAR_34;

 VAR_22->rcl = &FUNC_9(VAR_20, VAR_33, 1, VAR_0)->base;
 if (FUNC_1(VAR_22->rcl))
  return FUNC_2(VAR_22->rcl);
 FUNC_4(&FUNC_8(&VAR_22->rcl->base)->unref_head,
        &VAR_21->unref_list);






 if (VAR_23->flags & VAR_18) {
  FUNC_7(VAR_22, VAR_3);
  FUNC_6(VAR_22, VAR_23->clear_color[0]);
  FUNC_6(VAR_22, VAR_23->clear_color[1]);
  FUNC_6(VAR_22, VAR_23->clear_z);
  FUNC_7(VAR_22, VAR_23->clear_s);

  FUNC_10(VAR_22, 0, 0);

  FUNC_7(VAR_22, VAR_9);
  FUNC_5(VAR_22, VAR_1);
  FUNC_6(VAR_22, 0);
 }

 FUNC_7(VAR_22, VAR_12);
 FUNC_6(VAR_22,
  (VAR_22->color_write ? (VAR_22->color_write->paddr +
           VAR_23->color_write.offset) :
   0));
 FUNC_5(VAR_22, VAR_23->width);
 FUNC_5(VAR_22, VAR_23->height);
 FUNC_5(VAR_22, VAR_23->color_write.bits);

 for (VAR_32 = 0; VAR_32 < VAR_30; VAR_32++) {
  int VAR_37 = VAR_36 ? VAR_26 + VAR_32 : VAR_28 - VAR_32;
  for (VAR_31 = 0; VAR_31 < VAR_29; VAR_31++) {
   int VAR_38 = VAR_35 ? VAR_25 + VAR_31 : VAR_27 - VAR_31;
   bool VAR_39 = (VAR_31 == 0 && VAR_32 == 0);
   bool VAR_40 = (VAR_31 == VAR_29 - 1 && VAR_32 == VAR_30 - 1);

   FUNC_3(VAR_21, VAR_22, VAR_38, VAR_37, VAR_39, VAR_40);
  }
 }

 FUNC_0(VAR_22->next_offset != VAR_33);
 VAR_21->ct1ca = VAR_22->rcl->paddr;
 VAR_21->ct1ea = VAR_22->rcl->paddr + VAR_22->next_offset;

 return 0;
}
