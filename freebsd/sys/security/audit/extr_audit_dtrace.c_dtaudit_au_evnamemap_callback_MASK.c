
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evname_elem {scalar_t__ ene_commit_probe_id; scalar_t__ ene_bsm_probe_id; int * ene_name; } ;
typedef int ene_name_lower ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int ,int ,char*,int ,int ,struct evname_elem*) ;
 scalar_t__ FUNC_1 (int ,int ,char*,int ) ;
 char FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct evname_elem *VAR_5)
{
 char VAR_6[VAR_0];
 int VAR_7;
 for (VAR_7 = 0; VAR_7 < sizeof(VAR_6); VAR_7++)
  VAR_6[VAR_7] = FUNC_2(VAR_5->ene_name[VAR_7]);
 if ((VAR_5->ene_commit_probe_id == 0) &&
     (FUNC_1(VAR_1, VAR_2,
     VAR_6, VAR_4) == 0)) {
  VAR_5->ene_commit_probe_id = FUNC_0(VAR_1,
      VAR_2, VAR_6,
      VAR_4, 0, VAR_5);
 }
 if ((VAR_5->ene_bsm_probe_id == 0) &&
     (FUNC_1(VAR_1, VAR_2,
     VAR_6, VAR_3) == 0)) {
  VAR_5->ene_bsm_probe_id = FUNC_0(VAR_1,
      VAR_2, VAR_6, VAR_3,
      0, VAR_5);
 }
}
