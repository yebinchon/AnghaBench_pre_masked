
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transport_container {int dummy; } ;
struct transport_class {int (* setup ) (struct transport_container*,struct device*,struct device*) ;} ;
struct device {int dummy; } ;
struct attribute_container {int class; } ;


 struct transport_container* FUNC_0 (struct attribute_container*) ;
 struct transport_class* FUNC_1 (int ) ;
 int FUNC_2 (struct transport_container*,struct device*,struct device*) ;

__attribute__((used)) static int FUNC_3(struct attribute_container *VAR_0,
        struct device *VAR_1,
        struct device *VAR_2)
{
 struct transport_class *VAR_3 = FUNC_1(VAR_0->class);
 struct transport_container *VAR_4 = FUNC_0(VAR_0);

 if (VAR_3->setup)
  VAR_3->setup(VAR_4, VAR_1, VAR_2);

 return 0;
}
