
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int buf; } ;
typedef enum commit_msg_cleanup_mode { ____Placeholder_commit_msg_cleanup_mode } commit_msg_cleanup_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct strbuf*,int ) ;
 int FUNC_1 (struct strbuf*,int) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(struct strbuf *VAR_3,
 enum commit_msg_cleanup_mode VAR_4, int VAR_5)
{
 if (VAR_5 ||
     VAR_4 == VAR_2)
  FUNC_0(VAR_3, FUNC_2(VAR_3->buf, VAR_3->len));
 if (VAR_4 != VAR_1)
  FUNC_1(VAR_3, VAR_4 == VAR_0);
}
