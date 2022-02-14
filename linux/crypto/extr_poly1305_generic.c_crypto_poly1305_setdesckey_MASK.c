
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct poly1305_desc_ctx {int sset; int rset; void** s; int r; } ;


 unsigned int VAR_0 ;
 void* FUNC_0 (int const*) ;
 int FUNC_1 (int *,int const*) ;

unsigned int FUNC_2(struct poly1305_desc_ctx *VAR_1,
     const u8 *VAR_2, unsigned int VAR_3)
{
 if (!VAR_1->sset) {
  if (!VAR_1->rset && VAR_3 >= VAR_0) {
   FUNC_1(&VAR_1->r, VAR_2);
   VAR_2 += VAR_0;
   VAR_3 -= VAR_0;
   VAR_1->rset = 1;
  }
  if (VAR_3 >= VAR_0) {
   VAR_1->s[0] = FUNC_0(VAR_2 + 0);
   VAR_1->s[1] = FUNC_0(VAR_2 + 4);
   VAR_1->s[2] = FUNC_0(VAR_2 + 8);
   VAR_1->s[3] = FUNC_0(VAR_2 + 12);
   VAR_2 += VAR_0;
   VAR_3 -= VAR_0;
   VAR_1->sset = 1;
  }
 }
 return VAR_3;
}
