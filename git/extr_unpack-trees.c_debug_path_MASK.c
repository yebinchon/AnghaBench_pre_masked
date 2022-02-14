
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct traverse_info {char* name; struct traverse_info* prev; } ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char) ;

__attribute__((used)) static void FUNC_2(struct traverse_info *VAR_0)
{
 if (VAR_0->prev) {
  FUNC_2(VAR_0->prev);
  if (*VAR_0->prev->name)
   FUNC_1('/');
 }
 FUNC_0("%s", VAR_0->name);
}
