
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {scalar_t__ len; } ;
typedef enum commit_msg_cleanup_mode { ____Placeholder_commit_msg_cleanup_mode } commit_msg_cleanup_mode ;


 int VAR_0 ;
 int FUNC_0 (struct strbuf const*,int ) ;

int FUNC_1(const struct strbuf *VAR_1,
       enum commit_msg_cleanup_mode VAR_2)
{
 if (VAR_2 == VAR_0 && VAR_1->len)
  return 0;
 return FUNC_0(VAR_1, 0);
}
