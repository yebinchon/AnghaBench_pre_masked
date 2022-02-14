
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdp5_smp {int blk_cnt; int * alloc_r; int * alloc_w; } ;
struct mdp5_kms {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 struct mdp5_kms* FUNC_2 (struct mdp5_smp*) ;
 int FUNC_3 (struct mdp5_kms*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct mdp5_smp *VAR_0)
{
 struct mdp5_kms *VAR_1 = FUNC_2(VAR_0);
 int VAR_2, VAR_3;

 VAR_3 = VAR_0->blk_cnt / 3 + 1;

 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
  FUNC_3(VAR_1, FUNC_1(VAR_2),
      VAR_0->alloc_w[VAR_2]);
  FUNC_3(VAR_1, FUNC_0(VAR_2),
      VAR_0->alloc_r[VAR_2]);
 }
}
