
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm73_data {int ctrl; int lock; int client; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ s32 ;


 int FUNC_0 (unsigned long*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct lm73_data* FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (int ,int ,int) ;
 scalar_t__ FUNC_3 (char const*,int,unsigned long*) ;
 unsigned long* VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_4, struct device_attribute *VAR_5,
         const char *VAR_6, size_t VAR_7)
{
 struct lm73_data *VAR_8 = FUNC_1(VAR_4);
 unsigned long VAR_9;
 s32 VAR_10;
 int VAR_11 = 0;

 VAR_10 = FUNC_3(VAR_6, 10, &VAR_9);
 if (VAR_10 < 0)
  return VAR_10;







 while (VAR_11 < (FUNC_0(VAR_3) - 1) &&
   VAR_9 > VAR_3[VAR_11])
  VAR_11++;

 FUNC_4(&VAR_8->lock);
 VAR_8->ctrl &= VAR_1;
 VAR_8->ctrl |= VAR_11 << VAR_0;
 VAR_10 = FUNC_2(VAR_8->client, VAR_2,
     VAR_8->ctrl);
 FUNC_5(&VAR_8->lock);

 if (VAR_10 < 0)
  return VAR_10;

 return VAR_7;
}
