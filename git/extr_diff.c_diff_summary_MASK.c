
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int len; int buf; } ;
struct diff_options {int dummy; } ;
struct diff_filepair {int status; int score; TYPE_1__* two; TYPE_1__* one; } ;
struct TYPE_2__ {int path; } ;






 int VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (struct diff_options*,int ,int ,int ,int ) ;
 int FUNC_1 (int ,struct strbuf*,int *,int ) ;
 int FUNC_2 (struct diff_options*,char*,TYPE_1__*) ;
 int FUNC_3 (struct diff_options*,struct diff_filepair*,int) ;
 int FUNC_4 (struct diff_options*,char*,struct diff_filepair*) ;
 int FUNC_5 (struct diff_filepair*) ;
 int FUNC_6 (struct strbuf*,char*,int ) ;
 int FUNC_7 (struct strbuf*,char*) ;
 int FUNC_8 (struct strbuf*) ;

__attribute__((used)) static void FUNC_9(struct diff_options *VAR_2, struct diff_filepair *VAR_3)
{
 switch(VAR_3->status) {
 case 129:
  FUNC_2(VAR_2, "delete", VAR_3->one);
  break;
 case 131:
  FUNC_2(VAR_2, "create", VAR_3->two);
  break;
 case 130:
  FUNC_4(VAR_2, "copy", VAR_3);
  break;
 case 128:
  FUNC_4(VAR_2, "rename", VAR_3);
  break;
 default:
  if (VAR_3->score) {
   struct strbuf VAR_4 = VAR_1;
   FUNC_7(&VAR_4, " rewrite ");
   FUNC_1(VAR_3->two->path, &VAR_4, ((void*)0), 0);
   FUNC_6(&VAR_4, " (%d%%)\n", FUNC_5(VAR_3));
   FUNC_0(VAR_2, VAR_0,
      VAR_4.buf, VAR_4.len, 0);
   FUNC_8(&VAR_4);
  }
  FUNC_3(VAR_2, VAR_3, !VAR_3->score);
  break;
 }
}
