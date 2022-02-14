
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int close_file; int file; } ;
struct rev_info {int early_output; TYPE_1__ diffopt; int sort_order; } ;
struct commit_list {struct commit_list* next; struct commit* item; } ;
struct commit {int dummy; } ;
struct TYPE_6__ {int tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_7__ {TYPE_2__ it_value; } ;


 int VAR_0 ;



 TYPE_3__ VAR_1 ;
 int FUNC_0 (struct commit_list*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct rev_info*,struct commit*) ;
 int FUNC_3 (int ,TYPE_3__*,int *) ;
 int FUNC_4 (struct rev_info*,char*,int) ;
 int FUNC_5 (struct rev_info*,struct commit*) ;
 int FUNC_6 (struct commit_list**,int ) ;

__attribute__((used)) static void FUNC_7(struct rev_info *VAR_2, struct commit_list *VAR_3)
{
 int VAR_4 = VAR_2->early_output, VAR_5 = VAR_2->diffopt.close_file;
 int VAR_6 = 1;

 VAR_2->diffopt.close_file = 0;
 FUNC_6(&VAR_3, VAR_2->sort_order);
 while (VAR_3 && VAR_4) {
  struct commit *VAR_7 = VAR_3->item;
  switch (FUNC_5(VAR_2, VAR_7)) {
  case 128:
   if (VAR_6) {
    int VAR_8 = FUNC_0(VAR_3);
    FUNC_4(VAR_2, "incomplete", VAR_8);
    VAR_6 = 0;
   }
   FUNC_2(VAR_2, VAR_7);
   VAR_4--;
   break;
  case 129:
   break;
  case 130:
   if (VAR_5)
    FUNC_1(VAR_2->diffopt.file);
   return;
  }
  VAR_3 = VAR_3->next;
 }


 if (!VAR_4) {
  if (VAR_5)
   FUNC_1(VAR_2->diffopt.file);
  return;
 }
 VAR_1.it_value.tv_sec = 0;
 VAR_1.it_value.tv_usec = 500000;
 FUNC_3(VAR_0, &VAR_1, ((void*)0));
}
