
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_paddr_t ;
typedef int vm_ooffset_t ;
typedef int vm_memattr_t ;
typedef int video_adapter_t ;
struct ofwfb_softc {int sc_num_pciaddrs; int sc_stride; int sc_height; int sc_addr; TYPE_1__* sc_pciaddrs; } ;
struct TYPE_2__ {int phys_lo; int size_lo; int phys_hi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int
FUNC_0(video_adapter_t *VAR_5, vm_ooffset_t VAR_6, vm_paddr_t *VAR_7,
    int VAR_8, vm_memattr_t *VAR_9)
{
 struct ofwfb_softc *VAR_10;
 int VAR_11;

 VAR_10 = (struct ofwfb_softc *)VAR_5;





 for (VAR_11 = 0; VAR_11 < VAR_10->sc_num_pciaddrs; VAR_11++)
   if (VAR_6 >= VAR_10->sc_pciaddrs[VAR_11].phys_lo &&
     VAR_6 < (VAR_10->sc_pciaddrs[VAR_11].phys_lo + VAR_10->sc_pciaddrs[VAR_11].size_lo))
  {




   if (VAR_10->sc_pciaddrs[VAR_11].phys_hi &
       VAR_2)
    *VAR_9 = VAR_3;

   *VAR_7 = VAR_6;
   return (0);
  }




 if (VAR_4) {
  *VAR_7 = VAR_6;
  return (0);
 }





 if (VAR_6 < VAR_10->sc_stride*VAR_10->sc_height) {
  *VAR_7 = VAR_10->sc_addr + VAR_6;
  return (0);
 }




 if (VAR_10->sc_num_pciaddrs == 0)
  return (VAR_1);

 return (VAR_0);
}
