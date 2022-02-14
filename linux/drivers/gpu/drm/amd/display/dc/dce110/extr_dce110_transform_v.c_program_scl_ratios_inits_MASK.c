
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_10__ {int integer; int fraction; } ;
struct TYPE_9__ {int integer; int fraction; } ;
struct TYPE_8__ {int integer; int fraction; } ;
struct TYPE_7__ {int integer; int fraction; } ;
struct sclv_ratios_inits {TYPE_5__ v_init_chroma; TYPE_4__ h_init_chroma; TYPE_3__ v_init_luma; TYPE_2__ h_init_luma; int v_int_scale_ratio_chroma; int h_int_scale_ratio_chroma; int v_int_scale_ratio_luma; int h_int_scale_ratio_luma; } ;
struct TYPE_6__ {struct dc_context* ctx; } ;
struct dce_transform {TYPE_1__ base; } ;
struct dc_context {int dummy; } ;


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
 int FUNC_0 (struct dc_context*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 int FUNC_1 (scalar_t__,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(
 struct dce_transform *VAR_28,
 struct sclv_ratios_inits *VAR_29)
{
 struct dc_context *VAR_30 = VAR_28->base.ctx;
 uint32_t VAR_31 = VAR_22;
 uint32_t VAR_32 = 0;

 FUNC_1(
  VAR_32,
  VAR_29->h_int_scale_ratio_luma,
  VAR_2,
  VAR_12);
 FUNC_0(VAR_30, VAR_31, VAR_32);

 VAR_31 = VAR_26;
 VAR_32 = 0;
 FUNC_1(
  VAR_32,
  VAR_29->v_int_scale_ratio_luma,
  VAR_6,
  VAR_18);
 FUNC_0(VAR_30, VAR_31, VAR_32);

 VAR_31 = VAR_23;
 VAR_32 = 0;
 FUNC_1(
  VAR_32,
  VAR_29->h_int_scale_ratio_chroma,
  VAR_3,
  VAR_13);
 FUNC_0(VAR_30, VAR_31, VAR_32);

 VAR_31 = VAR_27;
 VAR_32 = 0;
 FUNC_1(
  VAR_32,
  VAR_29->v_int_scale_ratio_chroma,
  VAR_7,
  VAR_19);
 FUNC_0(VAR_30, VAR_31, VAR_32);

 VAR_31 = VAR_20;
 VAR_32 = 0;
 FUNC_1(
  VAR_32,
  VAR_29->h_init_luma.fraction,
  VAR_0,
  VAR_8);
 FUNC_1(
  VAR_32,
  VAR_29->h_init_luma.integer,
  VAR_0,
  VAR_10);
 FUNC_0(VAR_30, VAR_31, VAR_32);

 VAR_31 = VAR_24;
 VAR_32 = 0;
 FUNC_1(
  VAR_32,
  VAR_29->v_init_luma.fraction,
  VAR_4,
  VAR_14);
 FUNC_1(
  VAR_32,
  VAR_29->v_init_luma.integer,
  VAR_4,
  VAR_16);
 FUNC_0(VAR_30, VAR_31, VAR_32);

 VAR_31 = VAR_21;
 VAR_32 = 0;
 FUNC_1(
  VAR_32,
  VAR_29->h_init_chroma.fraction,
  VAR_1,
  VAR_9);
 FUNC_1(
  VAR_32,
  VAR_29->h_init_chroma.integer,
  VAR_1,
  VAR_11);
 FUNC_0(VAR_30, VAR_31, VAR_32);

 VAR_31 = VAR_25;
 VAR_32 = 0;
 FUNC_1(
  VAR_32,
  VAR_29->v_init_chroma.fraction,
  VAR_5,
  VAR_15);
 FUNC_1(
  VAR_32,
  VAR_29->v_init_chroma.integer,
  VAR_5,
  VAR_17);
 FUNC_0(VAR_30, VAR_31, VAR_32);
}
