
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ target; int irq_base; } ;
struct fsl_msi_softc {scalar_t__ sc_base; TYPE_1__ sc_map; struct fsl_msi_irq* sc_msi_irq; } ;
struct fsl_msi_irq {int irq; scalar_t__ reg; int cookie; int res; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,TYPE_1__*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,int ,int*,int ) ;
 void* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int,int ,int *,struct fsl_msi_irq*,int *) ;
 struct fsl_msi_softc* FUNC_4 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int * VAR_12 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ,int ,int ) ;
 int VAR_13 ;
 int FUNC_7 (int *,int ,int ,int) ;
 int * FUNC_8 (char*,int ,int ,int,int,int) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_14)
{
 struct fsl_msi_softc *VAR_15;
 struct fsl_msi_irq *VAR_16;
 int VAR_17;

 VAR_15 = FUNC_4(VAR_14);

 if (VAR_12 == ((void*)0))
  VAR_12 = FUNC_8("MPIC MSI", 0, 0, 1, 1, VAR_5 | VAR_6);


 VAR_15->sc_base = FUNC_2(VAR_14, VAR_9, 0);
 VAR_15->sc_map.target = FUNC_2(VAR_14, VAR_9, 1);

 if (VAR_15->sc_map.target == 0)
  VAR_15->sc_map.target = VAR_15->sc_base + VAR_0;

 for (VAR_17 = 0; VAR_17 < VAR_1; VAR_17++) {
  VAR_16 = &VAR_15->sc_msi_irq[VAR_17];
  VAR_16->irq = VAR_17;
  VAR_16->reg = VAR_15->sc_base + 16 * VAR_17;
  VAR_16->res = FUNC_1(VAR_14, VAR_8,
      &VAR_16->irq, VAR_7);
  FUNC_3(VAR_14, VAR_16->res, VAR_4 | VAR_3,
      VAR_10, ((void*)0), VAR_16, &VAR_16->cookie);
 }
 VAR_15->sc_map.irq_base = FUNC_6(VAR_14, FUNC_5(VAR_14),
     VAR_2, 0, 0);


 FUNC_7(VAR_12, VAR_15->sc_map.irq_base, VAR_2, VAR_6);

 FUNC_0(&VAR_11, &VAR_15->sc_map, VAR_13);

 return (0);
}
