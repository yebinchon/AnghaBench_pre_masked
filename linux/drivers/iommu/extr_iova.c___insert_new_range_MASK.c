
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iova_domain {int rbroot; } ;
struct iova {int dummy; } ;


 struct iova* FUNC_0 (unsigned long,unsigned long) ;
 int FUNC_1 (int *,struct iova*,int *) ;

__attribute__((used)) static struct iova *
FUNC_2(struct iova_domain *VAR_0,
 unsigned long VAR_1, unsigned long VAR_2)
{
 struct iova *VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3)
  FUNC_1(&VAR_0->rbroot, VAR_3, ((void*)0));

 return VAR_3;
}
