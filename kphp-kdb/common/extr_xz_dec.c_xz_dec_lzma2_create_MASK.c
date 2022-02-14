
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int mode; scalar_t__ allocated; int * buf; int size_max; } ;
struct xz_dec_lzma2 {TYPE_1__ dict; } ;
typedef enum xz_mode { ____Placeholder_xz_mode } xz_mode ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 struct xz_dec_lzma2* FUNC_2 (int,int) ;
 int FUNC_3 (struct xz_dec_lzma2*) ;
 int * FUNC_4 (int ) ;

struct xz_dec_lzma2 *FUNC_5(enum xz_mode VAR_0,
         uint32_t VAR_1)
{
 struct xz_dec_lzma2 *VAR_2 = FUNC_2(sizeof(*VAR_2), 1);
 if (VAR_2 == ((void*)0))
  return ((void*)0);

 VAR_2->dict.mode = VAR_0;
 VAR_2->dict.size_max = VAR_1;

 if (FUNC_1(VAR_0)) {
  VAR_2->dict.buf = FUNC_4(VAR_1);
  if (VAR_2->dict.buf == ((void*)0)) {
   FUNC_3(VAR_2);
   return ((void*)0);
  }
 } else if (FUNC_0(VAR_0)) {
  VAR_2->dict.buf = ((void*)0);
  VAR_2->dict.allocated = 0;
 }

 return VAR_2;
}
