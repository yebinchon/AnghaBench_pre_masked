
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (char const*,struct object_id*) ;
 int FUNC_1 (int ,struct object_id*,char const*) ;

__attribute__((used)) static int FUNC_2(void)
{
 const char *VAR_2 = VAR_1;

 if (VAR_2) {
  struct object_id VAR_3;

  VAR_1 = ((void*)0);
  if (!FUNC_0(VAR_2, &VAR_3)) {
   FUNC_1(VAR_0, &VAR_3, VAR_2);
   return 1;
  }
 }
 return 0;
}
