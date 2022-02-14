
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tempfile {int dummy; } ;
struct strbuf {int buf; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*,int ) ;
 struct tempfile* FUNC_1 (int ,int) ;
 int FUNC_2 (struct strbuf*,char const*) ;
 int FUNC_3 (struct strbuf*) ;

struct tempfile *FUNC_4(const char *VAR_1, int VAR_2)
{
 struct tempfile *VAR_3;
 struct strbuf VAR_4 = VAR_0;

 FUNC_2(&VAR_4, VAR_1);
 VAR_3 = FUNC_1(VAR_4.buf, VAR_2);
 if (!VAR_3)
  FUNC_0("Unable to create temporary file '%s'",
     VAR_4.buf);

 FUNC_3(&VAR_4);
 return VAR_3;
}
