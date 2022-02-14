
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct counter_signal_ext_unit {struct counter_signal_ext const* ext; struct counter_signal* signal; } ;
struct counter_signal_ext {scalar_t__ write; scalar_t__ read; int name; } ;
struct counter_signal {size_t num_ext; struct counter_signal_ext* ext; } ;
struct counter_device_attr_group {int attr_list; } ;
struct counter_attr_parm {char* prefix; struct counter_signal_ext_unit* component; int * store; int * show; int name; struct counter_device_attr_group* group; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct counter_attr_parm*) ;
 int FUNC_1 (int *) ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_2 (struct counter_signal_ext_unit*) ;
 struct counter_signal_ext_unit* FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(
 struct counter_device_attr_group *const VAR_4,
 struct counter_signal *const VAR_5)
{
 const size_t VAR_6 = VAR_5->num_ext;
 size_t VAR_7;
 const struct counter_signal_ext *VAR_8;
 struct counter_signal_ext_unit *VAR_9;
 struct counter_attr_parm VAR_10;
 int VAR_11;


 for (VAR_7 = 0 ; VAR_7 < VAR_6; VAR_7++) {
  VAR_8 = VAR_5->ext + VAR_7;


  VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_1);
  if (!VAR_9) {
   VAR_11 = -VAR_0;
   goto err_free_attr_list;
  }
  VAR_9->signal = VAR_5;
  VAR_9->ext = VAR_8;


  VAR_10.group = VAR_4;
  VAR_10.prefix = "";
  VAR_10.name = VAR_8->name;
  VAR_10.show = (VAR_8->read) ? VAR_2 : ((void*)0);
  VAR_10.store = (VAR_8->write) ? VAR_3 : ((void*)0);
  VAR_10.component = VAR_9;
  VAR_11 = FUNC_0(&VAR_10);
  if (VAR_11) {
   FUNC_2(VAR_9);
   goto err_free_attr_list;
  }
 }

 return 0;

err_free_attr_list:
 FUNC_1(&VAR_4->attr_list);
 return VAR_11;
}
