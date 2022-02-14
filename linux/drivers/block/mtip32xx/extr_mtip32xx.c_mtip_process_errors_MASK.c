
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct driver_data {TYPE_1__* port; TYPE_2__* pdev; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int svc_wait; int flags; scalar_t__ mmio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *,char*,...) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_7(struct driver_data *VAR_7, u32 VAR_8)
{
 if (FUNC_4(VAR_8 & VAR_1)) {
  FUNC_0(&VAR_7->pdev->dev,
   "Clearing PxSERR.DIAG.x\n");
  FUNC_6((1 << 26), VAR_7->port->mmio + VAR_6);
 }

 if (FUNC_4(VAR_8 & VAR_4)) {
  FUNC_0(&VAR_7->pdev->dev,
   "Clearing PxSERR.DIAG.n\n");
  FUNC_6((1 << 16), VAR_7->port->mmio + VAR_6);
 }

 if (FUNC_4(VAR_8 & ~VAR_2)) {
  FUNC_0(&VAR_7->pdev->dev,
   "Port stat errors %x unhandled\n",
   (VAR_8 & ~VAR_2));
  if (FUNC_2(VAR_7->pdev))
   return;
 }
 if (FUNC_1(VAR_8 & (VAR_5 | VAR_3))) {
  FUNC_3(VAR_0, &VAR_7->port->flags);
  FUNC_5(&VAR_7->port->svc_wait);
 }
}
