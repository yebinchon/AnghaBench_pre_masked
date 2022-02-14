
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct uma_hash {int uh_hashsize; int uh_hashmask; struct slabhead* uh_slab_hash; } ;
struct slabhead {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct slabhead*,size_t) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (size_t,int ,int ) ;
 int FUNC_3 (int) ;
 struct slabhead* FUNC_4 (int ,int *,int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct uma_hash *VAR_6, u_int VAR_7)
{
 size_t VAR_8;

 FUNC_0(FUNC_3(VAR_7), ("hash size must be power of 2"));
 if (VAR_7 > VAR_4) {
  VAR_6->uh_hashsize = VAR_7;
  VAR_8 = sizeof(VAR_6->uh_slab_hash[0]) * VAR_6->uh_hashsize;
  VAR_6->uh_slab_hash = (struct slabhead *)FUNC_2(VAR_8,
      VAR_1, VAR_0);
 } else {
  VAR_8 = sizeof(VAR_6->uh_slab_hash[0]) * VAR_4;
  VAR_6->uh_slab_hash = FUNC_4(VAR_5, ((void*)0),
      VAR_3, VAR_2);
  VAR_6->uh_hashsize = VAR_4;
 }
 if (VAR_6->uh_slab_hash) {
  FUNC_1(VAR_6->uh_slab_hash, VAR_8);
  VAR_6->uh_hashmask = VAR_6->uh_hashsize - 1;
  return (1);
 }

 return (0);
}
