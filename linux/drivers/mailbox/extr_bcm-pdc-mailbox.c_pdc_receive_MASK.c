
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pdc_state {int last_rx_curr; TYPE_1__* rxregs_64; } ;
struct TYPE_2__ {int status0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct pdc_state*) ;

__attribute__((used)) static int
FUNC_2(struct pdc_state *VAR_3)
{
 int VAR_4;


 VAR_3->last_rx_curr =
     (FUNC_0(&VAR_3->rxregs_64->status0) &
      VAR_0) / VAR_2;

 do {

  VAR_4 = FUNC_1(VAR_3);
 } while (VAR_4 == VAR_1);

 return 0;
}
