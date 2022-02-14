
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {int dummy; } ;
struct ipack_bus_ops {int dummy; } ;
struct ipack_bus_device {int bus_nr; int slots; struct module* owner; struct ipack_bus_ops const* ops; struct device* parent; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct ipack_bus_device*) ;
 struct ipack_bus_device* FUNC_2 (int,int ) ;

struct ipack_bus_device *FUNC_3(struct device *VAR_2, int VAR_3,
         const struct ipack_bus_ops *VAR_4,
         struct module *VAR_5)
{
 int VAR_6;
 struct ipack_bus_device *VAR_7;

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_0);
 if (!VAR_7)
  return ((void*)0);

 VAR_6 = FUNC_0(&VAR_1, 0, 0, VAR_0);
 if (VAR_6 < 0) {
  FUNC_1(VAR_7);
  return ((void*)0);
 }

 VAR_7->bus_nr = VAR_6;
 VAR_7->parent = VAR_2;
 VAR_7->slots = VAR_3;
 VAR_7->ops = VAR_4;
 VAR_7->owner = VAR_5;
 return VAR_7;
}
