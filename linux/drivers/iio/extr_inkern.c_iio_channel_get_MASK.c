
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_channel {int dummy; } ;
struct device {int of_node; } ;


 char* FUNC_0 (struct device*) ;
 struct iio_channel* FUNC_1 (char const*,char const*) ;
 struct iio_channel* FUNC_2 (int ,char const*) ;

struct iio_channel *FUNC_3(struct device *VAR_0,
        const char *VAR_1)
{
 const char *VAR_2 = VAR_0 ? FUNC_0(VAR_0) : ((void*)0);
 struct iio_channel *VAR_3;

 if (VAR_0) {
  VAR_3 = FUNC_2(VAR_0->of_node,
           VAR_1);
  if (VAR_3 != ((void*)0))
   return VAR_3;
 }

 return FUNC_1(VAR_2, VAR_1);
}
