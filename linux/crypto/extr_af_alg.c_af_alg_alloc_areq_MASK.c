
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct af_alg_async_req {unsigned int areqlen; scalar_t__ tsgl_entries; int * tsgl; int rsgl_list; int * last_rsgl; struct sock* sk; } ;


 int VAR_0 ;
 struct af_alg_async_req* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 struct af_alg_async_req* FUNC_2 (struct sock*,unsigned int,int ) ;
 scalar_t__ FUNC_3 (int) ;

struct af_alg_async_req *FUNC_4(struct sock *VAR_2,
        unsigned int VAR_3)
{
 struct af_alg_async_req *VAR_4 = FUNC_2(VAR_2, VAR_3, VAR_1);

 if (FUNC_3(!VAR_4))
  return FUNC_0(-VAR_0);

 VAR_4->areqlen = VAR_3;
 VAR_4->sk = VAR_2;
 VAR_4->last_rsgl = ((void*)0);
 FUNC_1(&VAR_4->rsgl_list);
 VAR_4->tsgl = ((void*)0);
 VAR_4->tsgl_entries = 0;

 return VAR_4;
}
