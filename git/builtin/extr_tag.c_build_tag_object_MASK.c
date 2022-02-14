
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int buf; } ;
struct object_id {int dummy; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct strbuf*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int ,int ,int ,struct object_id*) ;

__attribute__((used)) static int FUNC_4(struct strbuf *VAR_1, int VAR_2, struct object_id *VAR_3)
{
 if (VAR_2 && FUNC_1(VAR_1) < 0)
  return FUNC_2(FUNC_0("unable to sign the tag"));
 if (FUNC_3(VAR_1->buf, VAR_1->len, VAR_0, VAR_3) < 0)
  return FUNC_2(FUNC_0("unable to write tag file"));
 return 0;
}
