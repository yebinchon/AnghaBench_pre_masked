
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct message {int dummy; } ;
struct header {char* h_inreplyto; int h_replyto; int * h_smopts; int * h_bcc; int * h_cc; int * h_subject; int * h_to; } ;


 int VAR_0 ;
 int * FUNC_0 (int *,int ) ;
 struct message* VAR_1 ;
 int FUNC_1 (char*,int ) ;
 void* FUNC_2 (char*,struct message*) ;
 int FUNC_3 (struct header*,int) ;
 struct message* VAR_2 ;
 void* FUNC_4 (struct message*,int) ;
 int * FUNC_5 (int *) ;
 char* FUNC_6 (void*) ;
 int FUNC_7 (struct message*) ;
 int FUNC_8 (char*) ;

int
FUNC_9(int VAR_3[])
{
 struct header VAR_4;
 struct message *VAR_5;
 int *VAR_6;
 char *VAR_7, *VAR_8;

 VAR_4.h_to = ((void*)0);
 for (VAR_6 = VAR_3; *VAR_6 != 0; VAR_6++) {
  VAR_5 = &VAR_2[*VAR_6 - 1];
  FUNC_7(VAR_5);
  VAR_1 = VAR_5;
  if ((VAR_7 = FUNC_6(FUNC_2("from", VAR_5))) == ((void*)0))
   VAR_7 = FUNC_6(FUNC_4(VAR_5, 2));
  VAR_4.h_to = FUNC_0(VAR_4.h_to, FUNC_1(VAR_7, VAR_0));
  VAR_8 = FUNC_6(FUNC_2("message-id", VAR_5));
 }
 if (VAR_4.h_to == ((void*)0))
  return (0);
 VAR_5 = &VAR_2[VAR_3[0] - 1];
 if ((VAR_4.h_subject = FUNC_2("subject", VAR_5)) == ((void*)0))
  VAR_4.h_subject = FUNC_2("subj", VAR_5);
 VAR_4.h_subject = FUNC_5(VAR_4.h_subject);
 VAR_4.h_cc = ((void*)0);
 VAR_4.h_bcc = ((void*)0);
 VAR_4.h_smopts = ((void*)0);
 VAR_4.h_replyto = FUNC_8("REPLYTO");
 VAR_4.h_inreplyto = VAR_8;
 FUNC_3(&VAR_4, 1);
 return (0);
}
