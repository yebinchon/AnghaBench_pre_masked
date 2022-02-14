
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct processing_thread_args {int the_configuration; int the_runtime_env; int the_cache; } ;
typedef int sigset_t ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct processing_thread_args*) ;
 int FUNC_3 (int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ,int *,int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void *
FUNC_7(void *VAR_2)
{
 struct processing_thread_args *VAR_3;
 sigset_t VAR_4;

 FUNC_1("=> processing_thread");
 VAR_3 = (struct processing_thread_args *)VAR_2;

 FUNC_6(&VAR_4);
 FUNC_5(&VAR_4, VAR_0);
 if (FUNC_4(VAR_1, &VAR_4, ((void*)0)) != 0)
  FUNC_0("processing thread",
   "thread can't block the SIGPIPE signal");

 FUNC_3(VAR_3->the_cache, VAR_3->the_runtime_env,
  VAR_3->the_configuration);
 FUNC_2(VAR_3);
 FUNC_1("<= processing_thread");

 return (((void*)0));
}
