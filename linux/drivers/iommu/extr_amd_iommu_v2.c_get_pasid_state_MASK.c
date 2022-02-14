
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pasid_state {int count; } ;
struct device_state {int lock; } ;


 struct pasid_state** FUNC_0 (struct device_state*,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static struct pasid_state *FUNC_4(struct device_state *VAR_0,
        int VAR_1)
{
 struct pasid_state **VAR_2, *VAR_3 = ((void*)0);
 unsigned long VAR_4;

 FUNC_2(&VAR_0->lock, VAR_4);
 VAR_2 = FUNC_0(VAR_0, VAR_1, 0);

 if (VAR_2 == ((void*)0))
  goto out_unlock;

 VAR_3 = *VAR_2;
 if (VAR_3)
  FUNC_1(&VAR_3->count);

out_unlock:
 FUNC_3(&VAR_0->lock, VAR_4);

 return VAR_3;
}
