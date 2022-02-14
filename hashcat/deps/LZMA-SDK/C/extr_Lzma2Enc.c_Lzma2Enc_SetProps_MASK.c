
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ lc; scalar_t__ lp; } ;
struct TYPE_8__ {TYPE_1__ lzmaProps; } ;
struct TYPE_9__ {TYPE_2__ props; } ;
typedef int SRes ;
typedef TYPE_1__ CLzmaEncProps ;
typedef TYPE_2__ CLzma2EncProps ;
typedef scalar_t__ CLzma2EncHandle ;
typedef TYPE_3__ CLzma2Enc ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;

SRes FUNC_2(CLzma2EncHandle VAR_3, const CLzma2EncProps *VAR_4)
{
  CLzma2Enc *VAR_5 = (CLzma2Enc *)VAR_3;
  CLzmaEncProps VAR_6 = VAR_4->lzmaProps;
  FUNC_1(&VAR_6);
  if (VAR_6.lc + VAR_6.lp > VAR_0)
    return VAR_1;
  VAR_5->props = *VAR_4;
  FUNC_0(&VAR_5->props);
  return VAR_2;
}
