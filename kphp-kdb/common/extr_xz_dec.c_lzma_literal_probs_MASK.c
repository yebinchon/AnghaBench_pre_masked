
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_3__ {int lc; int literal_pos_mask; int ** literal; } ;
struct TYPE_4__ {int pos; } ;
struct xz_dec_lzma2 {TYPE_1__ lzma; TYPE_2__ dict; } ;


 int FUNC_0 (TYPE_2__*,int ) ;

__attribute__((used)) static uint16_t *FUNC_1(struct xz_dec_lzma2 *VAR_0)
{
 uint32_t VAR_1 = FUNC_0(&VAR_0->dict, 0);
 uint32_t VAR_2 = VAR_1 >> (8 - VAR_0->lzma.lc);
 uint32_t VAR_3 = (VAR_0->dict.pos & VAR_0->lzma.literal_pos_mask) << VAR_0->lzma.lc;
 return VAR_0->lzma.literal[VAR_2 + VAR_3];
}
