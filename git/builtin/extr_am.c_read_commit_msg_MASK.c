
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct am_state {int msg_len; int msg; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct strbuf*,struct am_state*,char*,int ) ;
 int FUNC_2 (struct strbuf*,int *) ;
 int FUNC_3 (struct strbuf*) ;

__attribute__((used)) static int FUNC_4(struct am_state *VAR_1)
{
 struct strbuf VAR_2 = VAR_0;

 FUNC_0(!VAR_1->msg);

 if (FUNC_1(&VAR_2, VAR_1, "final-commit", 0) < 0) {
  FUNC_3(&VAR_2);
  return -1;
 }

 VAR_1->msg = FUNC_2(&VAR_2, &VAR_1->msg_len);
 return 0;
}
