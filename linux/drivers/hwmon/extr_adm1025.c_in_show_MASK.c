
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adm1025_data {int * in; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int FUNC_0 (int ,int ) ;
 struct adm1025_data* FUNC_1 (struct device*) ;
 int * VAR_0 ;
 int FUNC_2 (char*,char*,int) ;
 TYPE_1__* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_1, struct device_attribute *VAR_2, char *VAR_3)
{
 int VAR_4 = FUNC_3(VAR_2)->index;
 struct adm1025_data *VAR_5 = FUNC_1(VAR_1);
 return FUNC_2(VAR_3, "%u\n", FUNC_0(VAR_5->in[VAR_4],
         VAR_0[VAR_4]));
}
