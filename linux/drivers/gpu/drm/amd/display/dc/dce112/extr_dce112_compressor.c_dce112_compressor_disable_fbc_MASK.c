
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct dce112_compressor {int dummy; } ;
struct TYPE_3__ {scalar_t__ LPT_SUPPORT; scalar_t__ FBC_SUPPORT; } ;
struct TYPE_4__ {TYPE_1__ bits; } ;
struct compressor {int is_enabled; TYPE_2__ options; scalar_t__ attached_inst; int ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dce112_compressor* FUNC_0 (struct compressor*) ;
 int FUNC_1 (struct compressor*) ;
 scalar_t__ FUNC_2 (struct compressor*,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (struct dce112_compressor*,int) ;

void FUNC_7(struct compressor *VAR_3)
{
 struct dce112_compressor *VAR_4 = FUNC_0(VAR_3);

 if (VAR_3->options.bits.FBC_SUPPORT &&
  FUNC_2(VAR_3, ((void*)0))) {
  uint32_t VAR_5;

  VAR_5 = FUNC_3(VAR_3->ctx, VAR_2);
  FUNC_5(VAR_5, 0, VAR_0, VAR_1);
  FUNC_4(VAR_3->ctx, VAR_2, VAR_5);


  VAR_3->attached_inst = 0;
  VAR_3->is_enabled = 0;



  if (VAR_3->options.bits.LPT_SUPPORT)
   FUNC_1(VAR_3);

  FUNC_6(VAR_4, 0);
 }
}
