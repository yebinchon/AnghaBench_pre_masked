
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmmu_vmsa_domain {int dummy; } ;
struct ipmmu_vmsa_device {int num_ctx; int lock; int ctx; struct ipmmu_vmsa_domain** domains; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct ipmmu_vmsa_device *VAR_1,
      struct ipmmu_vmsa_domain *VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;

 FUNC_2(&VAR_1->lock, VAR_3);

 VAR_4 = FUNC_0(VAR_1->ctx, VAR_1->num_ctx);
 if (VAR_4 != VAR_1->num_ctx) {
  VAR_1->domains[VAR_4] = VAR_2;
  FUNC_1(VAR_4, VAR_1->ctx);
 } else
  VAR_4 = -VAR_0;

 FUNC_3(&VAR_1->lock, VAR_3);

 return VAR_4;
}
