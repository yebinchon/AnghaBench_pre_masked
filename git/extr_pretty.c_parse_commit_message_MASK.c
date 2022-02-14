
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct format_commit_context {char* message; int message_off; int subject_off; int body_off; int commit_message_parsed; } ;


 char* FUNC_0 (int *,char const*,int *) ;
 char* FUNC_1 (char const*) ;

__attribute__((used)) static void FUNC_2(struct format_commit_context *VAR_0)
{
 const char *VAR_1 = VAR_0->message + VAR_0->message_off;
 const char *VAR_2 = VAR_0->message;

 VAR_1 = FUNC_1(VAR_1);
 VAR_0->subject_off = VAR_1 - VAR_2;

 VAR_1 = FUNC_0(((void*)0), VAR_1, ((void*)0));
 VAR_1 = FUNC_1(VAR_1);
 VAR_0->body_off = VAR_1 - VAR_2;

 VAR_0->commit_message_parsed = 1;
}
