
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct expansion_card {TYPE_1__* resource; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int start; int end; int flags; } ;


 struct expansion_card* FUNC_0 (struct device*) ;
 int VAR_0 ;
 int FUNC_1 (char*,char*,int,int,int ) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1, struct device_attribute *VAR_2, char *VAR_3)
{
 struct expansion_card *VAR_4 = FUNC_0(VAR_1);
 char *VAR_5 = VAR_3;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  VAR_5 += FUNC_1(VAR_5, "%08x %08x %08lx\n",
    VAR_4->resource[VAR_6].start,
    VAR_4->resource[VAR_6].end,
    VAR_4->resource[VAR_6].flags);

 return VAR_5 - VAR_3;
}
