
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct diff_queue_struct {int dummy; } ;
struct diff_filepair {TYPE_1__* one; TYPE_1__* two; int score; } ;
struct TYPE_5__ {int rename_used; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*) ;
 struct diff_filepair* FUNC_3 (struct diff_queue_struct*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (struct diff_filepair*) ;

__attribute__((used)) static void FUNC_5(struct diff_filepair *VAR_0,
    struct diff_filepair *VAR_1,
    struct diff_queue_struct *VAR_2)
{

 struct diff_filepair *VAR_3 = VAR_0, *VAR_4 = VAR_1, *VAR_5;
 if (FUNC_0(VAR_0->one)) {

  VAR_4 = VAR_0; VAR_3 = VAR_1;
 }

 if (!FUNC_0(VAR_4->one))
  FUNC_1("internal error in merge #1");
 if (FUNC_0(VAR_4->two))
  FUNC_1("internal error in merge #2");
 if (FUNC_0(VAR_3->one))
  FUNC_1("internal error in merge #3");
 if (!FUNC_0(VAR_3->two))
  FUNC_1("internal error in merge #4");

 VAR_5 = FUNC_3(VAR_2, VAR_4->one, VAR_3->two);
 VAR_5->score = VAR_0->score;






 VAR_4->one->rename_used++;
 FUNC_2(VAR_4->two);
 FUNC_2(VAR_3->one);
 FUNC_4(VAR_4);
 FUNC_4(VAR_3);
}
