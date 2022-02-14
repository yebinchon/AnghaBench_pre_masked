
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shash_desc {int tfm; } ;
struct sha3_state {int rsiz; int rsizw; int st; scalar_t__ partial; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 struct sha3_state* FUNC_2 (struct shash_desc*) ;

int FUNC_3(struct shash_desc *VAR_0)
{
 struct sha3_state *VAR_1 = FUNC_2(VAR_0);
 unsigned int VAR_2 = FUNC_0(VAR_0->tfm);

 VAR_1->rsiz = 200 - 2 * VAR_2;
 VAR_1->rsizw = VAR_1->rsiz / 8;
 VAR_1->partial = 0;

 FUNC_1(VAR_1->st, 0, sizeof(VAR_1->st));
 return 0;
}
