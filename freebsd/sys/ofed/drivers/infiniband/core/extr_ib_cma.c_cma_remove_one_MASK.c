
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_device {int dummy; } ;
struct cma_device {struct cma_device* default_gid_type; int sysctl_ctx; int list; } ;


 int FUNC_0 (struct cma_device*) ;
 int FUNC_1 (struct cma_device*) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct ib_device *VAR_1, void *VAR_2)
{
 struct cma_device *VAR_3 = VAR_2;

 if (!VAR_3)
  return;

 FUNC_3(&VAR_0);
 FUNC_2(&VAR_3->list);
 FUNC_4(&VAR_0);

 FUNC_0(VAR_3);
 FUNC_5(&VAR_3->sysctl_ctx);
 FUNC_1(VAR_3->default_gid_type);
 FUNC_1(VAR_3);
}
