
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct psycho_softc {int sc_dev; int sc_mem_res; struct iommu_state* sc_is; } ;
struct iommu_state {int is_dtcmp; int is_dva; int is_dqueue; int is_ddram; int is_dtag; int is_iommu; int is_bushandle; int is_bustag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct iommu_state*,int,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct psycho_softc *VAR_6, int VAR_7, uint32_t VAR_8)
{
 struct iommu_state *VAR_9 = VAR_6->sc_is;


 VAR_9->is_bustag = FUNC_3(VAR_6->sc_mem_res);
 VAR_9->is_bushandle = FUNC_2(VAR_6->sc_mem_res);
 VAR_9->is_iommu = VAR_0;
 VAR_9->is_dtag = VAR_5;
 VAR_9->is_ddram = VAR_4;
 VAR_9->is_dqueue = VAR_1;
 VAR_9->is_dva = VAR_2;
 VAR_9->is_dtcmp = VAR_3;

 FUNC_1(FUNC_0(VAR_6->sc_dev), VAR_9, VAR_7, VAR_8, 0);
}
