
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; size_t len; } ;
struct index_state {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct index_state const*,char const*,char const*,size_t,struct strbuf*,int ) ;
 int FUNC_1 (struct index_state const*,char const*,char const*,size_t,struct strbuf*,int,int *) ;

int FUNC_2(const struct index_state *VAR_1, const char *VAR_2,
         const char *VAR_3, size_t VAR_4, struct strbuf *VAR_5)
{
 int VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, 1, ((void*)0));
 if (VAR_6) {
  VAR_3 = VAR_5->buf;
  VAR_4 = VAR_5->len;
 }
 return VAR_6 | FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_0);
}
