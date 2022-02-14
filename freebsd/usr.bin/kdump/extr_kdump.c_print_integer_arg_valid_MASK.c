
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(const char *(*VAR_1)(int), int VAR_2)
{
 const char *VAR_3;

 VAR_3 = VAR_1(VAR_2);
 if (VAR_3 != ((void*)0))
  FUNC_0("%s", VAR_3);
 else {
  if (VAR_0)
   FUNC_0("%d", VAR_2);
  else
   FUNC_0("%#x", VAR_2);
 }
}
