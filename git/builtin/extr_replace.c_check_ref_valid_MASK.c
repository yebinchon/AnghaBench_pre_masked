
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct object_id {int dummy; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (struct object_id*) ;
 int FUNC_4 (struct object_id*) ;
 scalar_t__ FUNC_5 (int ,struct object_id*) ;
 int FUNC_6 (struct strbuf*,char*,int ,int ) ;
 int FUNC_7 (struct strbuf*) ;

__attribute__((used)) static int FUNC_8(struct object_id *VAR_1,
       struct object_id *VAR_2,
       struct strbuf *VAR_3,
       int VAR_4)
{
 FUNC_7(VAR_3);
 FUNC_6(VAR_3, "%s%s", VAR_0, FUNC_3(VAR_1));
 if (FUNC_1(VAR_3->buf, 0))
  return FUNC_2(FUNC_0("'%s' is not a valid ref name"), VAR_3->buf);

 if (FUNC_5(VAR_3->buf, VAR_2))
  FUNC_4(VAR_2);
 else if (!VAR_4)
  return FUNC_2(FUNC_0("replace ref '%s' already exists"), VAR_3->buf);
 return 0;
}
