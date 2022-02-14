
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct userconf {char* default_group; } ;
struct group {int gr_name; } ;


 struct group* FUNC_0 (char*) ;
 char* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct userconf *VAR_0, char *VAR_1)
{
 struct group *VAR_2;

 if (VAR_1 == ((void*)0) || *VAR_1 == '\0') {
  VAR_0->default_group = "";
  return;
 }
 VAR_2 = FUNC_0(VAR_1);
 VAR_0->default_group = FUNC_1(VAR_2->gr_name);
}
