
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char const* buf; } ;
struct ref {struct ref* next; int old_oid; } ;
struct object_id {int dummy; } ;


 int FUNC_0 (struct ref**,int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*) ;
 struct ref* FUNC_2 (char const*) ;
 int FUNC_3 (int ,char const*) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int,struct ref**) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct ref**) ;
 int FUNC_8 (struct ref*) ;
 int FUNC_9 (int *,struct object_id*) ;
 scalar_t__ FUNC_10 (char const*,struct object_id*,char const**) ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (char const*,char*,char const**) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_13 (struct strbuf*,int ) ;
 int FUNC_14 (struct strbuf*) ;

__attribute__((used)) static void FUNC_15(struct strbuf *VAR_3)
{
 struct ref **VAR_4 = ((void*)0);
 struct ref *VAR_5 = ((void*)0);
 struct ref **VAR_6 = &VAR_5;
 int VAR_7 = 0, VAR_8 = 0;

 do {
  const char *VAR_9;
  if (FUNC_12(VAR_3->buf, "fetch ", &VAR_9)) {
   const char *VAR_10;
   struct ref *VAR_11;
   struct object_id VAR_12;
   const char *VAR_13;

   if (FUNC_10(VAR_9, &VAR_12, &VAR_13))
    FUNC_3(FUNC_1("protocol error: expected sha/ref, got '%s'"), VAR_9);
   if (*VAR_13 == ' ')
    VAR_10 = VAR_13 + 1;
   else if (!*VAR_13)
    VAR_10 = "";
   else
    FUNC_3(FUNC_1("protocol error: expected sha/ref, got '%s'"), VAR_9);

   VAR_11 = FUNC_2(VAR_10);
   FUNC_9(&VAR_11->old_oid, &VAR_12);

   *VAR_6 = VAR_11;
   VAR_6 = &VAR_11->next;

   FUNC_0(VAR_4, VAR_8 + 1, VAR_7);
   VAR_4[VAR_8++] = VAR_11;
  }
  else
   FUNC_3(FUNC_1("http transport does not support %s"), VAR_3->buf);

  FUNC_14(VAR_3);
  if (FUNC_13(VAR_3, VAR_1) == VAR_0)
   return;
  if (!*VAR_3->buf)
   break;
 } while (1);

 if (FUNC_5(VAR_8, VAR_4))
  FUNC_4(128);
 FUNC_8(VAR_5);
 FUNC_7(VAR_4);

 FUNC_11("\n");
 FUNC_6(VAR_2);
 FUNC_14(VAR_3);
}
