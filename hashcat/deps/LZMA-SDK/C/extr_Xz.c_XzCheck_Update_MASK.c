
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mode; int sha; int crc64; int crc; } ;
typedef TYPE_1__ CXzCheck ;
typedef int Byte ;


 int FUNC_0 (int ,void const*,size_t) ;
 int FUNC_1 (int ,void const*,size_t) ;
 int FUNC_2 (int *,int const*,size_t) ;




void FUNC_3(CXzCheck *VAR_0, const void *VAR_1, size_t VAR_2)
{
  switch (VAR_0->mode)
  {
    case 130: VAR_0->crc = FUNC_1(VAR_0->crc, VAR_1, VAR_2); break;
    case 129: VAR_0->crc64 = FUNC_0(VAR_0->crc64, VAR_1, VAR_2); break;
    case 128: FUNC_2(&VAR_0->sha, (const Byte *)VAR_1, VAR_2); break;
  }
}
