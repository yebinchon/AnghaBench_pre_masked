
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int * buf; } ;
struct diff_options {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct strbuf VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct diff_options*,int ,int *,int ,int ) ;
 int FUNC_2 (struct strbuf*,char) ;
 int FUNC_3 (struct strbuf*,char*,int) ;
 int FUNC_4 (struct strbuf*) ;

__attribute__((used)) static void FUNC_5(struct diff_options *VAR_3,
  int VAR_4, int VAR_5, int VAR_6)
{
 struct strbuf VAR_7 = VAR_2;

 if (!VAR_4) {
  FUNC_0(VAR_5 == 0 && VAR_6 == 0);
  FUNC_1(VAR_3, VAR_1,
     ((void*)0), 0, 0);
  return;
 }

 FUNC_3(&VAR_7,
      (VAR_4 == 1) ? " %d file changed" : " %d files changed",
      VAR_4);
 if (VAR_5 || VAR_6 == 0) {
  FUNC_3(&VAR_7,
       (VAR_5 == 1) ? ", %d insertion(+)" : ", %d insertions(+)",
       VAR_5);
 }

 if (VAR_6 || VAR_5 == 0) {
  FUNC_3(&VAR_7,
       (VAR_6 == 1) ? ", %d deletion(-)" : ", %d deletions(-)",
       VAR_6);
 }
 FUNC_2(&VAR_7, '\n');
 FUNC_1(VAR_3, VAR_0,
    VAR_7.buf, VAR_7.len, 0);
 FUNC_4(&VAR_7);
}
