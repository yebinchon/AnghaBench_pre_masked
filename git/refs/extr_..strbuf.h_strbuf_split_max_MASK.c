
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int buf; } ;


 struct strbuf** FUNC_0 (int ,int ,int,int) ;

__attribute__((used)) static inline struct strbuf **FUNC_1(const struct strbuf *VAR_0,
            int VAR_1, int VAR_2)
{
 return FUNC_0(VAR_0->buf, VAR_0->len, VAR_1, VAR_2);
}
