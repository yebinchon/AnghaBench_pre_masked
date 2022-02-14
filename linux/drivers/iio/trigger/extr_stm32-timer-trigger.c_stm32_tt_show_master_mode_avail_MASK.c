
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_trigger {int name; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 scalar_t__ FUNC_0 (char*,scalar_t__,char*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 struct iio_trigger* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_4,
            struct device_attribute *VAR_5,
            char *VAR_6)
{
 struct iio_trigger *VAR_7 = FUNC_2(VAR_4);
 unsigned int VAR_8, VAR_9;
 size_t VAR_10 = 0;

 if (FUNC_1(VAR_7->name))
  VAR_9 = VAR_0;
 else
  VAR_9 = VAR_1;

 for (VAR_8 = 0; VAR_8 <= VAR_9; VAR_8++)
  VAR_10 += FUNC_0(VAR_6 + VAR_10, VAR_2 - VAR_10,
   "%s ", VAR_3[VAR_8]);


 VAR_6[VAR_10 - 1] = '\n';

 return VAR_10;
}
