
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uv_hub_nmi_s {int nmi_count; int cpu_owner; int in_nmi; } ;


 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(int VAR_2, struct uv_hub_nmi_s *VAR_3)
{
 int VAR_4 = FUNC_0(&VAR_3->in_nmi, 1, 1);

 if (VAR_4) {
  FUNC_2(&VAR_3->cpu_owner, VAR_2);
  if (FUNC_0(&VAR_0, 1, 1))
   FUNC_2(&VAR_1, VAR_2);

  FUNC_1(&VAR_3->nmi_count);
 }
 return VAR_4;
}
