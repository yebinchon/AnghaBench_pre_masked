
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(struct device *VAR_4)
{
 if (!VAR_3)
  return -VAR_0;

 if (!VAR_2) {
  FUNC_0(VAR_4, "deferred probe timeout, ignoring dependency");
  return -VAR_1;
 }

 return 0;
}
