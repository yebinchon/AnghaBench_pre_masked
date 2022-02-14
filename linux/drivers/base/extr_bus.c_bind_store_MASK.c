
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_driver {int bus; } ;
struct device {int * driver; } ;
struct bus_type {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct device* FUNC_0 (struct bus_type*,int *,char const*) ;
 struct bus_type* FUNC_1 (int ) ;
 int FUNC_2 (struct bus_type*) ;
 int FUNC_3 (struct device_driver*,struct device*) ;
 scalar_t__ FUNC_4 (struct device_driver*,struct device*) ;
 int FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device_driver *VAR_1, const char *VAR_2,
     size_t VAR_3)
{
 struct bus_type *VAR_4 = FUNC_1(VAR_1->bus);
 struct device *VAR_5;
 int VAR_6 = -VAR_0;

 VAR_5 = FUNC_0(VAR_4, ((void*)0), VAR_2);
 if (VAR_5 && VAR_5->driver == ((void*)0) && FUNC_4(VAR_1, VAR_5)) {
  VAR_6 = FUNC_3(VAR_1, VAR_5);

  if (VAR_6 > 0) {

   VAR_6 = VAR_3;
  } else if (VAR_6 == 0) {

   VAR_6 = -VAR_0;
  }
 }
 FUNC_5(VAR_5);
 FUNC_2(VAR_4);
 return VAR_6;
}
