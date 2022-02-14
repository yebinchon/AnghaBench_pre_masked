
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qib_pportdata {TYPE_1__* dd; } ;
struct TYPE_2__ {int upd_pio_shadow; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qib_pportdata*,int) ;

__attribute__((used)) static void FUNC_1(struct qib_pportdata *VAR_3)
{

 FUNC_0(VAR_3, VAR_1 | VAR_2 |
     VAR_0);
 VAR_3->dd->upd_pio_shadow = 1;
}
