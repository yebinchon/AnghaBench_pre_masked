
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pdc_state {int rxout; int txout; int pdc_requests; TYPE_2__* txregs_64; TYPE_1__* rxregs_64; } ;
struct TYPE_4__ {int ptr; } ;
struct TYPE_3__ {int ptr; } ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(struct pdc_state *VAR_1)
{




 FUNC_1();
 FUNC_0(VAR_1->rxout << 4, &VAR_1->rxregs_64->ptr);
 FUNC_0(VAR_1->txout << 4, &VAR_1->txregs_64->ptr);
 VAR_1->pdc_requests++;

 return VAR_0;
}
