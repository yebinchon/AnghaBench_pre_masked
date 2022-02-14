
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {TYPE_1__* f_mapping; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {int host; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static loff_t FUNC_1(loff_t VAR_0, loff_t VAR_1, struct file *VAR_2)
{
 loff_t VAR_3;


 VAR_3 = FUNC_0(VAR_2->f_mapping->host);
 if (VAR_0 > 0)
  VAR_3 -= VAR_0;

 if (VAR_3 < 0)
  return 0;

 if (VAR_1 > 0 && VAR_1 < VAR_3)
  VAR_3 = VAR_1;




 return VAR_3 >> 9;
}
