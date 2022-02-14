
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int pt_entry_t ;
typedef int pmap_t ;
typedef int pd_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int ) ;
 int * FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;

bool
FUNC_4(pmap_t VAR_2, vm_offset_t VAR_3, pd_entry_t **VAR_4, pd_entry_t **VAR_5,
    pt_entry_t **VAR_6)
{
 pd_entry_t *VAR_7, *VAR_8;


 VAR_7 = FUNC_0(VAR_2, VAR_3);
 *VAR_4 = VAR_7;

 if (VAR_7 == ((void*)0) || (FUNC_3(VAR_7) & VAR_1) == 0)
  return (0);

 if ((FUNC_3(VAR_7) & VAR_0) != 0) {
  *VAR_5 = ((void*)0);
  *VAR_6 = ((void*)0);
  return (1);
 }


 VAR_8 = FUNC_1(VAR_7, VAR_3);
 *VAR_5 = VAR_8;

 if (VAR_8 == ((void*)0) || (FUNC_3(VAR_8) & VAR_1) == 0)
  return (0);

 if ((FUNC_3(VAR_8) & VAR_0) != 0) {
  *VAR_6 = ((void*)0);
  return (1);
 }


 *VAR_6 = FUNC_2(VAR_8, VAR_3);

 return (1);
}
