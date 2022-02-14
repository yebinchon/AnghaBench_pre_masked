
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_objects_filter_options {int dummy; } ;


 char* FUNC_0 (struct list_objects_filter_options*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 () ;
 char* FUNC_5 (char*,char const*) ;

void FUNC_6(
 const char *VAR_0,
 struct list_objects_filter_options *VAR_1)
{
 char *VAR_2;
 char *VAR_3;


 if (!FUNC_3(VAR_0)) {
  FUNC_2("core.repositoryformatversion", "1");


  VAR_2 = FUNC_5("remote.%s.promisor", VAR_0);
  FUNC_2(VAR_2, "true");
  FUNC_1(VAR_2);
 }





 VAR_3 = FUNC_5("remote.%s.partialclonefilter", VAR_0);

 FUNC_2(VAR_3,
         FUNC_0(VAR_1));
 FUNC_1(VAR_3);


 FUNC_4();
}
