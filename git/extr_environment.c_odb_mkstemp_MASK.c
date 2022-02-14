
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct strbuf*,char*,char const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

int FUNC_4(struct strbuf *VAR_0, const char *VAR_1)
{
 int VAR_2;




 int VAR_3 = 0444;
 FUNC_1(VAR_0, "objects/%s", VAR_1);
 VAR_2 = FUNC_0(VAR_0->buf, VAR_3);
 if (0 <= VAR_2)
  return VAR_2;



 FUNC_1(VAR_0, "objects/%s", VAR_1);
 FUNC_2(VAR_0->buf);
 return FUNC_3(VAR_0->buf, VAR_3);
}
