
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int hmm_par_t ;
struct TYPE_3__ {int L; char* seq; } ;
typedef TYPE_1__ hmm_data_t ;


 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,char const*,int) ;

hmm_data_t *FUNC_3(int VAR_0, const char *VAR_1, const hmm_par_t *VAR_2)
{
 hmm_data_t *VAR_3;
 VAR_3 = (hmm_data_t*)FUNC_0(1, sizeof(hmm_data_t));
 VAR_3->L = VAR_0;
 VAR_3->seq = (char*)FUNC_1(VAR_0 + 1);
 FUNC_2(VAR_3->seq + 1, VAR_1, VAR_0);
 return VAR_3;
}
