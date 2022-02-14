
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pdc_state {int pdc_idx; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (char*,int,scalar_t__,struct pdc_state*,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 () ;
 int VAR_2 ;
 int FUNC_3 (char*,int,char*,int) ;

__attribute__((used)) static void FUNC_4(struct pdc_state *VAR_3)
{
 char VAR_4[16];

 if (!FUNC_2())
  return;

 FUNC_3(VAR_4, 16, "pdc%d_stats", VAR_3->pdc_idx);
 if (!VAR_1)
  VAR_1 = FUNC_0(VAR_0, ((void*)0));


 FUNC_1(VAR_4, 0400, VAR_1, VAR_3,
       &VAR_2);
}
