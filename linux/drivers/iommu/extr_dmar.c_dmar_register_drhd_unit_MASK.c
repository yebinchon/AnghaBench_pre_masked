
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmar_drhd_unit {int list; scalar_t__ include_all; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct dmar_drhd_unit *VAR_1)
{




 if (VAR_1->include_all)
  FUNC_1(&VAR_1->list, &VAR_0);
 else
  FUNC_0(&VAR_1->list, &VAR_0);
}
