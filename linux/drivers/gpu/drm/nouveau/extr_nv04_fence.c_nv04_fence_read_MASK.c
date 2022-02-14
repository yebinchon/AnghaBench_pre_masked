
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nv04_nvsw_get_ref_v0 {int ref; } ;
struct nouveau_channel {int nvsw; } ;
typedef int args ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,struct nv04_nvsw_get_ref_v0*,int) ;

__attribute__((used)) static u32
FUNC_2(struct nouveau_channel *VAR_1)
{
 struct nv04_nvsw_get_ref_v0 VAR_2 = {};
 FUNC_0(FUNC_1(&VAR_1->nvsw, VAR_0,
     &VAR_2, sizeof(VAR_2)));
 return VAR_2.ref;
}
