
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int buf; } ;
struct object_id {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct strbuf*,char const*) ;
 int FUNC_1 (struct object_id const*) ;
 int FUNC_2 (struct strbuf*,char) ;
 int FUNC_3 (struct strbuf*,char*,int ,int ,char const*) ;
 int FUNC_4 (struct strbuf*) ;
 scalar_t__ FUNC_5 (int,int ,int ) ;

__attribute__((used)) static int FUNC_6(int VAR_1, const struct object_id *VAR_2,
       const struct object_id *VAR_3,
       const char *VAR_4, const char *VAR_5)
{
 struct strbuf VAR_6 = VAR_0;
 int VAR_7 = 0;

 FUNC_3(&VAR_6, "%s %s %s", FUNC_1(VAR_2), FUNC_1(VAR_3), VAR_4);
 if (VAR_5 && *VAR_5)
  FUNC_0(&VAR_6, VAR_5);
 FUNC_2(&VAR_6, '\n');
 if (FUNC_5(VAR_1, VAR_6.buf, VAR_6.len) < 0)
  VAR_7 = -1;
 FUNC_4(&VAR_6);
 return VAR_7;
}
