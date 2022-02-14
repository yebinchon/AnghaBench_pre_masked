
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trailer_item {int list; } ;
struct list_head {int dummy; } ;
struct TYPE_2__ {int if_missing; int where; } ;
struct arg_item {TYPE_1__ conf; } ;
typedef enum trailer_where { ____Placeholder_trailer_where } trailer_where ;


 int FUNC_0 (char*,int) ;


 int FUNC_1 (int) ;
 int FUNC_2 (int *,struct arg_item*) ;
 int FUNC_3 (struct arg_item*) ;
 int FUNC_4 (int *,struct list_head*) ;
 int FUNC_5 (int *,struct list_head*) ;
 struct trailer_item* FUNC_6 (struct arg_item*) ;

__attribute__((used)) static void FUNC_7(struct list_head *VAR_0,
     struct arg_item *VAR_1)
{
 enum trailer_where VAR_2;
 struct trailer_item *VAR_3;

 switch (VAR_1->conf.if_missing) {
 case 128:
  FUNC_3(VAR_1);
  break;
 case 129:
  VAR_2 = VAR_1->conf.where;
  FUNC_2(((void*)0), VAR_1);
  VAR_3 = FUNC_6(VAR_1);
  if (FUNC_1(VAR_2))
   FUNC_5(&VAR_3->list, VAR_0);
  else
   FUNC_4(&VAR_3->list, VAR_0);
  break;
 default:
  FUNC_0("trailer.c: unhandled value %d",
      VAR_1->conf.if_missing);
 }
}
