
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct strbuf {char* buf; } ;
struct TYPE_4__ {char* buf; } ;
struct TYPE_3__ {char* buf; } ;
struct mailinfo {int output; TYPE_2__ email; TYPE_1__ name; int keep_subject; struct strbuf** p_hdr_data; struct strbuf** s_hdr_data; scalar_t__ patch_lines; } ;


 int FUNC_0 (struct strbuf*) ;
 int FUNC_1 (struct mailinfo*,struct strbuf*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct mailinfo*,struct strbuf*) ;
 char** VAR_0 ;
 int FUNC_4 (int ,char*,struct strbuf*) ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static void FUNC_6(struct mailinfo *VAR_1)
{
 struct strbuf *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_0[VAR_3]; VAR_3++) {

  if (VAR_1->patch_lines && VAR_1->s_hdr_data[VAR_3])
   VAR_2 = VAR_1->s_hdr_data[VAR_3];
  else if (VAR_1->p_hdr_data[VAR_3])
   VAR_2 = VAR_1->p_hdr_data[VAR_3];
  else
   continue;

  if (!FUNC_5(VAR_0[VAR_3], "Subject")) {
   if (!VAR_1->keep_subject) {
    FUNC_1(VAR_1, VAR_2);
    FUNC_0(VAR_2);
   }
   FUNC_4(VAR_1->output, "Subject", VAR_2);
  } else if (!FUNC_5(VAR_0[VAR_3], "From")) {
   FUNC_0(VAR_2);
   FUNC_3(VAR_1, VAR_2);
   FUNC_2(VAR_1->output, "Author: %s\n", VAR_1->name.buf);
   FUNC_2(VAR_1->output, "Email: %s\n", VAR_1->email.buf);
  } else {
   FUNC_0(VAR_2);
   FUNC_2(VAR_1->output, "%s: %s\n", VAR_0[VAR_3], VAR_2->buf);
  }
 }
 FUNC_2(VAR_1->output, "\n");
}
