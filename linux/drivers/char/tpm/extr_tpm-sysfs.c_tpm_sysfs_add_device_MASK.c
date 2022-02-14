
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_chip {int flags; scalar_t__ groups_cnt; int ** groups; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;

void FUNC_1(struct tpm_chip *VAR_2)
{
 if (VAR_2->flags & VAR_0)
  return;

 FUNC_0(VAR_2->groups_cnt != 0);
 VAR_2->groups[VAR_2->groups_cnt++] = &VAR_1;
}
