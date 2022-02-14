
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int dpte_buffer_size_in_pte_reqs_luma; } ;
struct TYPE_3__ {unsigned int vmm_page_size_bytes; } ;
struct display_mode_lib {TYPE_2__ ip; TYPE_1__ soc; } ;
typedef enum source_macro_tile_size { ____Placeholder_source_macro_tile_size } source_macro_tile_size ;
typedef enum source_format_class { ____Placeholder_source_format_class } source_format_class ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_1 (double,int) ;
 unsigned int FUNC_2 (unsigned int,int) ;
 unsigned int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int*,unsigned int*,unsigned int) ;
 int FUNC_5 (int) ;
 unsigned int FUNC_6 (int,int) ;

__attribute__((used)) static void FUNC_7(
  struct display_mode_lib *VAR_2,
  unsigned int *VAR_3,
  unsigned int *VAR_4,
  unsigned int VAR_5,
  unsigned int VAR_6,
  int VAR_7,
  int VAR_8,
  int VAR_9,
  int VAR_10,
  int VAR_11)
{
 bool VAR_12 = (VAR_8 == VAR_0);
 bool VAR_13 = (VAR_10 == VAR_1);

 unsigned int VAR_14 = FUNC_6(
   (enum source_format_class) VAR_7,
   VAR_11);
 unsigned int VAR_15 = FUNC_3(VAR_14);
 unsigned int VAR_16 = 0;
 unsigned int VAR_17 = 0;

 unsigned int VAR_18;
 unsigned int VAR_19;
 unsigned int VAR_20;
 unsigned int VAR_21;
 unsigned int VAR_22;
 unsigned int VAR_23;
 unsigned int VAR_24;
 unsigned int VAR_25;
 unsigned int VAR_26;
 unsigned int VAR_27;
 unsigned int VAR_28;
 unsigned int VAR_29;
 unsigned int VAR_30;
 unsigned int VAR_31;
 unsigned int VAR_32;
 unsigned int VAR_33;
 unsigned int VAR_34;
 unsigned int VAR_35;
 unsigned int VAR_36;
 unsigned int VAR_37;

 if (VAR_12) {
  VAR_16 = 256;
  VAR_17 = 1;
 } else {
  FUNC_4(&VAR_16, &VAR_17, VAR_14);
 }

 VAR_18 = FUNC_3((double) VAR_17);
 VAR_19 = VAR_12 ?
   256 : FUNC_5((enum source_macro_tile_size) VAR_9);
 VAR_20 = FUNC_3((double) VAR_19);
 VAR_21 = 0;
 VAR_22 = 0;







 if (VAR_8 != VAR_0)
  VAR_21 = VAR_18
    + FUNC_1((double) (VAR_20 - 8) / 2.0, 1);
 else
  VAR_21 = 0;

 VAR_22 = VAR_20 - VAR_15 - VAR_21;




 VAR_23 = 6;




 VAR_24 = VAR_18 + 3;
 VAR_25 = VAR_23 + 8 - VAR_15
   - VAR_24;
 VAR_26 = 0;




 if (!VAR_13)
  VAR_26 = VAR_24;
 else
  VAR_26 = VAR_25;

 *VAR_4 = 1 << VAR_26;




 VAR_27 = FUNC_3(VAR_2->soc.vmm_page_size_bytes);
 VAR_28 = VAR_2->ip.dpte_buffer_size_in_pte_reqs_luma;

 VAR_29 = 0;
 VAR_30 = 0;
 VAR_31 = 0;
 VAR_32 = 0;
 VAR_33 = 0;
 VAR_34 = 0;
 VAR_35 = 0;
 VAR_36 = 0;
 VAR_37 = 0;

 if (VAR_12)
  VAR_29 = 0;
 else
  VAR_29 = (VAR_27 - 8) / 2 + VAR_18;
 VAR_30 = VAR_27 - VAR_15 - VAR_29;


 if (VAR_20 <= VAR_27)
  VAR_31 = 0;
 else if (VAR_21 - VAR_29 >= 2)
  VAR_31 = 2;
 else
  VAR_31 = VAR_21 - VAR_29;
 VAR_32 = 3 - VAR_31;

 FUNC_0((VAR_32 == 3 && VAR_31 == 0) ||
   (VAR_32 == 2 && VAR_31 == 1) ||
   (VAR_32 == 1 && VAR_31 == 2));




 VAR_33 = VAR_29 + VAR_31;
 VAR_34 = VAR_30 + VAR_32;
 VAR_37 = 1 << VAR_34;




 if (VAR_12) {
  VAR_35 = FUNC_2(
    FUNC_3(VAR_28 * VAR_37 / VAR_6),
    1);

  FUNC_0(VAR_35 >= 3);

  if (VAR_35 > 7)
   VAR_35 = 7;

  VAR_36 = VAR_35;
 } else {

  if (!VAR_13)
   VAR_36 = VAR_33;
  else
   VAR_36 =
     (VAR_22 < VAR_34) ?
       VAR_22 : VAR_34;
 }






 if (!VAR_13 && VAR_5 > (2560 + 16) && VAR_14 >= 4 && VAR_27 == 12
   && VAR_20 >= 16)
  VAR_36 = VAR_36 - 1;

 *VAR_3 = 1 << VAR_36;
}
