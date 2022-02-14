
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max16065_data {scalar_t__ curr_sense; int curr_gain; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 struct max16065_data* FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (char*,int ,char*,int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
         struct device_attribute *VAR_2, char *VAR_3)
{
 struct max16065_data *VAR_4 = FUNC_1(VAR_1);

 if (FUNC_3(VAR_4->curr_sense < 0))
  return VAR_4->curr_sense;

 return FUNC_2(VAR_3, VAR_0, "%d\n",
   FUNC_0(VAR_4->curr_sense, VAR_4->curr_gain));
}
