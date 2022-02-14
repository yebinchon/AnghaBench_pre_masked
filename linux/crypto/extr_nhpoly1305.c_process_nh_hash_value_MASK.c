
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nhpoly1305_state {int nh_hash; int poly_state; } ;
struct nhpoly1305_key {int poly_key; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,int ,int) ;

__attribute__((used)) static void FUNC_2(struct nhpoly1305_state *VAR_2,
      const struct nhpoly1305_key *VAR_3)
{
 FUNC_0(VAR_0 % VAR_1 != 0);

 FUNC_1(&VAR_2->poly_state, &VAR_3->poly_key, VAR_2->nh_hash,
        VAR_0 / VAR_1);
}
