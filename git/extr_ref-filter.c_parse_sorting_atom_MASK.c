
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct ref_format {int dummy; } ;


 struct ref_format VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct ref_format*,char const*,char const*,struct strbuf*) ;
 int FUNC_2 (struct strbuf*) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_2)
{




 struct ref_format VAR_3 = VAR_0;
 const char *VAR_4 = VAR_2 + FUNC_3(VAR_2);
 struct strbuf VAR_5 = VAR_1;
 int VAR_6 = FUNC_1(&VAR_3, VAR_2, VAR_4, &VAR_5);
 if (VAR_6 < 0)
  FUNC_0("%s", VAR_5.buf);
 FUNC_2(&VAR_5);
 return VAR_6;
}
