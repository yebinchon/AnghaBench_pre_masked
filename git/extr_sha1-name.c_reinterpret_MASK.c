
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int buf; } ;
struct repository {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct repository*,int ,int,struct strbuf*,unsigned int) ;
 int FUNC_1 (struct strbuf*,char const*,int) ;
 int FUNC_2 (struct strbuf*,struct strbuf*) ;
 int FUNC_3 (struct strbuf*) ;
 int FUNC_4 (struct strbuf*) ;
 int FUNC_5 (struct strbuf*,int) ;

__attribute__((used)) static int FUNC_6(struct repository *VAR_1,
         const char *VAR_2, int VAR_3, int VAR_4,
         struct strbuf *VAR_5, unsigned VAR_6)
{

 struct strbuf VAR_7 = VAR_0;
 int VAR_8 = VAR_5->len;
 int VAR_9;

 FUNC_1(VAR_5, VAR_2 + VAR_4, VAR_3 - VAR_4);
 VAR_9 = FUNC_0(VAR_1, VAR_5->buf, VAR_5->len, &VAR_7, VAR_6);

 if (VAR_9 < 0) {
  FUNC_5(VAR_5, VAR_8);
  return VAR_4;
 }
 FUNC_4(VAR_5);
 FUNC_2(VAR_5, &VAR_7);
 FUNC_3(&VAR_7);

 return VAR_9 - VAR_8 + VAR_4;
}
