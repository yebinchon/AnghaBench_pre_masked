
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdp4_kms {int dummy; } ;
struct csc_cfg {int * post_clamp; int * pre_clamp; int * post_bias; int * pre_bias; int * matrix; } ;
typedef enum mdp4_pipe { ____Placeholder_mdp4_pipe } mdp4_pipe ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (struct mdp4_kms*,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct mdp4_kms *VAR_0,
  enum mdp4_pipe VAR_1, struct csc_cfg *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2->matrix); VAR_3++) {
  FUNC_6(VAR_0, FUNC_1(VAR_1, VAR_3),
    VAR_2->matrix[VAR_3]);
 }

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2->post_bias) ; VAR_3++) {
  FUNC_6(VAR_0, FUNC_4(VAR_1, VAR_3),
    VAR_2->pre_bias[VAR_3]);

  FUNC_6(VAR_0, FUNC_2(VAR_1, VAR_3),
    VAR_2->post_bias[VAR_3]);
 }

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2->post_clamp) ; VAR_3++) {
  FUNC_6(VAR_0, FUNC_5(VAR_1, VAR_3),
    VAR_2->pre_clamp[VAR_3]);

  FUNC_6(VAR_0, FUNC_3(VAR_1, VAR_3),
    VAR_2->post_clamp[VAR_3]);
 }
}
