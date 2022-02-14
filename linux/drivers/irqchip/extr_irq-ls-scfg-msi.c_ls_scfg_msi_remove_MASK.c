
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct ls_scfg_msi {int msir_num; int parent; int msi_domain; int * msir; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct ls_scfg_msi* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct platform_device*,int *) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct ls_scfg_msi *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->msir_num; VAR_2++)
  FUNC_1(&VAR_1->msir[VAR_2]);

 FUNC_0(VAR_1->msi_domain);
 FUNC_0(VAR_1->parent);

 FUNC_3(VAR_0, ((void*)0));

 return 0;
}
