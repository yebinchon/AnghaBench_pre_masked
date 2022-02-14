
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct xz_dec {int mode; int * lzma2; } ;
typedef enum xz_mode { ____Placeholder_xz_mode } xz_mode ;


 struct xz_dec* FUNC_0 (int,int) ;
 int FUNC_1 (struct xz_dec*) ;
 int * FUNC_2 (int,int ) ;
 int FUNC_3 (struct xz_dec*) ;

struct xz_dec *FUNC_4(enum xz_mode VAR_0, uint32_t VAR_1)
{
 struct xz_dec *VAR_2 = FUNC_0(sizeof(*VAR_2), 1);
 if (VAR_2 == ((void*)0))
  return ((void*)0);

 VAR_2->mode = VAR_0;

 VAR_2->lzma2 = FUNC_2(VAR_0, VAR_1);
 if (VAR_2->lzma2 == ((void*)0))
  goto error_lzma2;

 FUNC_3(VAR_2);
 return VAR_2;

error_lzma2:
 FUNC_1(VAR_2);
 return ((void*)0);
}
