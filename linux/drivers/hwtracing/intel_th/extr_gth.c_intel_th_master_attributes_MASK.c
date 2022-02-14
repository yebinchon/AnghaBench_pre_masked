
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct attribute {char* name; int mode; } ;
struct TYPE_5__ {struct attribute attr; int store; int show; } ;
struct master_attribute {int master; struct gth_device* gth; TYPE_1__ attr; } ;
struct TYPE_6__ {char* name; struct attribute** attrs; } ;
struct gth_device {TYPE_2__ master_group; TYPE_3__* dev; } ;
struct TYPE_7__ {int kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (TYPE_3__*,int ,char*,int,char*) ;
 void* FUNC_1 (TYPE_3__*,int,int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct attribute*) ;
 int FUNC_3 (int *,TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(struct gth_device *VAR_7)
{
 struct master_attribute *VAR_8;
 struct attribute **VAR_9;
 int VAR_10, VAR_11 = VAR_4 + 2;

 VAR_9 = FUNC_1(VAR_7->dev, VAR_11, sizeof(void *), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_8 = FUNC_1(VAR_7->dev, VAR_11,
        sizeof(struct master_attribute),
        VAR_1);
 if (!VAR_8)
  return -VAR_0;

 for (VAR_10 = 0; VAR_10 < VAR_4 + 1; VAR_10++) {
  char *VAR_12;

  VAR_12 = FUNC_0(VAR_7->dev, VAR_1, "%d%s", VAR_10,
          VAR_10 == VAR_4 ? "+" : "");
  if (!VAR_12)
   return -VAR_0;

  VAR_8[VAR_10].attr.attr.name = VAR_12;
  VAR_8[VAR_10].attr.attr.mode = VAR_2 | VAR_3;
  VAR_8[VAR_10].attr.show = VAR_5;
  VAR_8[VAR_10].attr.store = VAR_6;

  FUNC_2(&VAR_8[VAR_10].attr.attr);
  VAR_9[VAR_10] = &VAR_8[VAR_10].attr.attr;

  VAR_8[VAR_10].gth = VAR_7;
  VAR_8[VAR_10].master = VAR_10;
 }

 VAR_7->master_group.name = "masters";
 VAR_7->master_group.attrs = VAR_9;

 return FUNC_3(&VAR_7->dev->kobj, &VAR_7->master_group);
}
