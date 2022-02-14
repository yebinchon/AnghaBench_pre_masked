
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssb_sprom_core_pwr_info {int * pa_5gh; int * pa_5gl; int * pa_5g; int * pa_2g; } ;
struct ssb_sprom {struct ssb_sprom_core_pwr_info* core_pwr_info; } ;
typedef int postfix ;


 int FUNC_0 (struct ssb_sprom_core_pwr_info*) ;
 int FUNC_1 (char const*,char*,char*,int *,int ,int) ;
 int FUNC_2 (char*,int,char*,int) ;

__attribute__((used)) static void FUNC_3(struct ssb_sprom *VAR_0,
     const char *VAR_1, bool VAR_2)
{
 char VAR_3[2];
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0->core_pwr_info); VAR_4++) {
  struct ssb_sprom_core_pwr_info *VAR_5;

  VAR_5 = &VAR_0->core_pwr_info[VAR_4];

  FUNC_2(VAR_3, sizeof(VAR_3), "%i", VAR_4);
  FUNC_1(VAR_1, VAR_3, "pa2gw3a",
          &VAR_5->pa_2g[3], 0, VAR_2);
  FUNC_1(VAR_1, VAR_3, "pa5gw3a",
          &VAR_5->pa_5g[3], 0, VAR_2);
  FUNC_1(VAR_1, VAR_3, "pa5glw3a",
          &VAR_5->pa_5gl[3], 0, VAR_2);
  FUNC_1(VAR_1, VAR_3, "pa5ghw3a",
          &VAR_5->pa_5gh[3], 0, VAR_2);
 }
}
