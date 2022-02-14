
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int of_node; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,char const*,int) ;
 int FUNC_1 (int ,char const*,int *) ;

int FUNC_2(struct device *VAR_1, u32 *VAR_2,
    const char *VAR_3, bool VAR_4)
{
 int VAR_5;
 u32 VAR_6 = 0;

 VAR_5 = FUNC_1(VAR_1->of_node, VAR_3, &VAR_6);
 if (VAR_5 && (!VAR_4 && VAR_5 == -VAR_0)) {
  FUNC_0(VAR_1, "Failed to get %s value: %d\n",
   VAR_3, VAR_5);
  return VAR_5;
 }
 *VAR_2 = VAR_6;

 return 0;
}
