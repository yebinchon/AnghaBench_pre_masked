
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {int arg; } ;
typedef int (* action_fn ) (char*,int *) ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char const*,int) ;
 char* FUNC_3 (char*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_4(const char *VAR_2, const struct kernel_param *VAR_3)
{
 action_fn VAR_4 = (action_fn) VAR_3->arg;
 int VAR_5 = 0;
 char VAR_6[16];
 char *VAR_7;

 FUNC_2(VAR_6, VAR_2, 15);
 VAR_6[15] = '\0';

 VAR_7 = FUNC_3(VAR_6);

 VAR_5 = VAR_4(VAR_7, ((void*)0));
 if (VAR_5)
  goto out;

 FUNC_0();
 if (VAR_1)
  VAR_5 = FUNC_1(VAR_0);

 out:
 return VAR_5;
}
