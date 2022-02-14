
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clar_report {struct clar_error* errors; } ;
struct clar_error {struct clar_error* next; } ;
struct TYPE_2__ {int last_report; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,int ,struct clar_error*) ;

__attribute__((used)) static void
FUNC_1(struct clar_report *VAR_1)
{
 struct clar_error *VAR_2;
 int VAR_3 = 1;

 for (VAR_2 = VAR_1->errors; VAR_2; VAR_2 = VAR_2->next)
  FUNC_0(VAR_3++, VAR_0.last_report, VAR_2);
}
