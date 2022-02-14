
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmmu_vmsa_device {int lock; int ** domains; int ctx; } ;


 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct ipmmu_vmsa_device *VAR_0,
          unsigned int VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_0->lock, VAR_2);

 FUNC_0(VAR_1, VAR_0->ctx);
 VAR_0->domains[VAR_1] = ((void*)0);

 FUNC_2(&VAR_0->lock, VAR_2);
}
