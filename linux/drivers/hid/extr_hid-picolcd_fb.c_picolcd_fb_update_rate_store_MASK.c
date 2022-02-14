
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct picolcd_fb_data {unsigned int update_rate; } ;
struct picolcd_data {TYPE_2__* fb_info; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_4__ {TYPE_1__* fbdefio; struct picolcd_fb_data* par; } ;
struct TYPE_3__ {int delay; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 struct picolcd_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,char*,unsigned int*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_5,
  struct device_attribute *VAR_6, const char *VAR_7, size_t VAR_8)
{
 struct picolcd_data *VAR_9 = FUNC_0(VAR_5);
 struct picolcd_fb_data *VAR_10 = VAR_9->fb_info->par;
 int VAR_11;
 unsigned VAR_12;

 if (VAR_8 < 1 || VAR_8 > 10)
  return -VAR_0;

 VAR_11 = FUNC_1(VAR_7, "%u", &VAR_12);
 if (VAR_11 != 1)
  return -VAR_0;

 if (VAR_12 > VAR_4)
  return -VAR_1;
 else if (VAR_12 == 0)
  VAR_12 = VAR_3;

 VAR_10->update_rate = VAR_12;
 VAR_9->fb_info->fbdefio->delay = VAR_2 / VAR_10->update_rate;
 return VAR_8;
}
