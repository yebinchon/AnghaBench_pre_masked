
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sort_list_item {int str; } ;
struct sort_list {size_t count; struct sort_list_item** list; } ;
struct TYPE_2__ {int zflag; int uflag; } ;
typedef int FILE ;


 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (int,int *) ;
 scalar_t__ FUNC_3 (struct sort_list_item**,struct sort_list_item**) ;
 int * FUNC_4 (char const*,char*) ;
 TYPE_1__ VAR_0 ;

void
FUNC_5(struct sort_list *VAR_1, const char *VAR_2)
{

 if (VAR_1 && VAR_2) {
  FILE *VAR_3;

  VAR_3 = FUNC_4(VAR_2, "w");
  if (VAR_3 == ((void*)0))
   FUNC_2(2, ((void*)0));

  if (VAR_1->list) {
   size_t VAR_4;
   if (!(VAR_0.uflag)) {
    for (VAR_4 = 0; VAR_4 < VAR_1->count; ++VAR_4)
     FUNC_0(VAR_1->list[VAR_4]->str, VAR_3,
         VAR_0.zflag);
   } else {
    struct sort_list_item *VAR_5 = ((void*)0);
    struct sort_list_item *VAR_6;
    for (VAR_4 = 0; VAR_4 < VAR_1->count; ++VAR_4) {
     VAR_6 = VAR_1->list[VAR_4];
     if ((VAR_5 == ((void*)0)) ||
         FUNC_3(&VAR_5, &VAR_6)) {
      FUNC_0(VAR_6->str, VAR_3, VAR_0.zflag);
      VAR_5 = VAR_6;
     }
    }
   }
  }

  FUNC_1(VAR_3, VAR_2);
 }
}
