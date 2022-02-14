
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int cpumask_var_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (char*,int,char*,int ) ;
 scalar_t__ FUNC_5 (char*,int,char*,...) ;
 int VAR_6 ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_7,
      struct device_attribute *VAR_8, char *VAR_9)
{
 int VAR_10 = 0, VAR_11 = VAR_2-2;
 cpumask_var_t VAR_12;


 if (!FUNC_0(&VAR_12, VAR_1))
  return -VAR_0;
 FUNC_1(VAR_12, VAR_4, VAR_3);
 VAR_10 = FUNC_4(VAR_9, VAR_11, "%*pbl", FUNC_2(VAR_12));
 FUNC_3(VAR_12);


 if (VAR_6 && VAR_5 < VAR_6) {
  if (VAR_10 && VAR_10 < VAR_11)
   VAR_9[VAR_10++] = ',';

  if (VAR_5 == VAR_6-1)
   VAR_10 += FUNC_5(&VAR_9[VAR_10], VAR_11 - VAR_10, "%u", VAR_5);
  else
   VAR_10 += FUNC_5(&VAR_9[VAR_10], VAR_11 - VAR_10, "%u-%d",
            VAR_5, VAR_6-1);
 }

 VAR_10 += FUNC_5(&VAR_9[VAR_10], VAR_11 - VAR_10, "\n");
 return VAR_10;
}
