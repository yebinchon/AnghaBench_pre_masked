
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct picolcd_fb_data {unsigned int update_rate; } ;
struct picolcd_data {TYPE_1__* fb_info; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {struct picolcd_fb_data* par; } ;


 size_t VAR_0 ;
 unsigned int VAR_1 ;
 struct picolcd_data* FUNC_0 (struct device*) ;
 int FUNC_1 (size_t,size_t) ;
 scalar_t__ FUNC_2 (char*,size_t,char*,unsigned int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
  struct device_attribute *VAR_3, char *VAR_4)
{
 struct picolcd_data *VAR_5 = FUNC_0(VAR_2);
 struct picolcd_fb_data *VAR_6 = VAR_5->fb_info->par;
 unsigned VAR_7, VAR_8 = VAR_6->update_rate;
 size_t VAR_9 = 0;

 for (VAR_7 = 1; VAR_7 <= VAR_1; VAR_7++)
  if (VAR_9 >= VAR_0)
   break;
  else if (VAR_7 == VAR_8)
   VAR_9 += FUNC_2(VAR_4+VAR_9, VAR_0-VAR_9, "[%u] ", VAR_7);
  else
   VAR_9 += FUNC_2(VAR_4+VAR_9, VAR_0-VAR_9, "%u ", VAR_7);
 if (VAR_9 > 0)
  VAR_4[FUNC_1(VAR_9, (size_t)VAR_0)-1] = '\n';
 return VAR_9;
}
