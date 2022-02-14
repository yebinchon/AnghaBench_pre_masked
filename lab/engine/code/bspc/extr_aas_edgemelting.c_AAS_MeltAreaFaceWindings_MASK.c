
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* l_next; } ;
typedef TYPE_1__ tmp_area_t ;
struct TYPE_5__ {TYPE_1__* areas; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,...) ;
 TYPE_2__ VAR_0 ;

void FUNC_3(void)
{
 tmp_area_t *VAR_1;
 int VAR_2 = 0;

 FUNC_1("AAS_MeltAreaFaceWindings\r\n");
 FUNC_2("%6d edges melted", VAR_2);

 for (VAR_1 = VAR_0.areas; VAR_1; VAR_1 = VAR_1->l_next)
 {
  VAR_2 += FUNC_0(VAR_1);
  FUNC_2("\r%6d", VAR_2);
 }
 FUNC_2("\n");
 FUNC_1("%6d edges melted\r\n", VAR_2);
}
