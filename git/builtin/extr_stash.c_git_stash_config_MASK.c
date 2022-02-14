
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char const*,char const*,void*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_2, const char *VAR_3, void *VAR_4)
{
 if (!FUNC_2(VAR_2, "stash.showstat")) {
  VAR_1 = FUNC_0(VAR_2, VAR_3);
  return 0;
 }
 if (!FUNC_2(VAR_2, "stash.showpatch")) {
  VAR_0 = FUNC_0(VAR_2, VAR_3);
  return 0;
 }
 return FUNC_1(VAR_2, VAR_3, VAR_4);
}
