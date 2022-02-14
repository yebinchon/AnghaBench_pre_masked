
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* name; } ;
struct counter_device_attr_group {int attr_list; TYPE_1__ attr_group; } ;
struct counter_device {size_t num_counts; struct counter_count* counts; } ;
struct counter_count {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct counter_device_attr_group* const,struct counter_device const* const,struct counter_count*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct counter_device_attr_group* const,struct counter_device const* const,struct counter_count*,char const*) ;
 char* FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(
 struct counter_device_attr_group *const VAR_2,
 const struct counter_device *const VAR_3)
{
 size_t VAR_4;
 struct counter_count *VAR_5;
 const char *VAR_6;
 int VAR_7;


 for (VAR_4 = 0; VAR_4 < VAR_3->num_counts; VAR_4++) {
  VAR_5 = VAR_3->counts + VAR_4;


  VAR_6 = FUNC_3(VAR_1, "count%d", VAR_5->id);
  if (!VAR_6) {
   VAR_7 = -VAR_0;
   goto err_free_attr_groups;
  }
  VAR_2[VAR_4].attr_group.name = VAR_6;


  VAR_7 = FUNC_2(VAR_2 + VAR_4, VAR_3, VAR_5,
      VAR_6);
  if (VAR_7)
   goto err_free_attr_groups;


  VAR_7 = FUNC_0(VAR_2 + VAR_4, VAR_3,
            VAR_5);
  if (VAR_7)
   goto err_free_attr_groups;
 }

 return 0;

err_free_attr_groups:
 do {
  FUNC_4(VAR_2[VAR_4].attr_group.name);
  FUNC_1(&VAR_2[VAR_4].attr_list);
 } while (VAR_4--);
 return VAR_7;
}
