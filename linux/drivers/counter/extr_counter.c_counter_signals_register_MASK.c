
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct counter_signal {int id; } ;
struct TYPE_2__ {char const* name; } ;
struct counter_device_attr_group {int attr_list; TYPE_1__ attr_group; } ;
struct counter_device {size_t num_signals; struct counter_signal* signals; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct counter_device_attr_group* const,struct counter_device const* const,struct counter_signal*) ;
 char* FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4(
 struct counter_device_attr_group *const VAR_2,
 const struct counter_device *const VAR_3)
{
 const size_t VAR_4 = VAR_3->num_signals;
 size_t VAR_5;
 struct counter_signal *VAR_6;
 const char *VAR_7;
 int VAR_8;


 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  VAR_6 = VAR_3->signals + VAR_5;


  VAR_7 = FUNC_2(VAR_1, "signal%d", VAR_6->id);
  if (!VAR_7) {
   VAR_8 = -VAR_0;
   goto err_free_attr_groups;
  }
  VAR_2[VAR_5].attr_group.name = VAR_7;


  VAR_8 = FUNC_1(VAR_2 + VAR_5, VAR_3,
             VAR_6);
  if (VAR_8)
   goto err_free_attr_groups;
 }

 return 0;

err_free_attr_groups:
 do {
  FUNC_3(VAR_2[VAR_5].attr_group.name);
  FUNC_0(&VAR_2[VAR_5].attr_list);
 } while (VAR_5--);
 return VAR_8;
}
