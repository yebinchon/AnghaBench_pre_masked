
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct attribute {char* name; int mode; } ;
struct TYPE_7__ {struct attribute attr; int store; int show; } ;
struct output_attribute {int port; int parm; struct gth_device* gth; TYPE_1__ attr; } ;
struct TYPE_8__ {char* name; struct attribute** attrs; } ;
struct gth_device {TYPE_2__ output_group; TYPE_4__* dev; } ;
struct TYPE_10__ {int kobj; } ;
struct TYPE_9__ {scalar_t__ writable; scalar_t__ readable; int name; } ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_1 (TYPE_4__*,int ,char*,int,int ) ;
 void* FUNC_2 (TYPE_4__*,int,int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_3__* VAR_7 ;
 int FUNC_3 (struct attribute*) ;
 int FUNC_4 (int *,TYPE_2__*) ;

__attribute__((used)) static int FUNC_5(struct gth_device *VAR_8)
{
 struct output_attribute *VAR_9;
 struct attribute **VAR_10;
 int VAR_11, VAR_12, VAR_13 = VAR_4;
 int VAR_14 = FUNC_0(VAR_7);
 int VAR_15 = VAR_13 * VAR_14 + 1;

 VAR_10 = FUNC_2(VAR_8->dev, VAR_15, sizeof(void *), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_9 = FUNC_2(VAR_8->dev, VAR_15,
     sizeof(struct output_attribute),
     VAR_1);
 if (!VAR_9)
  return -VAR_0;

 for (VAR_11 = 0; VAR_11 < VAR_13; VAR_11++) {
  for (VAR_12 = 0; VAR_12 < VAR_14; VAR_12++) {
   unsigned int VAR_16 = VAR_11 * VAR_14 + VAR_12;
   char *VAR_17;

   VAR_17 = FUNC_1(VAR_8->dev, VAR_1, "%d_%s", VAR_11,
           VAR_7[VAR_12].name);
   if (!VAR_17)
    return -VAR_0;

   VAR_9[VAR_16].attr.attr.name = VAR_17;

   if (VAR_7[VAR_12].readable) {
    VAR_9[VAR_16].attr.attr.mode |= VAR_2;
    VAR_9[VAR_16].attr.show = VAR_5;
   }

   if (VAR_7[VAR_12].writable) {
    VAR_9[VAR_16].attr.attr.mode |= VAR_3;
    VAR_9[VAR_16].attr.store = VAR_6;
   }

   FUNC_3(&VAR_9[VAR_16].attr.attr);
   VAR_10[VAR_16] = &VAR_9[VAR_16].attr.attr;

   VAR_9[VAR_16].gth = VAR_8;
   VAR_9[VAR_16].port = VAR_11;
   VAR_9[VAR_16].parm = VAR_12;
  }
 }

 VAR_8->output_group.name = "outputs";
 VAR_8->output_group.attrs = VAR_10;

 return FUNC_4(&VAR_8->dev->kobj, &VAR_8->output_group);
}
