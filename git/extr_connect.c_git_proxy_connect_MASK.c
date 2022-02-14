
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct child_process {int in; int out; int args; } ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 (struct child_process*) ;
 int FUNC_4 (int ,char const*) ;
 int FUNC_5 (char**,char const**) ;
 char const* VAR_1 ;
 scalar_t__ FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (struct child_process*) ;
 struct child_process* FUNC_8 (int) ;

__attribute__((used)) static struct child_process *FUNC_9(int VAR_2[2], char *VAR_3)
{
 const char *VAR_4 = FUNC_0(VAR_0);
 struct child_process *VAR_5;

 FUNC_5(&VAR_3, &VAR_4);

 if (FUNC_6(VAR_3))
  FUNC_4(FUNC_1("strange hostname '%s' blocked"), VAR_3);
 if (FUNC_6(VAR_4))
  FUNC_4(FUNC_1("strange port '%s' blocked"), VAR_4);

 VAR_5 = FUNC_8(sizeof(*VAR_5));
 FUNC_3(VAR_5);
 FUNC_2(&VAR_5->args, VAR_1);
 FUNC_2(&VAR_5->args, VAR_3);
 FUNC_2(&VAR_5->args, VAR_4);
 VAR_5->in = -1;
 VAR_5->out = -1;
 if (FUNC_7(VAR_5))
  FUNC_4(FUNC_1("cannot start proxy %s"), VAR_1);
 VAR_2[0] = VAR_5->out;
 VAR_2[1] = VAR_5->in;
 return VAR_5;
}
