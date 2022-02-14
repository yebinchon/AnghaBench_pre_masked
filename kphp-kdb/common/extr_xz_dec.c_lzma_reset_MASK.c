
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {int** is_match; scalar_t__ rep3; scalar_t__ rep2; scalar_t__ rep1; scalar_t__ rep0; int state; } ;
struct xz_dec_lzma2 {int rc; TYPE_1__ lzma; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct xz_dec_lzma2 *VAR_3)
{
 uint16_t *VAR_4;
 size_t VAR_5;

 VAR_3->lzma.state = VAR_2;
 VAR_3->lzma.rep0 = 0;
 VAR_3->lzma.rep1 = 0;
 VAR_3->lzma.rep2 = 0;
 VAR_3->lzma.rep3 = 0;
 VAR_4 = VAR_3->lzma.is_match[0];
 for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5)
  VAR_4[VAR_5] = VAR_1 / 2;

 FUNC_0(&VAR_3->rc);
}
