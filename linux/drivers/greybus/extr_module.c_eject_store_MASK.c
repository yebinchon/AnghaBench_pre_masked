
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gb_module {size_t num_interfaces; int module_id; TYPE_1__* hd; struct gb_interface** interfaces; } ;
struct gb_interface {int ejected; int mutex; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int svc; } ;


 int FUNC_0 (struct gb_interface*) ;
 int FUNC_1 (struct gb_interface*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char const*,int ,long*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct gb_module* FUNC_6 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_0,
      struct device_attribute *VAR_1,
      const char *VAR_2, size_t VAR_3)
{
 struct gb_module *VAR_4 = FUNC_6(VAR_0);
 struct gb_interface *VAR_5;
 size_t VAR_6;
 long VAR_7;
 int VAR_8;

 VAR_8 = FUNC_3(VAR_2, 0, &VAR_7);
 if (VAR_8)
  return VAR_8;

 if (!VAR_7)
  return VAR_3;

 for (VAR_6 = 0; VAR_6 < VAR_4->num_interfaces; ++VAR_6) {
  VAR_5 = VAR_4->interfaces[VAR_6];

  FUNC_4(&VAR_5->mutex);

  VAR_5->ejected = 1;
  FUNC_1(VAR_5);
  FUNC_0(VAR_5);
  FUNC_5(&VAR_5->mutex);
 }


 VAR_8 = FUNC_2(VAR_4->hd->svc, VAR_4->module_id);
 if (VAR_8)
  return VAR_8;

 return VAR_3;
}
