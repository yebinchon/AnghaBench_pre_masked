
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct string_list {int dummy; } ;
struct TYPE_3__ {unsigned int option; int cmd; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (struct string_list*,int ) ;

__attribute__((used)) static void FUNC_2(struct string_list *VAR_1, unsigned int VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  if (VAR_2 &&
      (VAR_0[VAR_3].option & VAR_2))
   continue;
  FUNC_1(VAR_1, VAR_0[VAR_3].cmd);
 }
}
