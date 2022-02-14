
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct name_decoration {scalar_t__ type; struct name_decoration* next; } ;
struct commit {int object; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct name_decoration* FUNC_0 (struct name_decoration const*) ;
 char const* FUNC_1 (int,scalar_t__) ;
 char* FUNC_2 (int,int ) ;
 struct name_decoration* FUNC_3 (int *) ;
 int FUNC_4 (struct strbuf*,struct name_decoration const*) ;
 int FUNC_5 (struct strbuf*,char const*) ;

void FUNC_6(struct strbuf *VAR_4,
   const struct commit *VAR_5,
   int VAR_6,
   const char *VAR_7,
   const char *VAR_8,
   const char *VAR_9)
{
 const struct name_decoration *VAR_10;
 const struct name_decoration *VAR_11;
 const char *VAR_12 =
  FUNC_2(VAR_6, VAR_3);
 const char *VAR_13 =
  FUNC_1(VAR_6, VAR_0);

 VAR_10 = FUNC_3(&VAR_5->object);
 if (!VAR_10)
  return;

 VAR_11 = FUNC_0(VAR_10);
 while (VAR_10) {





  if (VAR_10 != VAR_11) {
   FUNC_5(VAR_4, VAR_12);
   FUNC_5(VAR_4, VAR_7);
   FUNC_5(VAR_4, VAR_13);
   FUNC_5(VAR_4, FUNC_1(VAR_6, VAR_10->type));
   if (VAR_10->type == VAR_2)
    FUNC_5(VAR_4, "tag: ");

   FUNC_4(VAR_4, VAR_10);

   if (VAR_11 &&
       VAR_10->type == VAR_1) {
    FUNC_5(VAR_4, " -> ");
    FUNC_5(VAR_4, VAR_13);
    FUNC_5(VAR_4, FUNC_1(VAR_6, VAR_11->type));
    FUNC_4(VAR_4, VAR_11);
   }
   FUNC_5(VAR_4, VAR_13);

   VAR_7 = VAR_8;
  }
  VAR_10 = VAR_10->next;
 }
 FUNC_5(VAR_4, VAR_12);
 FUNC_5(VAR_4, VAR_9);
 FUNC_5(VAR_4, VAR_13);
}
