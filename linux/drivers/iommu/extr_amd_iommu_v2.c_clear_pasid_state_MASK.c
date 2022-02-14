
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pasid_state {int dummy; } ;
struct device_state {int lock; } ;


 struct pasid_state** FUNC_0 (struct device_state*,int,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct device_state *VAR_0, int VAR_1)
{
 struct pasid_state **VAR_2;
 unsigned long VAR_3;

 FUNC_1(&VAR_0->lock, VAR_3);
 VAR_2 = FUNC_0(VAR_0, VAR_1, 1);

 if (VAR_2 == ((void*)0))
  goto out_unlock;

 *VAR_2 = ((void*)0);

out_unlock:
 FUNC_2(&VAR_0->lock, VAR_3);
}
