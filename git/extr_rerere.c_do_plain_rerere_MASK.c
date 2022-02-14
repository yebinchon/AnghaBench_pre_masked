
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct string_list {int nr; TYPE_3__* items; } ;
struct rerere_id {int dummy; } ;
struct repository {int index; } ;
struct TYPE_6__ {char* string; } ;
struct TYPE_5__ {struct rerere_id* util; } ;
struct TYPE_4__ {int util; } ;


 int VAR_0 ;
 struct string_list VAR_1 ;
 int FUNC_0 (int ,TYPE_3__*,struct string_list*) ;
 int FUNC_1 (struct repository*,struct string_list*) ;
 int FUNC_2 (int ,char const*,unsigned char*,int *) ;
 int FUNC_3 (int ) ;
 struct rerere_id* FUNC_4 (unsigned char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct rerere_id*,int *) ;
 scalar_t__ FUNC_7 (struct string_list*,char const*) ;
 TYPE_2__* FUNC_8 (struct string_list*,char const*) ;
 TYPE_1__* FUNC_9 (struct string_list*,char const*) ;
 int FUNC_10 (struct string_list*,char const*,int) ;
 int FUNC_11 (struct repository*,struct string_list*) ;
 int FUNC_12 (struct string_list*,int) ;

__attribute__((used)) static int FUNC_13(struct repository *VAR_2,
      struct string_list *VAR_3, int VAR_4)
{
 struct string_list VAR_5 = VAR_1;
 struct string_list VAR_6 = VAR_1;
 int VAR_7;

 FUNC_1(VAR_2, &VAR_5);







 for (VAR_7 = 0; VAR_7 < VAR_5.nr; VAR_7++) {
  struct rerere_id *VAR_8;
  unsigned char VAR_9[VAR_0];
  const char *VAR_10 = VAR_5.items[VAR_7].string;
  int VAR_11;






  VAR_11 = FUNC_2(VAR_2->index, VAR_10, VAR_9, ((void*)0));
  if (VAR_11 != 0 && FUNC_7(VAR_3, VAR_10)) {
   FUNC_5(FUNC_9(VAR_3, VAR_10)->util);
   FUNC_10(VAR_3, VAR_10, 1);
  }
  if (VAR_11 < 1)
   continue;

  VAR_8 = FUNC_4(VAR_9);
  FUNC_8(VAR_3, VAR_10)->util = VAR_8;


  FUNC_3(FUNC_6(VAR_8, ((void*)0)));
 }

 for (VAR_7 = 0; VAR_7 < VAR_3->nr; VAR_7++)
  FUNC_0(VAR_2->index, &VAR_3->items[VAR_7], &VAR_6);

 if (VAR_6.nr)
  FUNC_11(VAR_2, &VAR_6);

 return FUNC_12(VAR_3, VAR_4);
}
