
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct emc6w201_data {scalar_t__** in; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; int nr; } ;


 struct emc6w201_data* FUNC_0 (struct device*) ;
 unsigned int* VAR_0 ;
 int FUNC_1 (char*,char*,unsigned int) ;
 TYPE_1__* FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2,
         char *VAR_3)
{
 struct emc6w201_data *VAR_4 = FUNC_0(VAR_1);
 int VAR_5 = FUNC_2(VAR_2)->index;
 int VAR_6 = FUNC_2(VAR_2)->nr;

 return FUNC_1(VAR_3, "%u\n",
         (unsigned)VAR_4->in[VAR_5][VAR_6] * VAR_0[VAR_6] / 0xC0);
}
