
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct counter_device_attr_group {int attr_list; } ;
struct counter_count_ext_unit {struct counter_count_ext const* ext; struct counter_count* count; } ;
struct counter_count_ext {scalar_t__ write; scalar_t__ read; int name; } ;
struct counter_count {size_t num_ext; struct counter_count_ext* ext; } ;
struct counter_attr_parm {char* prefix; struct counter_count_ext_unit* component; int * store; int * show; int name; struct counter_device_attr_group* group; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct counter_attr_parm*) ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct counter_count_ext_unit*) ;
 struct counter_count_ext_unit* FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(
 struct counter_device_attr_group *const VAR_4,
 struct counter_count *const VAR_5)
{
 size_t VAR_6;
 const struct counter_count_ext *VAR_7;
 struct counter_count_ext_unit *VAR_8;
 struct counter_attr_parm VAR_9;
 int VAR_10;


 for (VAR_6 = 0 ; VAR_6 < VAR_5->num_ext; VAR_6++) {
  VAR_7 = VAR_5->ext + VAR_6;


  VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_1);
  if (!VAR_8) {
   VAR_10 = -VAR_0;
   goto err_free_attr_list;
  }
  VAR_8->count = VAR_5;
  VAR_8->ext = VAR_7;


  VAR_9.group = VAR_4;
  VAR_9.prefix = "";
  VAR_9.name = VAR_7->name;
  VAR_9.show = (VAR_7->read) ? VAR_2 : ((void*)0);
  VAR_9.store = (VAR_7->write) ? VAR_3 : ((void*)0);
  VAR_9.component = VAR_8;
  VAR_10 = FUNC_0(&VAR_9);
  if (VAR_10) {
   FUNC_2(VAR_8);
   goto err_free_attr_list;
  }
 }

 return 0;

err_free_attr_list:
 FUNC_1(&VAR_4->attr_list);
 return VAR_10;
}
