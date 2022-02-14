
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pasid_state {int dummy; } ;
struct device_state {int pasid_levels; struct pasid_state** states; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static struct pasid_state **FUNC_1(struct device_state *VAR_1,
        int VAR_2, bool VAR_3)
{
 struct pasid_state **VAR_4, **VAR_5;
 int VAR_6, VAR_7;

 VAR_6 = VAR_1->pasid_levels;
 VAR_4 = VAR_1->states;

 while (1) {

  VAR_7 = (VAR_2 >> (9 * VAR_6)) & 0x1ff;
  VAR_5 = &VAR_4[VAR_7];

  if (VAR_6 == 0)
   break;

  if (*VAR_5 == ((void*)0)) {
   if (!VAR_3)
    return ((void*)0);

   *VAR_5 = (void *)FUNC_0(VAR_0);
   if (*VAR_5 == ((void*)0))
    return ((void*)0);
  }

  VAR_4 = (struct pasid_state **)*VAR_5;
  VAR_6 -= 1;
 }

 return VAR_5;
}
