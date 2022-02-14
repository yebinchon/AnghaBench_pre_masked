
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct TYPE_2__ {int len; int buf; } ;
struct mailinfo {int input_error; int * patchfile; TYPE_1__ log_message; void* p_hdr_data; int input; void* s_hdr_data; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 struct strbuf VAR_2 ;
 int FUNC_0 (struct mailinfo*,struct strbuf*,void*,int) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (char const*,char*) ;
 int FUNC_5 (int ,int,int ,int *) ;
 int FUNC_6 (struct mailinfo*,struct strbuf*) ;
 int FUNC_7 (struct mailinfo*) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (char const*) ;
 scalar_t__ FUNC_10 (struct strbuf*,int ) ;
 int FUNC_11 (struct strbuf*) ;
 int FUNC_12 (int,int ) ;
 void* FUNC_13 (int ,int) ;

int FUNC_14(struct mailinfo *VAR_3, const char *VAR_4, const char *VAR_5)
{
 FILE *VAR_6;
 int VAR_7;
 struct strbuf VAR_8 = VAR_2;

 VAR_6 = FUNC_4(VAR_4, "w");
 if (!VAR_6) {
  FUNC_9(VAR_4);
  return -1;
 }
 VAR_3->patchfile = FUNC_4(VAR_5, "w");
 if (!VAR_3->patchfile) {
  FUNC_9(VAR_5);
  FUNC_2(VAR_6);
  return -1;
 }

 VAR_3->p_hdr_data = FUNC_13(VAR_1, sizeof(*(VAR_3->p_hdr_data)));
 VAR_3->s_hdr_data = FUNC_13(VAR_1, sizeof(*(VAR_3->s_hdr_data)));

 do {
  VAR_7 = FUNC_3(VAR_3->input);
  if (VAR_7 == VAR_0) {
   FUNC_2(VAR_6);
   return FUNC_1("empty patch: '%s'", VAR_5);
  }
 } while (FUNC_8(VAR_7));
 FUNC_12(VAR_7, VAR_3->input);


 while (FUNC_10(&VAR_8, VAR_3->input))
  FUNC_0(VAR_3, &VAR_8, VAR_3->p_hdr_data, 1);

 FUNC_6(VAR_3, &VAR_8);
 FUNC_5(VAR_3->log_message.buf, 1, VAR_3->log_message.len, VAR_6);
 FUNC_2(VAR_6);
 FUNC_2(VAR_3->patchfile);

 FUNC_7(VAR_3);
 FUNC_11(&VAR_8);
 return VAR_3->input_error;
}
