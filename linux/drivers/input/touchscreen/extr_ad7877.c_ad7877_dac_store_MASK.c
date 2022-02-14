
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ad7877 {unsigned int dac; int mutex; int spi; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 struct ad7877* FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,int,unsigned int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_2,
         struct device_attribute *VAR_3,
         const char *VAR_4, size_t VAR_5)
{
 struct ad7877 *VAR_6 = FUNC_1(VAR_2);
 unsigned int VAR_7;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_4, 10, &VAR_7);
 if (VAR_8)
  return VAR_8;

 FUNC_3(&VAR_6->mutex);
 VAR_6->dac = VAR_7 & 0xFF;
 FUNC_0(VAR_6->spi, VAR_1, (VAR_6->dac << 4) | VAR_0);
 FUNC_4(&VAR_6->mutex);

 return VAR_5;
}
