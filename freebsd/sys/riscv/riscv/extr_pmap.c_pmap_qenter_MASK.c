
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef int vm_offset_t ;
typedef int pt_entry_t ;
typedef int pn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ) ;
 int* FUNC_2 (int ,int ) ;
 int FUNC_3 (int*,int) ;

void
FUNC_4(vm_offset_t VAR_5, vm_page_t *VAR_6, int VAR_7)
{
 pt_entry_t *VAR_8, VAR_9;
 vm_offset_t VAR_10;
 vm_page_t VAR_11;
 pt_entry_t VAR_12;
 pn_t VAR_13;
 int VAR_14;

 VAR_10 = VAR_5;
 for (VAR_14 = 0; VAR_14 < VAR_7; VAR_14++) {
  VAR_11 = VAR_6[VAR_14];
  VAR_9 = FUNC_0(VAR_11);
  VAR_13 = (VAR_9 / VAR_1);
  VAR_8 = FUNC_2(VAR_4, VAR_10);

  VAR_12 = VAR_2;
  VAR_12 |= (VAR_13 << VAR_3);
  FUNC_3(VAR_8, VAR_12);

  VAR_10 += VAR_0;
 }
 FUNC_1(VAR_4, VAR_5, VAR_10);
}
