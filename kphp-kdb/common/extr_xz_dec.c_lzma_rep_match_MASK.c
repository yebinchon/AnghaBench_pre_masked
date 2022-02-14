
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_2__ {size_t state; int len; size_t rep1; size_t rep2; size_t rep3; size_t rep0; int rep_len_dec; int * is_rep2; int * is_rep1; int ** is_rep0_long; int * is_rep0; } ;
struct xz_dec_lzma2 {TYPE_1__ lzma; int rc; } ;


 int FUNC_0 (struct xz_dec_lzma2*,int *,size_t) ;
 int FUNC_1 (size_t*) ;
 int FUNC_2 (size_t*) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void FUNC_4(struct xz_dec_lzma2 *VAR_0, uint32_t VAR_1)
{
 uint32_t VAR_2;

 if (!FUNC_3(&VAR_0->rc, &VAR_0->lzma.is_rep0[VAR_0->lzma.state])) {
  if (!FUNC_3(&VAR_0->rc, &VAR_0->lzma.is_rep0_long[
    VAR_0->lzma.state][VAR_1])) {
   FUNC_2(&VAR_0->lzma.state);
   VAR_0->lzma.len = 1;
   return;
  }
 } else {
  if (!FUNC_3(&VAR_0->rc, &VAR_0->lzma.is_rep1[VAR_0->lzma.state])) {
   VAR_2 = VAR_0->lzma.rep1;
  } else {
   if (!FUNC_3(&VAR_0->rc, &VAR_0->lzma.is_rep2[VAR_0->lzma.state])) {
    VAR_2 = VAR_0->lzma.rep2;
   } else {
    VAR_2 = VAR_0->lzma.rep3;
    VAR_0->lzma.rep3 = VAR_0->lzma.rep2;
   }

   VAR_0->lzma.rep2 = VAR_0->lzma.rep1;
  }

  VAR_0->lzma.rep1 = VAR_0->lzma.rep0;
  VAR_0->lzma.rep0 = VAR_2;
 }

 FUNC_1(&VAR_0->lzma.state);
 FUNC_0(VAR_0, &VAR_0->lzma.rep_len_dec, VAR_1);
}
