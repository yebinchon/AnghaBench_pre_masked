
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_info {unsigned long* sizep; } ;


 struct object_info VAR_0 ;
 int FUNC_0 (char const*,struct object_info*,int ) ;

int FUNC_1(const char *VAR_1, unsigned long *VAR_2)
{
 struct object_info VAR_3 = VAR_0;

 VAR_3.sizep = VAR_2;
 return FUNC_0(VAR_1, &VAR_3, 0);
}
