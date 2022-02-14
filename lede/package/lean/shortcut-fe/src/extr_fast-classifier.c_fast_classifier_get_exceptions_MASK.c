
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fast_classifier {int* exceptions; int lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct fast_classifier VAR_2 ;
 char** VAR_3 ;
 scalar_t__ FUNC_0 (char*,int,char*,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_4,
         struct device_attribute *VAR_5,
         char *VAR_6)
{
 int VAR_7, VAR_8;
 struct fast_classifier *VAR_9 = &VAR_2;

 FUNC_1(&VAR_9->lock);
 for (VAR_8 = 0, VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  if (VAR_9->exceptions[VAR_7]) {
   VAR_8 += FUNC_0(VAR_6 + VAR_8, (ssize_t)(VAR_1 - VAR_8), "%s = %d\n", VAR_3[VAR_7], VAR_9->exceptions[VAR_7]);
  }
 }
 FUNC_2(&VAR_9->lock);

 return VAR_8;
}
