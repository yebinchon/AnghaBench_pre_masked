
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct protocol_capability {int command; int (* advertise ) (int ,int *) ;int name; } ;


 int FUNC_0 (char*,char const*,...) ;
 struct protocol_capability* FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char*,char const**) ;
 int FUNC_3 (int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4(const char *VAR_1, struct protocol_capability **VAR_2)
{
 const char *VAR_3;

 if (FUNC_2(VAR_1, "command=", &VAR_3)) {
  struct protocol_capability *VAR_4 = FUNC_1(VAR_3);

  if (*VAR_2)
   FUNC_0("command '%s' requested after already requesting command '%s'",
       VAR_3, (*VAR_2)->name);
  if (!VAR_4 || !VAR_4->advertise(VAR_0, ((void*)0)) || !VAR_4->command)
   FUNC_0("invalid command '%s'", VAR_3);

  *VAR_2 = VAR_4;
  return 1;
 }

 return 0;
}
