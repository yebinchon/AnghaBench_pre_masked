
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int eax; int ecx; } ;
typedef TYPE_1__ SMMRegisters ;


 unsigned char FUNC_0 (int) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_5(SMMRegisters *VAR_1)
{
 unsigned long VAR_2,VAR_3,VAR_4;
 unsigned char VAR_5;

 VAR_2 = VAR_1->eax & 0xff00;
 VAR_3 = VAR_1->ecx & 0xffff;



 if (VAR_0==0xfccb) {
  if (VAR_2==0xfe00) {

   FUNC_2(VAR_4);
   FUNC_3(0xbe, 0xe4);
   VAR_5 = FUNC_0(0xe5);
   FUNC_1(VAR_4);
   VAR_1->eax = 0x00;
   VAR_1->ecx = (unsigned int) (VAR_5 & 0x01);
  }
  if ((VAR_2==0xff00) && (VAR_3==0x0000)) {

   FUNC_2(VAR_4);
   FUNC_3(0xbe, 0xe4);
   VAR_5 = FUNC_0(0xe5);
   FUNC_3(0xbe, 0xe4);
   FUNC_3 (VAR_5 | 0x01, 0xe5);
   FUNC_1(VAR_4);
   VAR_1->eax = 0x00;
   VAR_1->ecx = 0x00;
  }
  if ((VAR_2==0xff00) && (VAR_3==0x0001)) {

   FUNC_2(VAR_4);
   FUNC_3(0xbe, 0xe4);
   VAR_5 = FUNC_0(0xe5);
   FUNC_3(0xbe, 0xe4);
   FUNC_3(VAR_5 & 0xfe, 0xe5);
   FUNC_1(VAR_4);
   VAR_1->eax = 0x00;
   VAR_1->ecx = 0x01;
  }
 }



 if (VAR_0==0xfccc) {
  if (VAR_2==0xfe00) {

   FUNC_2(VAR_4);
   FUNC_3(0xe0, 0xe4);
   VAR_5 = FUNC_0(0xe5);
   FUNC_1(VAR_4);
   VAR_1->eax = 0x00;
   VAR_1->ecx = VAR_5 & 0x01;
  }
  if ((VAR_2==0xff00) && (VAR_3==0x0000)) {

   FUNC_2(VAR_4);
   FUNC_3(0xe0, 0xe4);
   VAR_5 = FUNC_0(0xe5);
   FUNC_4(0xe0 | ((VAR_5 & 0xfe) << 8), 0xe4);
   FUNC_1(VAR_4);
   VAR_1->eax = 0x00;
   VAR_1->ecx = 0x00;
  }
  if ((VAR_2==0xff00) && (VAR_3==0x0001)) {

   FUNC_2(VAR_4);
   FUNC_3(0xe0, 0xe4);
   VAR_5 = FUNC_0(0xe5);
   FUNC_4(0xe0 | ((VAR_5 | 0x01) << 8), 0xe4);
   FUNC_1(VAR_4);
   VAR_1->eax = 0x00;
   VAR_1->ecx = 0x01;
  }
 }

 return 0;
}
