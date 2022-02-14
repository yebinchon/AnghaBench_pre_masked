
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct chmc_obp_mem_layout {char** dimm_labels; } ;
struct chmc_bank_info {int bank_id; TYPE_1__* p; } ;
struct TYPE_2__ {struct chmc_obp_mem_layout layout_prop; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct chmc_bank_info* FUNC_0 (unsigned long) ;
 int FUNC_1 (int,unsigned long,int*,char**,struct chmc_obp_mem_layout*,int) ;
 int FUNC_2 (char*,char*,char*,...) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(int VAR_5,
      unsigned long VAR_6,
      char *VAR_7, int VAR_8)
{
 struct chmc_bank_info *VAR_9;
 struct chmc_obp_mem_layout *VAR_10;
 int VAR_11, VAR_12;

 VAR_9 = FUNC_0(VAR_6);
 if (VAR_9 == ((void*)0) ||
     VAR_5 < VAR_4 ||
     VAR_5 > VAR_3) {
  VAR_7[0] = '?';
  VAR_7[1] = '?';
  VAR_7[2] = '?';
  VAR_7[3] = '\0';
  return 0;
 }

 VAR_10 = &VAR_9->p->layout_prop;
 VAR_11 = VAR_9->bank_id & (VAR_0 - 1);
 VAR_12 = (VAR_11 & (VAR_1 - 1));
 VAR_12 *= VAR_2;

 if (VAR_5 != VAR_4) {
  char *VAR_13;
  int VAR_14;

  FUNC_1(VAR_5, VAR_6, &VAR_14,
         &VAR_13, VAR_10, VAR_12);
  FUNC_2(VAR_7, "%s, pin %3d", VAR_13, VAR_14);
 } else {
  int VAR_15;




  for (VAR_15 = 0; VAR_15 < VAR_2; VAR_15++) {
   FUNC_2(VAR_7, "%s ",
    VAR_10->dimm_labels[VAR_12 + VAR_15]);
   VAR_7 += FUNC_3(VAR_7);
  }
 }
 return 0;
}
