
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct name {int dummy; } ;
struct message {int dummy; } ;
struct header {void* h_inreplyto; int h_replyto; int * h_smopts; int * h_bcc; struct name* h_cc; int * h_subject; struct name* h_to; } ;


 int VAR_0 ;
 int VAR_1 ;
 char** VAR_2 ;
 struct name* FUNC_0 (struct name*,struct name*) ;
 struct name* FUNC_1 (struct name*,char*) ;
 struct message* VAR_3 ;
 struct name* FUNC_2 (struct name*) ;
 struct name* FUNC_3 (char*,int ) ;
 void* FUNC_4 (char*,struct message*) ;
 int FUNC_5 (struct header*,int) ;
 struct message* VAR_4 ;
 char* VAR_5 ;
 void* FUNC_6 (struct message*,int) ;
 int FUNC_7 (char*) ;
 int * FUNC_8 (int *) ;
 void* FUNC_9 (void*) ;
 int FUNC_10 (struct message*) ;
 int FUNC_11 (char*) ;

int
FUNC_12(int *VAR_6)
{
 struct message *VAR_7;
 char *VAR_8, *VAR_9, *VAR_10;
 char **VAR_11;
 struct name *VAR_12;
 struct header VAR_13;

 if (VAR_6[1] != 0) {
  FUNC_7("Sorry, can't reply to multiple messages at once\n");
  return (1);
 }
 VAR_7 = &VAR_4[VAR_6[0] - 1];
 FUNC_10(VAR_7);
 VAR_3 = VAR_7;
 if ((VAR_9 = FUNC_9(FUNC_4("from", VAR_7))) == ((void*)0))
  VAR_9 = FUNC_9(FUNC_6(VAR_7, 1));
 if ((VAR_10 = FUNC_9(FUNC_4("reply-to", VAR_7))) != ((void*)0))
  VAR_12 = FUNC_3(VAR_10, VAR_1);
 else if ((VAR_8 = FUNC_9(FUNC_4("to", VAR_7))) != ((void*)0))
  VAR_12 = FUNC_3(VAR_8, VAR_1);
 else
  VAR_12 = ((void*)0);
 VAR_12 = FUNC_2(VAR_12);




 VAR_12 = FUNC_1(VAR_12, VAR_5);
 if (VAR_2)
  for (VAR_11 = VAR_2; *VAR_11 != ((void*)0); VAR_11++)
   VAR_12 = FUNC_1(VAR_12, *VAR_11);
 if (VAR_12 != ((void*)0) && VAR_10 == ((void*)0))
  VAR_12 = FUNC_0(VAR_12, FUNC_3(VAR_9, VAR_1));
 else if (VAR_12 == ((void*)0)) {
  if (VAR_10 != ((void*)0))
   FUNC_7("Empty reply-to field -- replying to author\n");
  VAR_12 = FUNC_3(VAR_9, VAR_1);
 }
 VAR_13.h_to = VAR_12;
 if ((VAR_13.h_subject = FUNC_4("subject", VAR_7)) == ((void*)0))
  VAR_13.h_subject = FUNC_4("subj", VAR_7);
 VAR_13.h_subject = FUNC_8(VAR_13.h_subject);
 if (VAR_10 == ((void*)0) && (VAR_8 = FUNC_9(FUNC_4("cc", VAR_7))) != ((void*)0)) {
  VAR_12 = FUNC_2(FUNC_3(VAR_8, VAR_0));
  VAR_12 = FUNC_1(VAR_12, VAR_5);
  if (VAR_2 != 0)
   for (VAR_11 = VAR_2; *VAR_11 != ((void*)0); VAR_11++)
    VAR_12 = FUNC_1(VAR_12, *VAR_11);
  VAR_13.h_cc = VAR_12;
 } else
  VAR_13.h_cc = ((void*)0);
 VAR_13.h_bcc = ((void*)0);
 VAR_13.h_smopts = ((void*)0);
 VAR_13.h_replyto = FUNC_11("REPLYTO");
 VAR_13.h_inreplyto = FUNC_9(FUNC_4("message-id", VAR_7));
 FUNC_5(&VAR_13, 1);
 return (0);
}
