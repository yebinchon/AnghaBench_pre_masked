
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
struct TYPE_5__ {int (* set ) (struct hidma_mgmt_dev*,unsigned long) ;int name; } ;


 unsigned int FUNC_0 (TYPE_2__*) ;
 struct hidma_mgmt_dev* FUNC_1 (struct device*) ;
 TYPE_2__* VAR_0 ;
 int FUNC_2 (char const*,int ,unsigned long*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (struct hidma_mgmt_dev*,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1, struct device_attribute *VAR_2,
     const char *VAR_3, size_t VAR_4)
{
 struct hidma_mgmt_dev *VAR_5 = FUNC_1(VAR_1);
 unsigned long VAR_6;
 unsigned int VAR_7;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_3, 0, &VAR_6);
 if (VAR_8)
  return VAR_8;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_0); VAR_7++) {
  if (FUNC_3(VAR_2->attr.name, VAR_0[VAR_7].name) == 0) {
   VAR_8 = VAR_0[VAR_7].set(VAR_5, VAR_6);
   if (VAR_8)
    return VAR_8;

   break;
  }
 }
 return VAR_4;
}
