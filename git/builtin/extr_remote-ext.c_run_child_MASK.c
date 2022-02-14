
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct child_process {int in; int out; int args; scalar_t__ err; } ;


 struct child_process VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct child_process*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,char const*,char const*) ;
 int FUNC_4 (int,char const*,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (struct child_process*) ;

__attribute__((used)) static int FUNC_6(const char *VAR_3, const char *VAR_4)
{
 int VAR_5;
 struct child_process VAR_6 = VAR_0;

 VAR_6.in = -1;
 VAR_6.out = -1;
 VAR_6.err = 0;
 FUNC_3(&VAR_6.args, VAR_3, VAR_4);

 if (FUNC_5(&VAR_6) < 0)
  FUNC_1("Can't run specified command");

 if (VAR_1)
  FUNC_4(VAR_6.in, VAR_4, VAR_1, VAR_2);

 VAR_5 = FUNC_0(VAR_6.out, VAR_6.in);
 if (!VAR_5)
  VAR_5 = FUNC_2(&VAR_6);
 else
  FUNC_2(&VAR_6);
 return VAR_5;
}
