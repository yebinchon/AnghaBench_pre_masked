
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct sensor_template_group {scalar_t__ base; struct sensor_device_template** templates; int is_visible; } ;
struct TYPE_12__ {char* name; int mode; } ;
struct TYPE_13__ {int store; int show; TYPE_5__ attr; } ;
struct TYPE_8__ {int index; scalar_t__ nr; } ;
struct TYPE_11__ {scalar_t__ index; TYPE_1__ s; } ;
struct sensor_device_template {TYPE_6__ dev_attr; TYPE_4__ u; scalar_t__ s2; } ;
struct attribute {int mode; int name; } ;
struct TYPE_9__ {struct attribute attr; int store; int show; } ;
struct sensor_device_attribute_2 {TYPE_2__ dev_attr; int index; scalar_t__ nr; } ;
struct TYPE_14__ {struct attribute attr; int store; int show; } ;
struct sensor_device_attribute {TYPE_7__ dev_attr; scalar_t__ index; } ;
struct TYPE_10__ {struct sensor_device_attribute a1; struct sensor_device_attribute_2 a2; } ;
struct sensor_device_attr_u {int name; TYPE_3__ u; } ;
struct device {int dummy; } ;
struct attribute_group {int is_visible; struct attribute** attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct attribute_group* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int,int,int) ;
 struct attribute** FUNC_2 (struct device*,int,int,int ) ;
 void* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (int ,int,char*,scalar_t__) ;
 int FUNC_5 (struct attribute*) ;

__attribute__((used)) static struct attribute_group *
FUNC_6(struct device *VAR_3,
     const struct sensor_template_group *VAR_4,
     int VAR_5)
{
 struct attribute_group *VAR_6;
 struct sensor_device_attr_u *VAR_7;
 struct sensor_device_attribute *VAR_8;
 struct sensor_device_attribute_2 *VAR_9;
 struct attribute **VAR_10;
 struct sensor_device_template **VAR_11;
 int VAR_12, VAR_13;

 if (VAR_5 <= 0)
  return FUNC_0(-VAR_0);

 VAR_11 = VAR_4->templates;
 for (VAR_13 = 0; *VAR_11; VAR_11++, VAR_13++)
  ;

 if (VAR_13 == 0)
  return FUNC_0(-VAR_0);

 VAR_6 = FUNC_3(VAR_3, sizeof(*VAR_6), VAR_2);
 if (VAR_6 == ((void*)0))
  return FUNC_0(-VAR_1);

 VAR_10 = FUNC_2(VAR_3, VAR_5 * VAR_13 + 1, sizeof(*VAR_10),
        VAR_2);
 if (VAR_10 == ((void*)0))
  return FUNC_0(-VAR_1);

 VAR_7 = FUNC_3(VAR_3, FUNC_1(VAR_5, VAR_13, sizeof(*VAR_7)),
          VAR_2);
 if (VAR_7 == ((void*)0))
  return FUNC_0(-VAR_1);

 VAR_6->attrs = VAR_10;
 VAR_6->is_visible = VAR_4->is_visible;

 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
  VAR_11 = VAR_4->templates;
  while (*VAR_11 != ((void*)0)) {
   FUNC_4(VAR_7->name, sizeof(VAR_7->name),
     (*VAR_11)->dev_attr.attr.name, VAR_4->base + VAR_12);
   if ((*VAR_11)->s2) {
    VAR_9 = &VAR_7->u.a2;
    FUNC_5(&VAR_9->dev_attr.attr);
    VAR_9->dev_attr.attr.name = VAR_7->name;
    VAR_9->nr = (*VAR_11)->u.s.nr + VAR_12;
    VAR_9->index = (*VAR_11)->u.s.index;
    VAR_9->dev_attr.attr.mode =
      (*VAR_11)->dev_attr.attr.mode;
    VAR_9->dev_attr.show = (*VAR_11)->dev_attr.show;
    VAR_9->dev_attr.store = (*VAR_11)->dev_attr.store;
    *VAR_10 = &VAR_9->dev_attr.attr;
   } else {
    VAR_8 = &VAR_7->u.a1;
    FUNC_5(&VAR_8->dev_attr.attr);
    VAR_8->dev_attr.attr.name = VAR_7->name;
    VAR_8->index = (*VAR_11)->u.index + VAR_12;
    VAR_8->dev_attr.attr.mode =
      (*VAR_11)->dev_attr.attr.mode;
    VAR_8->dev_attr.show = (*VAR_11)->dev_attr.show;
    VAR_8->dev_attr.store = (*VAR_11)->dev_attr.store;
    *VAR_10 = &VAR_8->dev_attr.attr;
   }
   VAR_10++;
   VAR_7++;
   VAR_11++;
  }
 }

 return VAR_6;
}
