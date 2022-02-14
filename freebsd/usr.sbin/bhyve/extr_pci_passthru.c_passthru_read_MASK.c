
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct vmctx {int dummy; } ;
struct pci_devinst {TYPE_1__* pi_bar; struct passthru_softc* pi_arg; } ;
struct passthru_softc {TYPE_2__* psc_bar; } ;
struct iodev_pio_req {int width; scalar_t__ val; scalar_t__ port; int access; } ;
struct TYPE_4__ {scalar_t__ addr; } ;
struct TYPE_3__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct iodev_pio_req*,int) ;
 int FUNC_2 (int ,int ,struct iodev_pio_req*) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (struct passthru_softc*,scalar_t__,int) ;
 int FUNC_4 (struct pci_devinst*) ;

__attribute__((used)) static uint64_t
FUNC_5(struct vmctx *VAR_4, int VAR_5, struct pci_devinst *VAR_6, int VAR_7,
       uint64_t VAR_8, int VAR_9)
{
 struct passthru_softc *VAR_10;
 struct iodev_pio_req VAR_11;
 uint64_t VAR_12;

 VAR_10 = VAR_6->pi_arg;

 if (VAR_7 == FUNC_4(VAR_6)) {
  VAR_12 = FUNC_3(VAR_10, VAR_8, VAR_9);
 } else {
  FUNC_0(VAR_6->pi_bar[VAR_7].type == VAR_2);
  FUNC_1(&VAR_11, sizeof(struct iodev_pio_req));
  VAR_11.access = VAR_1;
  VAR_11.port = VAR_10->psc_bar[VAR_7].addr + VAR_8;
  VAR_11.width = VAR_9;
  VAR_11.val = 0;

  (void)FUNC_2(VAR_3, VAR_0, &VAR_11);

  VAR_12 = VAR_11.val;
 }

 return (VAR_12);
}
