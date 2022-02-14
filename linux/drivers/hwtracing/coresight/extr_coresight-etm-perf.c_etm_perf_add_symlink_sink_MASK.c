
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct device {int kobj; } ;
struct TYPE_6__ {int mode; int name; } ;
struct TYPE_5__ {TYPE_2__ attr; int show; } ;
struct dev_ext_attribute {unsigned long* var; TYPE_1__ attr; } ;
struct coresight_device {scalar_t__ type; struct dev_ext_attribute* ea; struct device dev; } ;
struct TYPE_7__ {struct device* dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char const*,int ) ;
 struct dev_ext_attribute* FUNC_2 (struct device*,int,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_4__ VAR_8 ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (int *,char const*) ;
 int FUNC_5 (int *,TYPE_2__*,char*) ;
 int FUNC_6 (TYPE_2__*) ;

int FUNC_7(struct coresight_device *VAR_9)
{
 int VAR_10;
 unsigned long VAR_11;
 const char *VAR_12;
 struct device *VAR_13 = VAR_8.dev;
 struct device *VAR_14 = &VAR_9->dev;
 struct dev_ext_attribute *VAR_15;

 if (VAR_9->type != VAR_1 &&
     VAR_9->type != VAR_0)
  return -VAR_2;

 if (VAR_9->ea != ((void*)0))
  return -VAR_2;

 if (!VAR_7)
  return -VAR_4;

 VAR_15 = FUNC_2(VAR_14, sizeof(*VAR_15), VAR_5);
 if (!VAR_15)
  return -VAR_3;

 VAR_12 = FUNC_0(VAR_14);

 VAR_11 = FUNC_3(FUNC_4(((void*)0), VAR_12));

 FUNC_6(&VAR_15->attr.attr);
 VAR_15->attr.attr.name = FUNC_1(VAR_14, VAR_12, VAR_5);
 if (!VAR_15->attr.attr.name)
  return -VAR_3;

 VAR_15->attr.attr.mode = 0444;
 VAR_15->attr.show = VAR_6;
 VAR_15->var = (unsigned long *)VAR_11;

 VAR_10 = FUNC_5(&VAR_13->kobj,
          &VAR_15->attr.attr, "sinks");

 if (!VAR_10)
  VAR_9->ea = VAR_15;

 return VAR_10;
}
