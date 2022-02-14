
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef scalar_t__ s16 ;
struct TYPE_2__ {int vbits; scalar_t__ dsto; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static ssize_t FUNC_1(struct device *VAR_3,
       struct device_attribute *VAR_4,
       char *VAR_5)
{
 if (!VAR_2 || !(VAR_1.vbits & 0x2000))
  return -VAR_0;
 return FUNC_0(VAR_5, "%i\n", (int)(s16) VAR_1.dsto);
}
