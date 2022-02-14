
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int CLK_GATING_DISABLED; } ;
struct TYPE_4__ {TYPE_1__ bits; } ;
struct compressor {int ctx; int min_compress_ratio; TYPE_2__ options; } ;


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
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (int,int,int ,int ) ;

void FUNC_3(struct compressor *VAR_18)
{
 uint32_t VAR_19;
 uint32_t VAR_20;

 VAR_20 = VAR_13;
 VAR_19 = FUNC_0(VAR_18->ctx, VAR_20);
 FUNC_2(VAR_19, 0, VAR_0, VAR_9);
 FUNC_2(VAR_19, 1, VAR_0, VAR_8);
 FUNC_2(VAR_19, 2, VAR_0, VAR_1);
 if (VAR_18->options.bits.CLK_GATING_DISABLED == 1) {

  FUNC_2(
   VAR_19,
   0,
   VAR_0,
   VAR_3);
 }
 FUNC_1(VAR_18->ctx, VAR_20, VAR_19);

 VAR_20 = VAR_15;
 VAR_19 = FUNC_0(VAR_18->ctx, VAR_20);
 FUNC_2(VAR_19, 1, VAR_5, VAR_12);
 FUNC_2(VAR_19, 1, VAR_5, VAR_7);
 FUNC_2(VAR_19, 1, VAR_5, VAR_10);
 FUNC_1(VAR_18->ctx, VAR_20, VAR_19);

 VAR_20 = VAR_14;
 VAR_19 = FUNC_0(VAR_18->ctx, VAR_20);
 FUNC_2(VAR_19, 1, VAR_4, VAR_6);
 FUNC_1(VAR_18->ctx, VAR_20, VAR_19);




 FUNC_2(VAR_19, 0xF, VAR_4, VAR_11);
 FUNC_1(VAR_18->ctx, VAR_20, VAR_19);
 VAR_18->min_compress_ratio = VAR_2;

 VAR_19 = 0;
 FUNC_1(VAR_18->ctx, VAR_16, VAR_19);

 VAR_19 = 0xFFFFFF;
 FUNC_1(VAR_18->ctx, VAR_17, VAR_19);
}
