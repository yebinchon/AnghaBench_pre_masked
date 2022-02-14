
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int u_int32_t ;
struct svc_rpc_gss_client {scalar_t__ cl_seqlast; int* cl_seqmask; int cl_lock; } ;
typedef int bool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool_t
FUNC_2(struct svc_rpc_gss_client *VAR_3, uint32_t VAR_4)
{
 u_int32_t VAR_5;
 int VAR_6, VAR_7;
 bool_t VAR_8;

 FUNC_0(&VAR_3->cl_lock);
 if (VAR_4 <= VAR_3->cl_seqlast) {







  VAR_5 = VAR_3->cl_seqlast - VAR_4;
  if (VAR_5 >= VAR_1) {
   VAR_8 = VAR_0;
   goto out;
  }
  VAR_6 = VAR_5 / 32;
  VAR_7 = VAR_5 % 32;
  if (VAR_3->cl_seqmask[VAR_6] & (1 << VAR_7)) {
   VAR_8 = VAR_0;
   goto out;
  }
 }

 VAR_8 = VAR_2;
out:
 FUNC_1(&VAR_3->cl_lock);
 return (VAR_8);
}
