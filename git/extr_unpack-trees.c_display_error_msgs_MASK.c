
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct unpack_trees_options {struct string_list* unpack_rejects; } ;
struct string_list {int nr; TYPE_1__* items; } ;
struct strbuf {int buf; } ;
struct TYPE_2__ {int string; } ;


 int FUNC_0 (struct unpack_trees_options*,int) ;
 int VAR_0 ;
 struct strbuf VAR_1 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char*) ;
 int VAR_2 ;
 int FUNC_4 (struct strbuf*,char*,int ) ;
 int FUNC_5 (struct strbuf*) ;
 int FUNC_6 (struct string_list*,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct unpack_trees_options *VAR_3)
{
 int VAR_4, VAR_5;
 int VAR_6 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  struct string_list *VAR_7 = &VAR_3->unpack_rejects[VAR_4];
  if (VAR_7->nr > 0) {
   struct strbuf VAR_8 = VAR_1;
   VAR_6 = 1;
   for (VAR_5 = 0; VAR_5 < VAR_7->nr; VAR_5++)
    FUNC_4(&VAR_8, "\t%s\n", VAR_7->items[VAR_5].string);
   FUNC_2(FUNC_0(VAR_3, VAR_4), FUNC_7(VAR_8.buf));
   FUNC_5(&VAR_8);
  }
  FUNC_6(VAR_7, 0);
 }
 if (VAR_6)
  FUNC_3(VAR_2, "%s", FUNC_1("Aborting\n"));
}
