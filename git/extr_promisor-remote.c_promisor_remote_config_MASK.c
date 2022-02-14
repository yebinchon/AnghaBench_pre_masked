
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct promisor_remote {int partial_clone_filter; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,char const*) ;
 int FUNC_2 (int *,char const*,char const*) ;
 scalar_t__ FUNC_3 (char const*,char*,char const**,int*,char const**) ;
 struct promisor_remote* FUNC_4 (char*,int *) ;
 struct promisor_remote* FUNC_5 (char*) ;
 int FUNC_6 (char const*,char*) ;
 char* FUNC_7 (char const*,int) ;

__attribute__((used)) static int FUNC_8(const char *VAR_1, const char *VAR_2, void *VAR_3)
{
 const char *VAR_4;
 int VAR_5;
 const char *VAR_6;

 if (!FUNC_6(VAR_1, "core.partialclonefilter"))
  return FUNC_2(&VAR_0,
      VAR_1, VAR_2);

 if (FUNC_3(VAR_1, "remote", &VAR_4, &VAR_5, &VAR_6) < 0)
  return 0;

 if (!FUNC_6(VAR_6, "promisor")) {
  char *VAR_7;

  if (!FUNC_1(VAR_1, VAR_2))
   return 0;

  VAR_7 = FUNC_7(VAR_4, VAR_5);

  if (!FUNC_4(VAR_7, ((void*)0)))
   FUNC_5(VAR_7);

  FUNC_0(VAR_7);
  return 0;
 }
 if (!FUNC_6(VAR_6, "partialclonefilter")) {
  struct promisor_remote *VAR_8;
  char *VAR_9 = FUNC_7(VAR_4, VAR_5);

  VAR_8 = FUNC_4(VAR_9, ((void*)0));
  if (!VAR_8)
   VAR_8 = FUNC_5(VAR_9);

  FUNC_0(VAR_9);

  if (!VAR_8)
   return 0;

  return FUNC_2(&VAR_8->partial_clone_filter, VAR_1, VAR_2);
 }

 return 0;
}
