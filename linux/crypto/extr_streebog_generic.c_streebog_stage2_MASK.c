
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct streebog_uint512 {int dummy; } ;
struct streebog_state {int Sigma; int N; int h; } ;
typedef int m ;


 struct streebog_uint512 VAR_0 ;
 int FUNC_0 (struct streebog_uint512*,int const*,int) ;
 int FUNC_1 (int *,struct streebog_uint512*,int *) ;
 int FUNC_2 (int *,int *,struct streebog_uint512*) ;

__attribute__((used)) static void FUNC_3(struct streebog_state *VAR_1, const u8 *VAR_2)
{
 struct streebog_uint512 VAR_3;

 FUNC_0(&VAR_3, VAR_2, sizeof(VAR_3));

 FUNC_2(&VAR_1->h, &VAR_1->N, &VAR_3);

 FUNC_1(&VAR_1->N, &VAR_0, &VAR_1->N);
 FUNC_1(&VAR_1->Sigma, &VAR_3, &VAR_1->Sigma);
}
