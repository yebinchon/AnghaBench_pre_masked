
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int irqreturn_t ;
struct TYPE_2__ {unsigned char s; unsigned char c; int valid; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned char,unsigned char) ;
 int FUNC_1 (unsigned char,unsigned char) ;
 TYPE_1__ VAR_1 ;
 unsigned char FUNC_2 () ;
 unsigned char FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_2, void *VAR_3)
{
 unsigned char VAR_4, VAR_5;

 VAR_4 = FUNC_3();
 VAR_5 = FUNC_2();

 switch (VAR_4 >> 4) {
 case 0x5:
  FUNC_1(VAR_4, VAR_5);
  break;
 case 0x6:
  FUNC_0(VAR_4, VAR_5);
  break;
 case 0x4:
  VAR_1.s = VAR_4;
  VAR_1.c = VAR_5;
  FUNC_4();
  VAR_1.valid = 1;
  break;
 }
 return VAR_0;
}
