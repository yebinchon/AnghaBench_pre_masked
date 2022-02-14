
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct msixcap {int msgctrl; int table_info; int pba_info; int capid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct msixcap*,int) ;

__attribute__((used)) static void
FUNC_2(struct msixcap *VAR_2, int VAR_3, int VAR_4,
       uint32_t VAR_5)
{

 FUNC_0(VAR_5 % 4096 == 0);

 FUNC_1(VAR_2, sizeof(struct msixcap));
 VAR_2->capid = VAR_1;






 VAR_2->msgctrl = VAR_3 - 1;






 VAR_2->table_info = VAR_4 & VAR_0;
 VAR_2->pba_info = VAR_5 | (VAR_4 & VAR_0);
}
