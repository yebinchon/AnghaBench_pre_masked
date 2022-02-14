
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {scalar_t__ len; } ;
struct fmt_merge_msg_opts {int add_title; int credit_people; int shortlog_len; } ;
typedef int opts ;


 int FUNC_0 (struct strbuf*,struct strbuf*,struct fmt_merge_msg_opts*) ;
 int VAR_0 ;
 int FUNC_1 (struct fmt_merge_msg_opts*,int ,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct strbuf*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct strbuf *VAR_3, struct strbuf *VAR_4)
{
 struct fmt_merge_msg_opts VAR_5;

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.add_title = !VAR_0;
 VAR_5.shortlog_len = VAR_2;
 VAR_5.credit_people = (0 < VAR_1);

 FUNC_0(VAR_3, VAR_4, &VAR_5);
 if (VAR_4->len)
  FUNC_2(VAR_4, VAR_4->len - 1);
}
