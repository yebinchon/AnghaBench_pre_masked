
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shash_desc {int dummy; } ;
struct nhpoly1305_state {scalar_t__ nh_remaining; scalar_t__ buflen; int poly_state; } ;


 int FUNC_0 (int *) ;
 struct nhpoly1305_state* FUNC_1 (struct shash_desc*) ;

int FUNC_2(struct shash_desc *VAR_0)
{
 struct nhpoly1305_state *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->poly_state);
 VAR_1->buflen = 0;
 VAR_1->nh_remaining = 0;
 return 0;
}
