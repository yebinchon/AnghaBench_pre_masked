
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct child_err {int err; int syserr; } ;
typedef enum child_errcode { ____Placeholder_child_errcode } child_errcode ;
typedef int buf ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,struct child_err*,int) ;

__attribute__((used)) static void FUNC_2(enum child_errcode VAR_2)
{
 struct child_err VAR_3;

 VAR_3.err = VAR_2;
 VAR_3.syserr = VAR_1;


 FUNC_1(VAR_0, &VAR_3, sizeof(VAR_3));
 FUNC_0(1);
}
