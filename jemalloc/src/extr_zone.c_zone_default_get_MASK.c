
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_address_t ;
typedef int malloc_zone_t ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int *,int **,unsigned int*) ;

__attribute__((used)) static malloc_zone_t *
FUNC_2(void) {
 malloc_zone_t **VAR_1 = ((void*)0);
 unsigned int VAR_2 = 0;
 if (VAR_0 != FUNC_1(0, ((void*)0),
     (vm_address_t**)&VAR_1, &VAR_2)) {




  VAR_2 = 0;
 }

 if (VAR_2) {
  return VAR_1[0];
 }

 return FUNC_0();
}
