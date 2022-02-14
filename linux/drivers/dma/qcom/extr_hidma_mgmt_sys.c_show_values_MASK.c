
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hidma_mgmt_dev {int dummy; } ;
struct TYPE_4__ {int name; } ;
struct device_attribute {TYPE_1__ attr; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_5__ {int (* get ) (struct hidma_mgmt_dev*) ;int name; } ;


 unsigned int FUNC_0 (TYPE_2__*) ;
 struct hidma_mgmt_dev* FUNC_1 (struct device*) ;
 TYPE_2__* VAR_0 ;
 int FUNC_2 (char*,char*,int) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct hidma_mgmt_dev*) ;
 int FUNC_6 (struct hidma_mgmt_dev*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_1, struct device_attribute *VAR_2,
      char *VAR_3)
{
 struct hidma_mgmt_dev *VAR_4 = FUNC_1(VAR_1);
 unsigned int VAR_5;

 VAR_3[0] = 0;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_0); VAR_5++) {
  if (FUNC_3(VAR_2->attr.name, VAR_0[VAR_5].name) == 0) {
   FUNC_2(VAR_3, "%d\n", VAR_0[VAR_5].get(VAR_4));
   break;
  }
 }
 return FUNC_4(VAR_3);
}
