
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssb_sprom_core_pwr_info {int * pa_5gh; int * pa_5gl; int * pa_5g; int maxpwr_5gl; int maxpwr_5gh; int maxpwr_5g; int * pa_2g; int itssi_5g; int itssi_2g; int maxpwr_2g; } ;
struct ssb_sprom {struct ssb_sprom_core_pwr_info* core_pwr_info; } ;
typedef int postfix ;


 int FUNC_0 (struct ssb_sprom_core_pwr_info*) ;
 int FUNC_1 (char const*,char*,char*,int *,int ,int) ;
 int FUNC_2 (char const*,char*,char*,int *,int ,int) ;
 int FUNC_3 (char*,int,char*,int) ;

__attribute__((used)) static void FUNC_4(struct ssb_sprom *VAR_0,
       const char *VAR_1, bool VAR_2)
{
 char VAR_3[2];
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0->core_pwr_info); VAR_4++) {
  struct ssb_sprom_core_pwr_info *VAR_5;

  VAR_5 = &VAR_0->core_pwr_info[VAR_4];

  FUNC_3(VAR_3, sizeof(VAR_3), "%i", VAR_4);
  FUNC_2(VAR_1, VAR_3, "maxp2ga",
         &VAR_5->maxpwr_2g, 0, VAR_2);
  FUNC_2(VAR_1, VAR_3, "itt2ga",
         &VAR_5->itssi_2g, 0, VAR_2);
  FUNC_2(VAR_1, VAR_3, "itt5ga",
         &VAR_5->itssi_5g, 0, VAR_2);
  FUNC_1(VAR_1, VAR_3, "pa2gw0a",
          &VAR_5->pa_2g[0], 0, VAR_2);
  FUNC_1(VAR_1, VAR_3, "pa2gw1a",
          &VAR_5->pa_2g[1], 0, VAR_2);
  FUNC_1(VAR_1, VAR_3, "pa2gw2a",
          &VAR_5->pa_2g[2], 0, VAR_2);
  FUNC_2(VAR_1, VAR_3, "maxp5ga",
         &VAR_5->maxpwr_5g, 0, VAR_2);
  FUNC_2(VAR_1, VAR_3, "maxp5gha",
         &VAR_5->maxpwr_5gh, 0, VAR_2);
  FUNC_2(VAR_1, VAR_3, "maxp5gla",
         &VAR_5->maxpwr_5gl, 0, VAR_2);
  FUNC_1(VAR_1, VAR_3, "pa5gw0a",
          &VAR_5->pa_5g[0], 0, VAR_2);
  FUNC_1(VAR_1, VAR_3, "pa5gw1a",
          &VAR_5->pa_5g[1], 0, VAR_2);
  FUNC_1(VAR_1, VAR_3, "pa5gw2a",
          &VAR_5->pa_5g[2], 0, VAR_2);
  FUNC_1(VAR_1, VAR_3, "pa5glw0a",
          &VAR_5->pa_5gl[0], 0, VAR_2);
  FUNC_1(VAR_1, VAR_3, "pa5glw1a",
          &VAR_5->pa_5gl[1], 0, VAR_2);
  FUNC_1(VAR_1, VAR_3, "pa5glw2a",
          &VAR_5->pa_5gl[2], 0, VAR_2);
  FUNC_1(VAR_1, VAR_3, "pa5ghw0a",
          &VAR_5->pa_5gh[0], 0, VAR_2);
  FUNC_1(VAR_1, VAR_3, "pa5ghw1a",
          &VAR_5->pa_5gh[1], 0, VAR_2);
  FUNC_1(VAR_1, VAR_3, "pa5ghw2a",
          &VAR_5->pa_5gh[2], 0, VAR_2);
 }
}
