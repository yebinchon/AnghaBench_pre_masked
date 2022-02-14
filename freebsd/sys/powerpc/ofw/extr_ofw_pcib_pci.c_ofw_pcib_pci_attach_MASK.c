
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct ofw_pcib_softc {int ops_iinfo; int ops_node; TYPE_1__ ops_pcib_sc; } ;
typedef int device_t ;
typedef int cell_t ;


 struct ofw_pcib_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_0)
{
 struct ofw_pcib_softc *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 VAR_1->ops_pcib_sc.dev = VAR_0;
 VAR_1->ops_node = FUNC_1(VAR_0);

 FUNC_2(VAR_1->ops_node, &VAR_1->ops_iinfo,
     sizeof(cell_t));

 FUNC_4(VAR_0);
 return (FUNC_3(VAR_0));
}
