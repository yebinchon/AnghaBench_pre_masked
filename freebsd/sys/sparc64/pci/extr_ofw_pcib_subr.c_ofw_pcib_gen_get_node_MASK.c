
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ofw_pcib_gen_softc {int ops_node; } ;
typedef int phandle_t ;
typedef int device_t ;


 struct ofw_pcib_gen_softc* FUNC_0 (int ) ;

phandle_t
FUNC_1(device_t VAR_0, device_t VAR_1)
{
 struct ofw_pcib_gen_softc *VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 return (VAR_2->ops_node);
}
