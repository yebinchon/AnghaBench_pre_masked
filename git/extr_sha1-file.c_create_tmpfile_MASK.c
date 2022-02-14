
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (struct strbuf*,char const*,int) ;
 int FUNC_5 (struct strbuf*,char*) ;
 int FUNC_6 (struct strbuf*) ;

__attribute__((used)) static int FUNC_7(struct strbuf *VAR_3, const char *VAR_4)
{
 int VAR_5, VAR_6 = FUNC_1(VAR_4);

 FUNC_6(VAR_3);
 FUNC_4(VAR_3, VAR_4, VAR_6);
 FUNC_5(VAR_3, "tmp_obj_XXXXXX");
 VAR_5 = FUNC_2(VAR_3->buf, 0444);
 if (VAR_5 < 0 && VAR_6 && VAR_2 == VAR_1) {






  FUNC_6(VAR_3);
  FUNC_4(VAR_3, VAR_4, VAR_6 - 1);
  if (FUNC_3(VAR_3->buf, 0777) && VAR_2 != VAR_0)
   return -1;
  if (FUNC_0(VAR_3->buf))
   return -1;


  FUNC_5(VAR_3, "/tmp_obj_XXXXXX");
  VAR_5 = FUNC_2(VAR_3->buf, 0444);
 }
 return VAR_5;
}
