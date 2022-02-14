
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct xive_softc {int sc_mem; } ;
struct TYPE_2__ {int girq; } ;
struct xive_cpu {int cam; TYPE_1__ ipi_data; } ;


 struct xive_cpu* FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,scalar_t__,int) ;
 struct xive_softc* FUNC_4 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int ,int ,TYPE_1__*) ;
 int FUNC_6 (struct xive_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_7(void)
{
 struct xive_softc *VAR_8;
 struct xive_cpu *VAR_9;
 uint32_t VAR_10;

 VAR_9 = FUNC_0(VAR_7);

 VAR_8 = FUNC_4(VAR_6);

 VAR_10 = FUNC_1(VAR_8->sc_mem, VAR_4 + VAR_2);
 if (VAR_10 & VAR_0)
  FUNC_2(VAR_8->sc_mem, VAR_5);

 FUNC_3(VAR_8->sc_mem, VAR_4 + VAR_1, 0xff);
 FUNC_3(VAR_8->sc_mem, VAR_4 + VAR_2,
     VAR_0 | VAR_9->cam);

 FUNC_5(VAR_6, VAR_9->ipi_data.girq, &VAR_9->ipi_data);
 FUNC_6(VAR_8, VAR_3, 0xff);
}
