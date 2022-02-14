
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int msr; int trap; int nip; } ;


 scalar_t__ FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct pt_regs*,unsigned int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,unsigned int*,int) ;
 int FUNC_4 (int ,int,int ) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int ,char*,char*) ;

__attribute__((used)) static int FUNC_7(struct pt_regs *VAR_4)
{
 unsigned int VAR_5;
 int VAR_6;

 FUNC_2();

 if ((VAR_4->msr & (VAR_0|VAR_2|VAR_1)) == (VAR_0|VAR_1)) {
  if (FUNC_3(VAR_4->nip, &VAR_5, 4) == 4) {
   VAR_6 = FUNC_1(VAR_4, VAR_5);
   if (VAR_6 < 0) {
    FUNC_5("Couldn't single-step %s instruction\n",
           (FUNC_0(VAR_5)? "rfid": "mtmsrd"));
    return 0;
   }
   if (VAR_6 > 0) {
    VAR_4->trap = 0xd00 | (VAR_4->trap & 1);
    FUNC_5("stepped to ");
    FUNC_6(VAR_4->nip, " ", "\n");
    FUNC_4(VAR_4->nip, 1, 0);
    return 0;
   }
  }
 }
 VAR_4->msr |= VAR_3;
 return 1;
}
