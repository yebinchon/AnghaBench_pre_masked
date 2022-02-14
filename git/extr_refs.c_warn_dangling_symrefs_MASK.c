
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct warn_if_dangling_data {char const* msg_fmt; struct string_list const* refnames; int * refname; int * fp; } ;
struct string_list {int dummy; } ;
typedef int FILE ;


 int FUNC_0 (int ,struct warn_if_dangling_data*) ;
 int VAR_0 ;

void FUNC_1(FILE *VAR_1, const char *VAR_2, const struct string_list *VAR_3)
{
 struct warn_if_dangling_data VAR_4;

 VAR_4.fp = VAR_1;
 VAR_4.refname = ((void*)0);
 VAR_4.refnames = VAR_3;
 VAR_4.msg_fmt = VAR_2;
 FUNC_0(VAR_0, &VAR_4);
}
