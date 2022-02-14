
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
struct tte {scalar_t__ tte_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct tte*) ;
 scalar_t__ VAR_7 ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int VAR_8 ;
 int FUNC_6 (int,int ,int ) ;
 struct tte* FUNC_7 (scalar_t__) ;

void
FUNC_8(vm_offset_t VAR_9)
{
 vm_offset_t VAR_10;
 struct tte *VAR_11;

 if (VAR_9 >= VAR_7)
  return;

 VAR_11 = FUNC_7(VAR_9);
 VAR_10 = FUNC_1(VAR_8);

 FUNC_0((VAR_9 >= VAR_10) && (VAR_9 < (VAR_10 + (VAR_4 * VAR_2))),
     ("pmap_quick_remove_page: invalid address"));
 FUNC_0(VAR_11->tte_data != 0, ("pmap_quick_remove_page: PTE not in use"));

 FUNC_6(FUNC_2(VAR_9) | VAR_5 | VAR_6, VAR_0, 0);
 FUNC_6(FUNC_2(VAR_9) | VAR_5 | VAR_6, VAR_1, 0);
 FUNC_5(VAR_3);
 FUNC_3(VAR_11);
 FUNC_4();
}
