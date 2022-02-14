
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct bus_type {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct device* FUNC_0 (struct bus_type*,int *,char const*) ;
 scalar_t__ FUNC_1 (struct device*,int *) ;
 int FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct bus_type *VAR_2,
       const char *VAR_3, size_t VAR_4)
{
 struct device *VAR_5;
 int VAR_6 = -VAR_0;

 VAR_5 = FUNC_0(VAR_2, ((void*)0), VAR_3);
 if (!VAR_5)
  return -VAR_1;
 if (FUNC_1(VAR_5, ((void*)0)) == 0)
  VAR_6 = VAR_4;
 FUNC_2(VAR_5);
 return VAR_6;
}
