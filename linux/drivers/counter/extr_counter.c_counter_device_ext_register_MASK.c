
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct counter_ext_unit {TYPE_1__* ext; } ;
struct counter_device_attr_group {int attr_list; } ;
struct counter_device {size_t num_ext; TYPE_1__* ext; } ;
struct counter_attr_parm {char* prefix; struct counter_ext_unit* component; int * store; int * show; int name; struct counter_device_attr_group* group; } ;
struct TYPE_2__ {scalar_t__ write; scalar_t__ read; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct counter_attr_parm*) ;
 int FUNC_1 (int *) ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_2 (struct counter_ext_unit*) ;
 struct counter_ext_unit* FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(
 struct counter_device_attr_group *const VAR_4,
 struct counter_device *const VAR_5)
{
 size_t VAR_6;
 struct counter_ext_unit *VAR_7;
 struct counter_attr_parm VAR_8;
 int VAR_9;


 for (VAR_6 = 0 ; VAR_6 < VAR_5->num_ext; VAR_6++) {

  VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_1);
  if (!VAR_7) {
   VAR_9 = -VAR_0;
   goto err_free_attr_list;
  }

  VAR_7->ext = VAR_5->ext + VAR_6;


  VAR_8.group = VAR_4;
  VAR_8.prefix = "";
  VAR_8.name = VAR_5->ext[VAR_6].name;
  VAR_8.show = (VAR_5->ext[VAR_6].read) ? VAR_2 : ((void*)0);
  VAR_8.store = (VAR_5->ext[VAR_6].write) ? VAR_3 : ((void*)0);
  VAR_8.component = VAR_7;
  VAR_9 = FUNC_0(&VAR_8);
  if (VAR_9) {
   FUNC_2(VAR_7);
   goto err_free_attr_list;
  }
 }

 return 0;

err_free_attr_list:
 FUNC_1(&VAR_4->attr_list);
 return VAR_9;
}
