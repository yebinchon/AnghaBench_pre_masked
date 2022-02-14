
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; scalar_t__ len; } ;
typedef enum commit_msg_cleanup_mode { ____Placeholder_commit_msg_cleanup_mode } commit_msg_cleanup_mode ;


 int VAR_0 ;
 int VAR_1 ;
 struct strbuf VAR_2 ;
 int FUNC_0 (struct strbuf const*,int) ;
 int FUNC_1 (char*,char*,char const**) ;
 scalar_t__ FUNC_2 (struct strbuf*,char const*,int ) ;
 int FUNC_3 (struct strbuf*) ;
 int FUNC_4 (struct strbuf*,int) ;

int FUNC_5(const struct strbuf *VAR_3, const char *VAR_4,
         enum commit_msg_cleanup_mode VAR_5)
{
 struct strbuf VAR_6 = VAR_2;
 const char *VAR_7;

 if (VAR_5 == VAR_1 && VAR_3->len)
  return 0;

 if (!VAR_4 || FUNC_2(&VAR_6, VAR_4, 0) <= 0)
  return 0;

 FUNC_4(&VAR_6, VAR_5 == VAR_0);
 if (!FUNC_1(VAR_3->buf, VAR_6.buf, &VAR_7))
  VAR_7 = VAR_3->buf;
 FUNC_3(&VAR_6);
 return FUNC_0(VAR_3, VAR_7 - VAR_3->buf);
}
