
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dump_obj {int type; } ;
struct dump_attribute {int dummy; } ;
typedef int ssize_t ;


 char* FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct dump_obj *VAR_0,
         struct dump_attribute *VAR_1,
         char *VAR_2)
{

 return FUNC_1(VAR_2, "0x%x %s\n", VAR_0->type,
         FUNC_0(VAR_0->type));
}
