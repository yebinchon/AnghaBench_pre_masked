
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int nr; TYPE_1__* items; int cmp; } ;
struct strbuf {size_t len; int buf; } ;
struct TYPE_2__ {char* string; } ;


 struct string_list VAR_0 ;
 int FUNC_0 (struct strbuf*,struct strbuf*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct string_list*,int ) ;
 int FUNC_2 (struct strbuf*,char*,char const*) ;
 int FUNC_3 (struct strbuf*,size_t) ;
 int FUNC_4 (struct string_list*,int ) ;
 int FUNC_5 (struct string_list*) ;

__attribute__((used)) static int FUNC_6(struct strbuf *VAR_2, struct strbuf *VAR_3)
{
 size_t VAR_4 = VAR_2->len, VAR_5 = VAR_3->len;
 struct string_list VAR_6 = VAR_0;
 int VAR_7;
 int VAR_8 = 0;

 if (FUNC_1(&VAR_6, VAR_2->buf) < 0)
  return -1;
 VAR_6.cmp = VAR_1;
 FUNC_5(&VAR_6);

 for (VAR_7 = 0; VAR_7 < VAR_6.nr; VAR_7++) {
  const char *VAR_9 = VAR_6.items[VAR_7].string;

  FUNC_2(VAR_2, "/%s", VAR_9);
  FUNC_2(VAR_3, "/%s", VAR_9);

  VAR_8 |= FUNC_0(VAR_2, VAR_3);

  FUNC_3(VAR_2, VAR_4);
  FUNC_3(VAR_3, VAR_5);
 }

 FUNC_4(&VAR_6, 0);
 return VAR_8;
}
