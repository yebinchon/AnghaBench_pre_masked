
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void git_oid ;


 int FUNC_0 (void*) ;
 int FUNC_1 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,char const*) ;

int FUNC_3(const char *VAR_3, const char *VAR_4, const git_oid *VAR_5, unsigned int VAR_6, void *VAR_7)
{
 FUNC_0(VAR_4);
 FUNC_0(VAR_5);
 FUNC_0(VAR_7);

 VAR_0 = 1;

 if (!FUNC_2("refs/heads/master", VAR_3)) {
  FUNC_1(VAR_6);
  VAR_2 = 1;
 }
 if (!FUNC_2("refs/heads/haacked", VAR_3)) {
  FUNC_1(VAR_6);
  VAR_1 = 1;
 }

 return 0;
}
