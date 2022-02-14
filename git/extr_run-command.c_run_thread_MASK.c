
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct async {intptr_t (* proc ) (int ,int ,int ) ;int data; int proc_out; int proc_in; scalar_t__ isolate_sigpipe; } ;
typedef int sigset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 intptr_t FUNC_0 (char*) ;
 int FUNC_1 (int ,struct async*) ;
 scalar_t__ FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 intptr_t FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static void *FUNC_6(void *VAR_3)
{
 struct async *VAR_4 = VAR_3;
 intptr_t VAR_5;

 if (VAR_4->isolate_sigpipe) {
  sigset_t VAR_6;
  FUNC_4(&VAR_6);
  FUNC_3(&VAR_6, VAR_0);
  if (FUNC_2(VAR_1, &VAR_6, ((void*)0)) < 0) {
   VAR_5 = FUNC_0("unable to block SIGPIPE in async thread");
   return (void *)VAR_5;
  }
 }

 FUNC_1(VAR_2, VAR_4);
 VAR_5 = VAR_4->proc(VAR_4->proc_in, VAR_4->proc_out, VAR_4->data);
 return (void *)VAR_5;
}
