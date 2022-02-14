
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct dce110_compressor {int dummy; } ;
struct TYPE_3__ {scalar_t__ FBC_SUPPORT; } ;
struct TYPE_4__ {TYPE_1__ bits; } ;
struct compressor {int is_enabled; scalar_t__ attached_inst; int ctx; TYPE_2__ options; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct dce110_compressor* FUNC_0 (struct compressor*) ;
 scalar_t__ FUNC_1 (struct compressor*,scalar_t__*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int VAR_5 ;
 int FUNC_4 (struct compressor*,scalar_t__) ;
 int FUNC_5 (scalar_t__,int ,int ,int ) ;
 int FUNC_6 (struct dce110_compressor*,int) ;

void FUNC_7(struct compressor *VAR_6)
{
 struct dce110_compressor *VAR_7 = FUNC_0(VAR_6);
 uint32_t VAR_8 = 0;

 if (VAR_6->options.bits.FBC_SUPPORT) {
  if (FUNC_1(VAR_6, &VAR_8)) {
   uint32_t VAR_9;

   VAR_9 = FUNC_2(VAR_6->ctx, VAR_5);
   FUNC_5(VAR_9, 0, VAR_3, VAR_4);
   FUNC_3(VAR_6->ctx, VAR_5, VAR_9);


   VAR_6->attached_inst = 0;
   VAR_6->is_enabled = 0;

   FUNC_6(VAR_7, 0);
  }


  if (VAR_8 > VAR_2 && VAR_8 < VAR_1)
   FUNC_4(VAR_6,
     VAR_8 - VAR_0);
 }
}
