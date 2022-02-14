
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct dce110_compressor {int dummy; } ;
struct TYPE_3__ {scalar_t__ FBC_SUPPORT; } ;
struct TYPE_4__ {TYPE_1__ bits; } ;
struct compressor {int is_enabled; int ctx; scalar_t__ attached_inst; TYPE_2__ options; } ;
struct compr_addr_and_pitch_params {int inst; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct dce110_compressor* FUNC_0 (struct compressor*) ;
 int FUNC_1 (struct compressor*,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ,int,int ,int ) ;
 int FUNC_5 (struct dce110_compressor*,int) ;

void FUNC_6(
 struct compressor *VAR_10,
 struct compr_addr_and_pitch_params *VAR_11)
{
 struct dce110_compressor *VAR_12 = FUNC_0(VAR_10);

 if (VAR_10->options.bits.FBC_SUPPORT &&
  (!FUNC_1(VAR_10, ((void*)0)))) {

  uint32_t VAR_13;
  uint32_t VAR_14, VAR_15;

  VAR_13 = VAR_8;
  VAR_14 = FUNC_2(VAR_10->ctx, VAR_13);
  FUNC_4(VAR_14, 1, VAR_1, VAR_3);

  FUNC_4(
   VAR_14,
   VAR_11->inst,
   VAR_1, VAR_7);
  FUNC_3(VAR_10->ctx, VAR_13, VAR_14);


  VAR_10->is_enabled = 1;



  VAR_10->attached_inst = VAR_11->inst + VAR_0;


  FUNC_4(VAR_14, 0, VAR_1, VAR_3);
  FUNC_3(VAR_10->ctx, VAR_13, VAR_14);


  VAR_15 = FUNC_2(VAR_10->ctx, VAR_9);

  FUNC_4(VAR_15, 1,
    VAR_5, VAR_4);
  FUNC_4(VAR_15, 1,
    VAR_5, VAR_2);
  FUNC_4(VAR_15, 0x14,
    VAR_5, VAR_6);

  FUNC_3(VAR_10->ctx, VAR_9, VAR_15);


  FUNC_4(VAR_14, 1, VAR_1, VAR_3);
  FUNC_3(VAR_10->ctx, VAR_13, VAR_14);

  FUNC_5(VAR_12, 1);
 }
}
