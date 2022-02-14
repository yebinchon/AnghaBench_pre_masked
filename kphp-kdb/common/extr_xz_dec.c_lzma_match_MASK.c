
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_2__ {int rep3; int rep2; int rep1; int rep0; int dist_special; int * dist_align; int len; int ** dist_slot; int match_len_dec; int state; } ;
struct xz_dec_lzma2 {TYPE_1__ lzma; int rc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (struct xz_dec_lzma2*,int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int *,int*,int) ;
 int FUNC_5 (int *,int*,int) ;

__attribute__((used)) static void FUNC_6(struct xz_dec_lzma2 *VAR_4, uint32_t VAR_5)
{
 uint16_t *VAR_6;
 uint32_t VAR_7;
 uint32_t VAR_8;

 FUNC_2(&VAR_4->lzma.state);

 VAR_4->lzma.rep3 = VAR_4->lzma.rep2;
 VAR_4->lzma.rep2 = VAR_4->lzma.rep1;
 VAR_4->lzma.rep1 = VAR_4->lzma.rep0;

 FUNC_1(VAR_4, &VAR_4->lzma.match_len_dec, VAR_5);

 VAR_6 = VAR_4->lzma.dist_slot[FUNC_0(VAR_4->lzma.len)];
 VAR_7 = FUNC_3(&VAR_4->rc, VAR_6, VAR_3) - VAR_3;

 if (VAR_7 < VAR_2) {
  VAR_4->lzma.rep0 = VAR_7;
 } else {
  VAR_8 = (VAR_7 >> 1) - 1;
  VAR_4->lzma.rep0 = 2 + (VAR_7 & 1);

  if (VAR_7 < VAR_1) {
   VAR_4->lzma.rep0 <<= VAR_8;
   VAR_6 = VAR_4->lzma.dist_special + VAR_4->lzma.rep0
     - VAR_7 - 1;
   FUNC_4(&VAR_4->rc, VAR_6,
     &VAR_4->lzma.rep0, VAR_8);
  } else {
   FUNC_5(&VAR_4->rc, &VAR_4->lzma.rep0, VAR_8 - VAR_0);
   VAR_4->lzma.rep0 <<= VAR_0;
   FUNC_4(&VAR_4->rc, VAR_4->lzma.dist_align,
     &VAR_4->lzma.rep0, VAR_0);
  }
 }
}
