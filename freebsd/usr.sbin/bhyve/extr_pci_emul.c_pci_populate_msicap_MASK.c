
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msicap {int nextptr; int msgctrl; int capid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct msicap*,int) ;
 int FUNC_2 (int) ;

void
FUNC_3(struct msicap *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;


 FUNC_0((VAR_3 & (VAR_3 - 1)) == 0 && VAR_3 >= 1 && VAR_3 <= 32);
 VAR_5 = FUNC_2(VAR_3) - 1;

 FUNC_1(VAR_2, sizeof(struct msicap));
 VAR_2->capid = VAR_1;
 VAR_2->nextptr = VAR_4;
 VAR_2->msgctrl = VAR_0 | (VAR_5 << 1);
}
