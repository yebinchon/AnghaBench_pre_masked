
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtip_port {TYPE_1__* dd; int flags; } ;
struct TYPE_2__ {int queue; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned long VAR_4 ;
 unsigned long FUNC_2 (unsigned long) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct mtip_port*) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct mtip_port *VAR_5, unsigned long VAR_6)
{
 unsigned long VAR_7;
 bool VAR_8 = 1;

 FUNC_0(VAR_5->dd->queue);

 VAR_7 = VAR_4 + FUNC_2(VAR_6);
 do {
  if (FUNC_6(VAR_3, &VAR_5->flags) &&
   FUNC_6(VAR_2, &VAR_5->flags)) {
   FUNC_3(20);
   continue;
  }

  FUNC_3(100);

  if (FUNC_4(VAR_5->dd->pdev))
   goto err_fault;

  VAR_8 = FUNC_5(VAR_5);
  if (!VAR_8)
   break;
 } while (FUNC_7(VAR_4, VAR_7));

 FUNC_1(VAR_5->dd->queue);
 return VAR_8 ? -VAR_0 : 0;
err_fault:
 FUNC_1(VAR_5->dd->queue);
 return -VAR_1;
}
