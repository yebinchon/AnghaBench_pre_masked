
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct portal_group {int * pg_offload; int pg_name; } ;


 int * FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*,int ) ;

int
FUNC_2(struct portal_group *VAR_0, const char *VAR_1)
{

 if (VAR_0->pg_offload != ((void*)0)) {
  FUNC_1("cannot set offload to \"%s\" for "
      "portal-group \"%s\"; already defined",
      VAR_1, VAR_0->pg_name);
  return (1);
 }

 VAR_0->pg_offload = FUNC_0(VAR_1);

 return (0);
}
