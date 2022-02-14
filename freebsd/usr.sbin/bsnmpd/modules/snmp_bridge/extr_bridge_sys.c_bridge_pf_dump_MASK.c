
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_3__ {int val; int name; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*,int ,int ,int ) ;

void
FUNC_2(void)
{
 uint8_t VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++) {
  FUNC_1(VAR_0, "%s%s = %d", VAR_2,
      VAR_1[VAR_3].name, VAR_1[VAR_3].val);
 }
}
