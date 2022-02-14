
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct svc_rpc_gss_client {scalar_t__ cl_seqlast; int* cl_seqmask; int cl_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct svc_rpc_gss_client *VAR_1, uint32_t VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6;
 uint32_t VAR_7, VAR_8;

 FUNC_0(&VAR_1->cl_lock);
 if (VAR_2 > VAR_1->cl_seqlast) {







  VAR_3 = VAR_2 - VAR_1->cl_seqlast;
  while (VAR_3 > 32) {
   for (VAR_4 = (VAR_0 / 32) - 1;
        VAR_4 > 0; VAR_4--) {
    VAR_1->cl_seqmask[VAR_4] = VAR_1->cl_seqmask[VAR_4-1];
   }
   VAR_1->cl_seqmask[0] = 0;
   VAR_3 -= 32;
  }
  VAR_7 = 0;
  for (VAR_4 = 0; VAR_4 < VAR_0 / 32; VAR_4++) {
   VAR_8 = VAR_1->cl_seqmask[VAR_4] >> (32 - VAR_3);
   VAR_1->cl_seqmask[VAR_4] =
    (VAR_1->cl_seqmask[VAR_4] << VAR_3) | VAR_7;
   VAR_7 = VAR_8;
  }
  VAR_1->cl_seqmask[0] |= 1;
  VAR_1->cl_seqlast = VAR_2;
 } else {
  VAR_3 = VAR_1->cl_seqlast - VAR_2;
  VAR_5 = VAR_3 / 32;
  VAR_6 = VAR_3 % 32;
  VAR_1->cl_seqmask[VAR_5] |= (1 << VAR_6);
 }
 FUNC_1(&VAR_1->cl_lock);
}
