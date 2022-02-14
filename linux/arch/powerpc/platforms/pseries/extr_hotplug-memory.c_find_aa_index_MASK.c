
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct property {int* value; int length; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 struct property* FUNC_2 (struct property*,int) ;
 scalar_t__ FUNC_3 (int*,int const*,int) ;
 int FUNC_4 (int*,int const*,int) ;
 int FUNC_5 (struct device_node*,struct property*) ;

__attribute__((used)) static bool FUNC_6(struct device_node *VAR_0,
    struct property *VAR_1,
    const u32 *VAR_2, u32 *VAR_3)
{
 u32 *VAR_4, VAR_5;
 struct property *VAR_6;
 int VAR_7, VAR_8, VAR_9;
 int VAR_10, VAR_11;







 VAR_4 = VAR_1->value;

 VAR_7 = FUNC_0(VAR_4[0]);
 VAR_8 = FUNC_0(VAR_4[1]);
 VAR_9 = VAR_8 * sizeof(u32);

 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  VAR_11 = (VAR_10 * VAR_8) + 2;

  if (FUNC_3(&VAR_4[VAR_11], &VAR_2[1], VAR_9))
   continue;

  *VAR_3 = VAR_10;
  return 1;
 }

 VAR_5 = VAR_1->length + VAR_9;
 VAR_6 = FUNC_2(VAR_1, VAR_5);
 if (!VAR_6)
  return 0;

 VAR_4 = VAR_6->value;


 VAR_4[0] = FUNC_1(VAR_7 + 1);


 VAR_11 = VAR_7 * VAR_8 + 2;
 FUNC_4(&VAR_4[VAR_11], &VAR_2[1], VAR_9);

 FUNC_5(VAR_0, VAR_6);






 *VAR_3 = FUNC_0(VAR_4[0]) - 1;
 return 1;
}
