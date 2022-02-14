
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rvt_qpn_table {TYPE_1__* map; } ;
struct TYPE_2__ {scalar_t__ page; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (unsigned long) ;

__attribute__((used)) static void FUNC_2(struct rvt_qpn_table *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->map); VAR_1++)
  FUNC_1((unsigned long)VAR_0->map[VAR_1].page);
}
