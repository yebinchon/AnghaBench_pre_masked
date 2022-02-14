
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef scalar_t__ vm_paddr_t ;
typedef int vm_offset_t ;
typedef int boolean_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_6 ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ,int,int *) ;

boolean_t
FUNC_7(vm_page_t VAR_7[], vm_offset_t VAR_8[], int VAR_9,
    boolean_t VAR_10)
{
 vm_paddr_t VAR_11;
 boolean_t VAR_12;
 int VAR_13, VAR_14;





 VAR_12 = VAR_1;
 for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++) {
  VAR_11 = FUNC_2(VAR_7[VAR_14]);
  if (FUNC_3(VAR_11 >= VAR_0)) {
   VAR_13 = FUNC_6(VAR_6, VAR_4,
       VAR_2 | VAR_3, &VAR_8[VAR_14]);
   FUNC_0(VAR_13 == 0, ("vmem_alloc failed: %d", VAR_13));
   VAR_12 = VAR_5;
  } else {
   VAR_8[VAR_14] = FUNC_1(VAR_11);
  }
 }


 if (!VAR_12)
  return (VAR_1);

 if (!VAR_10)
  FUNC_5();
 for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++) {
  VAR_11 = FUNC_2(VAR_7[VAR_14]);
  if (VAR_11 >= VAR_0) {
   FUNC_4(
      "pmap_map_io_transient: TODO: Map out of DMAP data");
  }
 }

 return (VAR_12);
}
