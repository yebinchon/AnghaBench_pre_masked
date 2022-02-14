
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct options {int dummy; } ;
struct option {void* o_value; void* o_name; } ;


 int FUNC_0 (struct options*,struct option*,int ) ;
 struct option* FUNC_1 (int,int) ;
 void* FUNC_2 (char const*) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (char*,char const*) ;
 int VAR_0 ;
 struct option* FUNC_5 (struct options*,char const*) ;

struct option *
FUNC_6(struct options *VAR_1, const char *VAR_2, const char *VAR_3)
{
 struct option *VAR_4;

 VAR_4 = FUNC_5(VAR_1, VAR_2);
 if (VAR_4 != ((void*)0)) {
  FUNC_4("duplicated option \"%s\"", VAR_2);
  return (((void*)0));
 }

 VAR_4 = FUNC_1(1, sizeof(*VAR_4));
 if (VAR_4 == ((void*)0))
  FUNC_3(1, "calloc");
 VAR_4->o_name = FUNC_2(VAR_2);
 VAR_4->o_value = FUNC_2(VAR_3);
 FUNC_0(VAR_1, VAR_4, VAR_0);

 return (VAR_4);
}
