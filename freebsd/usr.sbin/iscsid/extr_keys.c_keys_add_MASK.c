
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keys {void** keys_values; int ** keys_names; } ;


 int VAR_0 ;
 void* FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*,char const*) ;
 int FUNC_2 (int,char*) ;

void
FUNC_3(struct keys *VAR_1, const char *VAR_2, const char *VAR_3)
{
 int VAR_4;

 FUNC_1("key to send: \"%s=%s\"", VAR_2, VAR_3);






 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_1->keys_names[VAR_4] == ((void*)0)) {
   VAR_1->keys_names[VAR_4] = FUNC_0(VAR_2);
   VAR_1->keys_values[VAR_4] = FUNC_0(VAR_3);
   return;
  }
 }
 FUNC_2(1, "too many keys");
}
