
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int member_0; } ;
struct streebog_uint512 {int * qword; TYPE_1__ member_0; } ;
struct streebog_state {int fillsize; int h; int hash; struct streebog_uint512 Sigma; struct streebog_uint512 N; struct streebog_uint512 m; } ;


 struct streebog_uint512 VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (struct streebog_uint512*,struct streebog_uint512*,struct streebog_uint512*) ;
 int FUNC_3 (int *,struct streebog_uint512*,struct streebog_uint512*) ;
 int FUNC_4 (struct streebog_state*) ;

__attribute__((used)) static void FUNC_5(struct streebog_state *VAR_1)
{
 struct streebog_uint512 VAR_2 = { 0 };

 VAR_2.qword[0] = FUNC_0(VAR_1->fillsize << 3);
 FUNC_4(VAR_1);

 FUNC_3(&VAR_1->h, &VAR_1->N, &VAR_1->m);
 FUNC_2(&VAR_1->N, &VAR_2, &VAR_1->N);
 FUNC_2(&VAR_1->Sigma, &VAR_1->m, &VAR_1->Sigma);
 FUNC_3(&VAR_1->h, &VAR_0, &VAR_1->N);
 FUNC_3(&VAR_1->h, &VAR_0, &VAR_1->Sigma);
 FUNC_1(&VAR_1->hash, &VAR_1->h, sizeof(struct streebog_uint512));
}
