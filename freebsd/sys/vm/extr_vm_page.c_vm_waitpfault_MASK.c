
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct domainset {int ds_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int *) ;

void
FUNC_4(struct domainset *VAR_5, int VAR_6)
{






 FUNC_1(&VAR_2);
 if (FUNC_3(&VAR_5->ds_mask)) {
  VAR_4++;
  FUNC_0(&VAR_3, &VAR_2, VAR_1 | VAR_0,
      "pfault", VAR_6);
 } else
  FUNC_2(&VAR_2);
}
