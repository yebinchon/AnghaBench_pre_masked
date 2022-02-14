
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct TYPE_4__ {int mode; int name; } ;
struct device_attribute {scalar_t__ store; TYPE_2__ attr; scalar_t__ show; } ;
struct counter_device_attr {int l; int component; struct device_attribute dev_attr; } ;
struct counter_attr_parm {TYPE_1__* group; int component; scalar_t__ store; scalar_t__ show; int name; int prefix; } ;
struct TYPE_3__ {int num_attr; struct list_head attr_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (struct counter_device_attr*) ;
 struct counter_device_attr* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,struct list_head* const) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_5(const struct counter_attr_parm *const VAR_2)
{
 struct counter_device_attr *VAR_3;
 struct device_attribute *VAR_4;
 int VAR_5;
 struct list_head *const VAR_6 = &VAR_2->group->attr_list;


 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;
 VAR_4 = &VAR_3->dev_attr;

 FUNC_4(&VAR_4->attr);


 VAR_4->attr.name = FUNC_0(VAR_1, "%s%s", VAR_2->prefix,
     VAR_2->name);
 if (!VAR_4->attr.name) {
  VAR_5 = -VAR_0;
  goto err_free_counter_attr;
 }
 if (VAR_2->show) {
  VAR_4->attr.mode |= 0444;
  VAR_4->show = VAR_2->show;
 }
 if (VAR_2->store) {
  VAR_4->attr.mode |= 0200;
  VAR_4->store = VAR_2->store;
 }


 VAR_3->component = VAR_2->component;


 FUNC_3(&VAR_3->l, VAR_6);
 VAR_2->group->num_attr++;

 return 0;

err_free_counter_attr:
 FUNC_1(VAR_3);
 return VAR_5;
}
