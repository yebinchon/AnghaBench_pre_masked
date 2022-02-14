
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clar_report {scalar_t__ status; struct clar_error* errors; struct clar_report* next; } ;
struct clar_error {struct clar_error* next; } ;
struct TYPE_2__ {struct clar_report* reports; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ,struct clar_report*,struct clar_error*) ;

__attribute__((used)) static void
FUNC_1(void)
{
 struct clar_report *VAR_2;
 struct clar_error *VAR_3;
 int VAR_4 = 1;

 for (VAR_2 = VAR_1.reports; VAR_2; VAR_2 = VAR_2->next) {
  if (VAR_2->status != VAR_0)
   continue;

  for (VAR_3 = VAR_2->errors; VAR_3; VAR_3 = VAR_3->next)
   FUNC_0(VAR_4++, VAR_2, VAR_3);
 }
}
