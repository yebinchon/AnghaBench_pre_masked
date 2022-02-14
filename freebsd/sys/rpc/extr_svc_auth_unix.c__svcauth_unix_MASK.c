
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint32_t ;
typedef size_t u_int ;
struct xucred {size_t cr_ngroups; void** cr_groups; void* cr_uid; } ;
struct svc_req {int rq_verf; struct xucred* rq_clntcred; } ;
struct TYPE_3__ {int oa_base; scalar_t__ oa_length; } ;
struct TYPE_4__ {TYPE_1__ cb_cred; } ;
struct rpc_msg {TYPE_2__ rm_call; } ;
typedef int int32_t ;
typedef enum auth_stat { ____Placeholder_auth_stat } auth_stat ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int *) ;
 void* FUNC_1 (int *) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t FUNC_2 (size_t) ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,size_t) ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (char*,long,long,size_t) ;
 int FUNC_6 (int *,void**,struct xucred*) ;
 int FUNC_7 (int *,int ,size_t,int ) ;

enum auth_stat
FUNC_8(struct svc_req *VAR_8, struct rpc_msg *VAR_9)
{
 enum auth_stat VAR_10;
 XDR VAR_11;
 int32_t *VAR_12;
 uint32_t VAR_13;
 struct xucred *VAR_14;
 u_int VAR_15;
 size_t VAR_16, VAR_17;
 u_int VAR_18;

 VAR_14 = VAR_8->rq_clntcred;
 VAR_15 = (u_int)VAR_9->rm_call.cb_cred.oa_length;
 FUNC_7(&VAR_11, VAR_9->rm_call.cb_cred.oa_base, VAR_15,
     VAR_5);
 VAR_12 = FUNC_4(&VAR_11, VAR_15);
 if (VAR_12 != ((void*)0)) {
  VAR_13 = FUNC_1(VAR_12);
  VAR_16 = (size_t)FUNC_1(VAR_12);
  if (VAR_16 > VAR_3) {
   VAR_10 = VAR_0;
   goto done;
  }
  VAR_16 = FUNC_2(VAR_16);
  VAR_12 += VAR_16 / sizeof (int32_t);
  VAR_14->cr_uid = FUNC_1(VAR_12);
  VAR_14->cr_groups[0] = FUNC_1(VAR_12);
  VAR_17 = (size_t)FUNC_1(VAR_12);
  if (VAR_17 > VAR_4) {
   VAR_10 = VAR_0;
   goto done;
  }
  for (VAR_18 = 0; VAR_18 < VAR_17; VAR_18++) {
   if (VAR_18 + 1 < VAR_6)
    VAR_14->cr_groups[VAR_18 + 1] = FUNC_0(VAR_12);
   else
    VAR_12++;
  }
  if (VAR_17 + 1 > VAR_6)
   VAR_14->cr_ngroups = VAR_6;
  else
   VAR_14->cr_ngroups = VAR_17 + 1;





  if ((5 + VAR_17) * VAR_2 + VAR_16 > VAR_15) {
   (void) FUNC_5("bad auth_len gid %ld str %ld auth %u\n",
       (long)VAR_17, (long)VAR_16, VAR_15);
   VAR_10 = VAR_0;
   goto done;
  }
 } else if (! FUNC_6(&VAR_11, &VAR_13, VAR_14)) {
  VAR_10 = VAR_0;
  goto done;
 }

 VAR_8->rq_verf = VAR_7;
 VAR_10 = VAR_1;
done:
 FUNC_3(&VAR_11);

 return (VAR_10);
}
