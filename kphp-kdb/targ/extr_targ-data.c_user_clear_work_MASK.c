
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct company* work; int uid; } ;
typedef TYPE_1__ user_t ;
struct company {struct company* next; int job; int company_name; int name_hashes; int job_hashes; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct company*,int) ;

__attribute__((used)) static void FUNC_3 (user_t *VAR_0) {
  struct company *VAR_1, *VAR_2;
  for (VAR_1 = VAR_0->work; VAR_1; VAR_1 = VAR_2) {
    FUNC_0 (VAR_0->uid, VAR_1->job_hashes);
    FUNC_0 (VAR_0->uid, VAR_1->name_hashes);
    FUNC_1 (VAR_1->company_name);
    FUNC_1 (VAR_1->job);
    VAR_2 = VAR_1->next;
    FUNC_2 (VAR_1, sizeof (struct company));
  }
  VAR_0->work = 0;
}
