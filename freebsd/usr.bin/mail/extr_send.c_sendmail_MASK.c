
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct header {int * h_inreplyto; int h_replyto; int * h_smopts; int * h_bcc; int * h_cc; int * h_subject; int h_to; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct header*,int ) ;
 int FUNC_2 (char*) ;

int
FUNC_3(char *VAR_1)
{
 struct header VAR_2;

 VAR_2.h_to = FUNC_0(VAR_1, VAR_0);
 VAR_2.h_subject = ((void*)0);
 VAR_2.h_cc = ((void*)0);
 VAR_2.h_bcc = ((void*)0);
 VAR_2.h_smopts = ((void*)0);
 VAR_2.h_replyto = FUNC_2("REPLYTO");
 VAR_2.h_inreplyto = ((void*)0);
 FUNC_1(&VAR_2, 0);
 return (0);
}
