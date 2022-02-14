
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef int vm_offset_t ;
typedef int u_long ;
struct tte {int tte_data; } ;
typedef int pmap_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct tte*) ;
 int FUNC_2 (int ,int ,int ,int ,int) ;
 int * FUNC_3 (int ,int ) ;

__attribute__((used)) static int
FUNC_4(pmap_t VAR_7, pmap_t VAR_8, struct tte *VAR_9,
    vm_offset_t VAR_10)
{
 vm_page_t VAR_11;
 u_long VAR_12;

 if ((VAR_9->tte_data & VAR_1) != 0)
  return (1);
 if (FUNC_3(VAR_8, VAR_10) == ((void*)0)) {
  VAR_12 = VAR_9->tte_data &
      ~(VAR_2 | VAR_3 | VAR_4 | VAR_0 | VAR_5);
  VAR_11 = FUNC_0(FUNC_1(VAR_9));
  FUNC_2(VAR_8, VAR_11, VAR_10, VAR_6, VAR_12);
 }
 return (1);
}
