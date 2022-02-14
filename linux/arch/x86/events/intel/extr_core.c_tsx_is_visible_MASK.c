
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct kobject {int dummy; } ;
struct attribute {int mode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static umode_t
FUNC_1(struct kobject *VAR_1, struct attribute *VAR_2, int VAR_3)
{
 return FUNC_0(VAR_0) ? VAR_2->mode : 0;
}
