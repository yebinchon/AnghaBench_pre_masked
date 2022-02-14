
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int exists; int domain; } ;
struct moxtet {TYPE_1__ irq; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(struct moxtet *VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2) {
  if (VAR_1->irq.exists & FUNC_0(VAR_2)) {
   VAR_3 = FUNC_3(VAR_1->irq.domain, VAR_2);
   FUNC_1(VAR_3);
  }
 }

 FUNC_2(VAR_1->irq.domain);
}
