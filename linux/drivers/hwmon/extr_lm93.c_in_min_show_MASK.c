
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lm93_data {TYPE_1__* block7; int * vccp_limits; int * vid; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {int index; } ;
struct TYPE_3__ {int min; } ;


 long FUNC_0 (int,int ) ;
 long FUNC_1 (int ,long) ;
 long FUNC_2 (int ) ;
 struct lm93_data* FUNC_3 (struct device*) ;
 int FUNC_4 (char*,char*,long) ;
 TYPE_2__* FUNC_5 (struct device_attribute*) ;
 scalar_t__* VAR_0 ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1, struct device_attribute *VAR_2,
      char *VAR_3)
{
 int VAR_4 = (FUNC_5(VAR_2))->index;
 struct lm93_data *VAR_5 = FUNC_3(VAR_1);
 int VAR_6 = VAR_4 - 6;
 long VAR_7, VAR_8;

 if ((VAR_4 == 6 || VAR_4 == 7) && VAR_0[VAR_6]) {
  VAR_8 = FUNC_2(VAR_5->vid[VAR_6]);
  VAR_7 = FUNC_1(VAR_5->vccp_limits[VAR_6], VAR_8);
 } else {
  VAR_7 = FUNC_0(VAR_4, VAR_5->block7[VAR_4].min);
 }
 return FUNC_4(VAR_3, "%ld\n", VAR_7);
}
