
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct object_id {int dummy; } ;


 scalar_t__ FUNC_0 (int ,struct object_id*) ;
 scalar_t__ FUNC_1 (struct object_id const*) ;
 int FUNC_2 (struct object_id const*) ;
 int FUNC_3 (struct object_id*) ;
 int FUNC_4 (struct strbuf*,char*,int ) ;

__attribute__((used)) static int FUNC_5(const struct object_id *VAR_0,
         struct object_id *VAR_1,
         struct strbuf *VAR_2)
{
 int VAR_3 = 0;

 if (FUNC_1(VAR_0)) {
  FUNC_3(VAR_1);
  return 1;
 }

 FUNC_4(VAR_2, "%s:.gitmodules", FUNC_2(VAR_0));
 if (FUNC_0(VAR_2->buf, VAR_1) >= 0)
  VAR_3 = 1;

 return VAR_3;
}
