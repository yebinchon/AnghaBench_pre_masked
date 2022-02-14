
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;


 int FUNC_0 (struct strbuf*,char const*,int ,char const*,int ) ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (int,char const*) ;

__attribute__((used)) static inline void FUNC_3(struct strbuf *VAR_0, const char *VAR_1, const char *VAR_2)
{
 const char *VAR_3 = FUNC_2(VAR_0->buf, VAR_1);
 if (VAR_3)
  FUNC_0(VAR_0, VAR_3 - VAR_0->buf, FUNC_1(VAR_1), VAR_2, FUNC_1(VAR_2));
}
