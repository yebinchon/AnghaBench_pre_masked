
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oidset {int set; } ;


 int FUNC_0 (int *,size_t) ;
 int FUNC_1 (int *,int ,int) ;

void FUNC_2(struct oidset *VAR_0, size_t VAR_1)
{
 FUNC_1(&VAR_0->set, 0, sizeof(VAR_0->set));
 if (VAR_1)
  FUNC_0(&VAR_0->set, VAR_1);
}
