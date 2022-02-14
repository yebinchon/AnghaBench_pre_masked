
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct name {int dummy; } ;
struct header {char* h_subject; char* h_replyto; int * h_inreplyto; struct name* h_smopts; struct name* h_bcc; struct name* h_cc; struct name* h_to; } ;


 int FUNC_0 (struct header*,int ) ;

int
FUNC_1(struct name *VAR_0, struct name *VAR_1, struct name *VAR_2, struct name *VAR_3,
 char *VAR_4, char *VAR_5)
{
 struct header VAR_6;

 VAR_6.h_to = VAR_0;
 VAR_6.h_subject = VAR_4;
 VAR_6.h_cc = VAR_1;
 VAR_6.h_bcc = VAR_2;
 VAR_6.h_smopts = VAR_3;
 VAR_6.h_replyto = VAR_5;
 VAR_6.h_inreplyto = ((void*)0);
 FUNC_0(&VAR_6, 0);
 return (0);
}
