
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct rev_info {scalar_t__ total; scalar_t__* subject_prefix; int nr; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct strbuf*,char*,scalar_t__*,...) ;
 int FUNC_2 (struct strbuf*,char*) ;

void FUNC_3(struct strbuf *VAR_0, struct rev_info *VAR_1)
{
 if (VAR_1->total > 0) {
  FUNC_1(VAR_0, "Subject: [%s%s%0*d/%d] ",
       VAR_1->subject_prefix,
       *VAR_1->subject_prefix ? " " : "",
       FUNC_0(VAR_1->total),
       VAR_1->nr, VAR_1->total);
 } else if (VAR_1->total == 0 && VAR_1->subject_prefix && *VAR_1->subject_prefix) {
  FUNC_1(VAR_0, "Subject: [%s] ",
       VAR_1->subject_prefix);
 } else {
  FUNC_2(VAR_0, "Subject: ");
 }
}
