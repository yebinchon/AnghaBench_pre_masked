
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct strbuf*,char const*,char*) ;
 int FUNC_3 (struct strbuf*) ;

int FUNC_4(const char *VAR_1)
{
 struct strbuf VAR_2 = VAR_0;
 int VAR_3 = 0;

 VAR_3 = FUNC_2(&VAR_2, VAR_1, "objects/");
 if (VAR_3)
  goto done;
 if (!FUNC_1(VAR_2.buf)) {
  VAR_3 = -1;
  goto done;
 }
 FUNC_0(VAR_2.buf);
done:
 FUNC_3(&VAR_2);
 return VAR_3;
}
