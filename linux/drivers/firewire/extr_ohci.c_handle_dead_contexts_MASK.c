
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_ohci {int it_context_support; int ir_context_support; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct fw_ohci*,char*,int ) ;
 int FUNC_3 (char*,char*,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct fw_ohci *VAR_4)
{
 unsigned int VAR_5;
 char VAR_6[8];

 FUNC_2(VAR_4, "ATReq", VAR_1);
 FUNC_2(VAR_4, "ATRsp", VAR_3);
 FUNC_2(VAR_4, "ARReq", VAR_0);
 FUNC_2(VAR_4, "ARRsp", VAR_2);
 for (VAR_5 = 0; VAR_5 < 32; ++VAR_5) {
  if (!(VAR_4->it_context_support & (1 << VAR_5)))
   continue;
  FUNC_3(VAR_6, "IT%u", VAR_5);
  FUNC_2(VAR_4, VAR_6, FUNC_1(VAR_5));
 }
 for (VAR_5 = 0; VAR_5 < 32; ++VAR_5) {
  if (!(VAR_4->ir_context_support & (1 << VAR_5)))
   continue;
  FUNC_3(VAR_6, "IR%u", VAR_5);
  FUNC_2(VAR_4, VAR_6, FUNC_0(VAR_5));
 }

}
