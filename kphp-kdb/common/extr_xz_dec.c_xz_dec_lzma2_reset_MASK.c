
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {scalar_t__ size; } ;
struct TYPE_7__ {int need_dict_reset; int sequence; } ;
struct TYPE_6__ {scalar_t__ len; } ;
struct TYPE_5__ {int size; int size_max; int end; int allocated; int * buf; int mode; } ;
struct xz_dec_lzma2 {TYPE_4__ temp; TYPE_3__ lzma2; TYPE_2__ lzma; TYPE_1__ dict; } ;
typedef enum xz_ret { ____Placeholder_xz_ret } xz_ret ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int) ;

enum xz_ret FUNC_4(struct xz_dec_lzma2 *VAR_5, uint8_t VAR_6)
{

 if (VAR_6 > 39)
  return VAR_4;

 VAR_5->dict.size = 2 + (VAR_6 & 1);
 VAR_5->dict.size <<= (VAR_6 >> 1) + 11;

 if (FUNC_1(VAR_5->dict.mode)) {
  if (VAR_5->dict.size > VAR_5->dict.size_max)
   return VAR_1;

  VAR_5->dict.end = VAR_5->dict.size;

  if (FUNC_0(VAR_5->dict.mode)) {
   if (VAR_5->dict.allocated < VAR_5->dict.size) {
    FUNC_2(VAR_5->dict.buf);
    VAR_5->dict.buf = FUNC_3(VAR_5->dict.size);
    if (VAR_5->dict.buf == ((void*)0)) {
     VAR_5->dict.allocated = 0;
     return VAR_2;
    }
   }
  }
 }

 VAR_5->lzma.len = 0;

 VAR_5->lzma2.sequence = VAR_0;
 VAR_5->lzma2.need_dict_reset = 1;

 VAR_5->temp.size = 0;

 return VAR_3;
}
