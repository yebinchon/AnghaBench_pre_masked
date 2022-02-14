
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ lfb_base; int lfb_size; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,int,int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int) ;
 TYPE_1__ VAR_5 ;

__attribute__((used)) static void FUNC_3(void)
{
 int VAR_6;







 if (VAR_5.lfb_base) {
  if (FUNC_1(VAR_0))
   VAR_6 = FUNC_2(VAR_1, VAR_5.lfb_size, 0x800000);
  else
   VAR_6 = FUNC_2(VAR_1, VAR_5.lfb_size, 0x4000000);

  for (; !VAR_2 && (VAR_6 >= 0x100000); VAR_6 >>= 1) {
   VAR_2 = FUNC_0(VAR_4,
         VAR_5.lfb_base, VAR_6,
         VAR_3, 0);
  }
 }
}
