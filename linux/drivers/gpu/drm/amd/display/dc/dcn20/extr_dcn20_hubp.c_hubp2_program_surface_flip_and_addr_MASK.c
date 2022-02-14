
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_13__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_16__ {int low_part; int high_part; int quad_part; } ;
struct TYPE_15__ {int low_part; int high_part; int quad_part; } ;
struct TYPE_14__ {int low_part; int high_part; int quad_part; } ;
struct TYPE_26__ {int low_part; int high_part; int quad_part; } ;
struct TYPE_17__ {TYPE_12__ left_addr; TYPE_11__ right_addr; TYPE_10__ left_meta_addr; TYPE_9__ right_meta_addr; } ;
struct TYPE_24__ {int low_part; int high_part; int quad_part; } ;
struct TYPE_23__ {int low_part; int high_part; int quad_part; } ;
struct TYPE_22__ {int low_part; int high_part; int quad_part; } ;
struct TYPE_21__ {int low_part; int high_part; } ;
struct TYPE_25__ {TYPE_7__ luma_addr; TYPE_6__ chroma_addr; TYPE_5__ luma_meta_addr; TYPE_4__ chroma_meta_addr; } ;
struct TYPE_19__ {int low_part; int high_part; int quad_part; } ;
struct TYPE_18__ {int low_part; int high_part; int quad_part; } ;
struct TYPE_20__ {TYPE_2__ addr; TYPE_1__ meta_addr; } ;
struct dc_plane_address {int vmid; int type; TYPE_13__ grph_stereo; int tmz_surface; TYPE_8__ video_progressive; TYPE_3__ grph; } ;
struct hubp {struct dc_plane_address request_address; } ;
struct dcn20_hubp {int dummy; } ;


 int FUNC_0 () ;
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 struct dcn20_hubp* FUNC_6 (struct hubp*) ;
 int VAR_37 ;
 int VAR_38 ;

bool FUNC_7(
 struct hubp *VAR_39,
 const struct dc_plane_address *VAR_40,
 bool VAR_41)
{
 struct dcn20_hubp *VAR_42 = FUNC_6(VAR_39);


 FUNC_2(VAR_0,
   VAR_36, VAR_41);


 FUNC_2(VAR_38,
   VAR_37, VAR_40->vmid);

 if (VAR_40->type == 129) {
  FUNC_2(VAR_0, VAR_35, 0x1);
  FUNC_2(VAR_0, VAR_34, 0x1);

 } else {

  FUNC_2(VAR_0, VAR_35, 0x0);
  FUNC_2(VAR_0, VAR_34, 0x0);
 }
 switch (VAR_40->type) {
 case 130:







  if (VAR_40->grph.addr.quad_part == 0)
   break;

  FUNC_3(VAR_13,
    VAR_24, VAR_40->tmz_surface,
    VAR_18, VAR_40->tmz_surface);

  if (VAR_40->grph.meta_addr.quad_part != 0) {
   FUNC_1(VAR_3, 0,
     VAR_16,
     VAR_40->grph.meta_addr.high_part);

   FUNC_1(VAR_1, 0,
     VAR_14,
     VAR_40->grph.meta_addr.low_part);
  }

  FUNC_1(VAR_7, 0,
    VAR_22,
    VAR_40->grph.addr.high_part);

  FUNC_1(VAR_5, 0,
    VAR_20,
    VAR_40->grph.addr.low_part);
  break;
 case 128:
  if (VAR_40->video_progressive.luma_addr.quad_part == 0
    || VAR_40->video_progressive.chroma_addr.quad_part == 0)
   break;

  FUNC_4(VAR_13,
    VAR_24, VAR_40->tmz_surface,
    VAR_25, VAR_40->tmz_surface,
    VAR_18, VAR_40->tmz_surface,
    VAR_19, VAR_40->tmz_surface);

  if (VAR_40->video_progressive.luma_meta_addr.quad_part != 0) {
   FUNC_1(VAR_4, 0,
     VAR_17,
     VAR_40->video_progressive.chroma_meta_addr.high_part);

   FUNC_1(VAR_2, 0,
     VAR_15,
     VAR_40->video_progressive.chroma_meta_addr.low_part);

   FUNC_1(VAR_3, 0,
     VAR_16,
     VAR_40->video_progressive.luma_meta_addr.high_part);

   FUNC_1(VAR_1, 0,
     VAR_14,
     VAR_40->video_progressive.luma_meta_addr.low_part);
  }

  FUNC_1(VAR_8, 0,
    VAR_23,
    VAR_40->video_progressive.chroma_addr.high_part);

  FUNC_1(VAR_6, 0,
    VAR_21,
    VAR_40->video_progressive.chroma_addr.low_part);

  FUNC_1(VAR_7, 0,
    VAR_22,
    VAR_40->video_progressive.luma_addr.high_part);

  FUNC_1(VAR_5, 0,
    VAR_20,
    VAR_40->video_progressive.luma_addr.low_part);
  break;
 case 129:
  if (VAR_40->grph_stereo.left_addr.quad_part == 0)
   break;
  if (VAR_40->grph_stereo.right_addr.quad_part == 0)
   break;

  FUNC_5(VAR_13,
    VAR_24, VAR_40->tmz_surface,
    VAR_25, VAR_40->tmz_surface,
    VAR_18, VAR_40->tmz_surface,
    VAR_19, VAR_40->tmz_surface,
    VAR_32, VAR_40->tmz_surface,
    VAR_33, VAR_40->tmz_surface,
    VAR_28, VAR_40->tmz_surface,
    VAR_29, VAR_40->tmz_surface);

  if (VAR_40->grph_stereo.right_meta_addr.quad_part != 0) {

   FUNC_1(VAR_10, 0,
     VAR_27,
     VAR_40->grph_stereo.right_meta_addr.high_part);

   FUNC_1(VAR_9, 0,
     VAR_26,
     VAR_40->grph_stereo.right_meta_addr.low_part);
  }
  if (VAR_40->grph_stereo.left_meta_addr.quad_part != 0) {

   FUNC_1(VAR_3, 0,
     VAR_16,
     VAR_40->grph_stereo.left_meta_addr.high_part);

   FUNC_1(VAR_1, 0,
     VAR_14,
     VAR_40->grph_stereo.left_meta_addr.low_part);
  }

  FUNC_1(VAR_12, 0,
    VAR_31,
    VAR_40->grph_stereo.right_addr.high_part);

  FUNC_1(VAR_11, 0,
    VAR_30,
    VAR_40->grph_stereo.right_addr.low_part);

  FUNC_1(VAR_7, 0,
    VAR_22,
    VAR_40->grph_stereo.left_addr.high_part);

  FUNC_1(VAR_5, 0,
    VAR_20,
    VAR_40->grph_stereo.left_addr.low_part);
  break;
 default:
  FUNC_0();
  break;
 }

 VAR_39->request_address = *VAR_40;

 return 1;
}
