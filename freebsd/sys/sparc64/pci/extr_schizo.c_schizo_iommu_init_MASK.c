
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int is_dtcmp; int is_dva; int is_dqueue; int is_ddram; int is_dtag; int is_iommu; int is_bushandle; int is_bustag; } ;
struct TYPE_4__ {TYPE_1__ sis_is; } ;
struct schizo_softc {TYPE_2__ sc_is; int sc_dev; int * sc_mem_res; } ;
struct iommu_state {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct iommu_state*,int,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct schizo_softc *VAR_7, int VAR_8, uint32_t VAR_9)
{


 VAR_7->sc_is.sis_is.is_bustag = FUNC_3(VAR_7->sc_mem_res[VAR_0]);
 VAR_7->sc_is.sis_is.is_bushandle =
     FUNC_2(VAR_7->sc_mem_res[VAR_0]);
 VAR_7->sc_is.sis_is.is_iommu = VAR_1;
 VAR_7->sc_is.sis_is.is_dtag = VAR_6;
 VAR_7->sc_is.sis_is.is_ddram = VAR_5;
 VAR_7->sc_is.sis_is.is_dqueue = VAR_2;
 VAR_7->sc_is.sis_is.is_dva = VAR_3;
 VAR_7->sc_is.sis_is.is_dtcmp = VAR_4;

 FUNC_1(FUNC_0(VAR_7->sc_dev),
     (struct iommu_state *)&VAR_7->sc_is, VAR_8, VAR_9, 0);
}
