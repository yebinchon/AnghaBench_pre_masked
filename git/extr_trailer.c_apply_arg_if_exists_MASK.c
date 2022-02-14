
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trailer_item {int list; } ;
struct list_head {int dummy; } ;
struct TYPE_2__ {int if_exists; } ;
struct arg_item {TYPE_1__ conf; } ;


 int FUNC_0 (char*,int) ;





 int FUNC_1 (struct trailer_item*,struct arg_item*) ;
 int FUNC_2 (struct trailer_item*,struct arg_item*) ;
 int FUNC_3 (struct trailer_item*,struct arg_item*,int,struct list_head*) ;
 int FUNC_4 (struct arg_item*) ;
 int FUNC_5 (struct trailer_item*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct trailer_item *VAR_0,
    struct arg_item *VAR_1,
    struct trailer_item *VAR_2,
    struct list_head *VAR_3)
{
 switch (VAR_1->conf.if_exists) {
 case 129:
  FUNC_4(VAR_1);
  break;
 case 128:
  FUNC_2(VAR_0, VAR_1);
  FUNC_1(VAR_2, VAR_1);
  FUNC_6(&VAR_0->list);
  FUNC_5(VAR_0);
  break;
 case 132:
  FUNC_2(VAR_0, VAR_1);
  FUNC_1(VAR_2, VAR_1);
  break;
 case 131:
  FUNC_2(VAR_0, VAR_1);
  if (FUNC_3(VAR_0, VAR_1, 1, VAR_3))
   FUNC_1(VAR_2, VAR_1);
  else
   FUNC_4(VAR_1);
  break;
 case 130:
  FUNC_2(VAR_0, VAR_1);
  if (FUNC_3(VAR_2, VAR_1, 0, VAR_3))
   FUNC_1(VAR_2, VAR_1);
  else
   FUNC_4(VAR_1);
  break;
 default:
  FUNC_0("trailer.c: unhandled value %d",
      VAR_1->conf.if_exists);
 }
}
