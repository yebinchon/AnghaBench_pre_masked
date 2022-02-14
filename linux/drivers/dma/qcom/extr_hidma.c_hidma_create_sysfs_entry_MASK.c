
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dev; } ;
struct hidma_dev {TYPE_1__ ddev; } ;
struct TYPE_4__ {char* name; int mode; } ;
struct device_attribute {TYPE_2__ attr; int show; } ;


 int VAR_0 ;
 struct device_attribute* FUNC_0 (int ,int,int ) ;
 char* FUNC_1 (int ,char*,int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static struct device_attribute*
FUNC_3(struct hidma_dev *VAR_2, char *VAR_3, int VAR_4)
{
 struct device_attribute *VAR_5;
 char *VAR_6;

 VAR_5 = FUNC_0(VAR_2->ddev.dev, sizeof(struct device_attribute),
        VAR_0);
 if (!VAR_5)
  return ((void*)0);

 VAR_6 = FUNC_1(VAR_2->ddev.dev, VAR_3, VAR_0);
 if (!VAR_6)
  return ((void*)0);

 VAR_5->attr.name = VAR_6;
 VAR_5->attr.mode = VAR_4;
 VAR_5->show = VAR_1;
 FUNC_2(&VAR_5->attr);

 return VAR_5;
}
