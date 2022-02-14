
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct repository_format {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct repository_format*,int ) ;
 int FUNC_1 (struct strbuf*,char*,char const*) ;
 int FUNC_2 (struct strbuf*) ;
 int FUNC_3 (struct strbuf*) ;
 scalar_t__ FUNC_4 (struct repository_format*,struct strbuf*) ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static int FUNC_6(struct repository_format *VAR_1,
          const char *VAR_2)
{
 int VAR_3 = 0;
 struct strbuf VAR_4 = VAR_0;

 FUNC_1(&VAR_4, "%s/config", VAR_2);
 FUNC_0(VAR_1, VAR_4.buf);
 FUNC_3(&VAR_4);

 if (FUNC_4(VAR_1, &VAR_4) < 0) {
  FUNC_5("%s", VAR_4.buf);
  VAR_3 = -1;
 }

 FUNC_2(&VAR_4);
 return VAR_3;
}
