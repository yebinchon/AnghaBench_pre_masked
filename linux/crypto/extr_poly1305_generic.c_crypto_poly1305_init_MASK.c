
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shash_desc {int dummy; } ;
struct poly1305_desc_ctx {int rset; int sset; scalar_t__ buflen; int h; } ;


 int FUNC_0 (int *) ;
 struct poly1305_desc_ctx* FUNC_1 (struct shash_desc*) ;

int FUNC_2(struct shash_desc *VAR_0)
{
 struct poly1305_desc_ctx *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->h);
 VAR_1->buflen = 0;
 VAR_1->rset = 0;
 VAR_1->sset = 0;

 return 0;
}
