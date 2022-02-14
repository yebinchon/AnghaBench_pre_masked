
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pasid_state {int dummy; } ;
struct device_state {int lock; } ;


 int VAR_0 ;
 struct pasid_state** FUNC_0 (struct device_state*,int,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct device_state *VAR_1,
      struct pasid_state *VAR_2,
      int VAR_3)
{
 struct pasid_state **VAR_4;
 unsigned long VAR_5;
 int VAR_6;

 FUNC_1(&VAR_1->lock, VAR_5);
 VAR_4 = FUNC_0(VAR_1, VAR_3, 1);

 VAR_6 = -VAR_0;
 if (VAR_4 == ((void*)0))
  goto out_unlock;

 VAR_6 = -VAR_0;
 if (*VAR_4 != ((void*)0))
  goto out_unlock;

 *VAR_4 = VAR_2;

 VAR_6 = 0;

out_unlock:
 FUNC_2(&VAR_1->lock, VAR_5);

 return VAR_6;
}
