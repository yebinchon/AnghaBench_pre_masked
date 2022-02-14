
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct child_process {int out; int in; } ;


 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (int ) ;
 char* FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,char*,...) ;
 int FUNC_4 (char*,char const*,char const**) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 scalar_t__ FUNC_6 (char const*,int,int*) ;

__attribute__((used)) static int FUNC_7(struct child_process *VAR_0,
        const char *VAR_1, int *VAR_2,
        int *VAR_3)
{
 int VAR_4;
 int VAR_5;
 char *VAR_6;
 const char *VAR_7;

 if (!VAR_3)
  VAR_3 = &VAR_4;

 if (FUNC_3(VAR_0->in, "%s-client\n",
        VAR_1))
  return FUNC_0("Could not write client identification");
 for (VAR_5 = 0; VAR_2[VAR_5]; VAR_5++) {
  if (FUNC_3(VAR_0->in, "version=%d\n",
         VAR_2[VAR_5]))
   return FUNC_0("Could not write requested version");
 }
 if (FUNC_1(VAR_0->in))
  return FUNC_0("Could not write flush packet");

 if (!(VAR_6 = FUNC_2(VAR_0->out, ((void*)0))) ||
     !FUNC_4(VAR_6, VAR_1, &VAR_7) ||
     FUNC_5(VAR_7, "-server"))
  return FUNC_0("Unexpected line '%s', expected %s-server",
        VAR_6 ? VAR_6 : "<flush packet>", VAR_1);
 if (!(VAR_6 = FUNC_2(VAR_0->out, ((void*)0))) ||
     !FUNC_4(VAR_6, "version=", &VAR_7) ||
     FUNC_6(VAR_7, 10, VAR_3))
  return FUNC_0("Unexpected line '%s', expected version",
        VAR_6 ? VAR_6 : "<flush packet>");
 if ((VAR_6 = FUNC_2(VAR_0->out, ((void*)0))))
  return FUNC_0("Unexpected line '%s', expected flush", VAR_6);


 for (VAR_5 = 0; VAR_2[VAR_5]; VAR_5++) {
  if (VAR_2[VAR_5] == *VAR_3)
   break;
 }
 if (!VAR_2[VAR_5])
  return FUNC_0("Version %d not supported", *VAR_3);

 return 0;
}
