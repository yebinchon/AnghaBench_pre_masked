
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {size_t len; int* base; int member_0; } ;
typedef TYPE_3__ ptls_iovec_t ;
struct TYPE_8__ {int* base; size_t len; } ;
struct TYPE_7__ {int member_0; } ;
struct TYPE_10__ {TYPE_2__ vec; TYPE_1__ member_0; } ;
typedef TYPE_4__ ptls_asn1_pkcs8_private_key_t ;


 int FUNC_0 (int*) ;
 int FUNC_1 (char const*,char*,TYPE_3__*,int,size_t*) ;
 size_t FUNC_2 (TYPE_4__*,int*,int *) ;

int FUNC_3(char const * VAR_0)
{
 ptls_iovec_t VAR_1 = { 0 };
 size_t VAR_2 = 1;
 size_t VAR_3 = 0;
 uint8_t VAR_4 = 0;
 uint8_t VAR_5 = 0xAA;
 size_t VAR_6 = 0;
 int VAR_7;

 int VAR_8 = FUNC_1(VAR_0, "PRIVATE KEY", &VAR_1, 1, &VAR_2);


 if (VAR_8 == 0)
 {
  for (VAR_3 = 0; VAR_8 == 0 && VAR_3 < VAR_1.len; VAR_3++)
  {
   ptls_asn1_pkcs8_private_key_t VAR_9 = { {0} };
   VAR_4 = VAR_1.base[VAR_3];
   VAR_7 = 0;
   VAR_1.base[VAR_3] ^= VAR_5;

   VAR_9.vec.base = VAR_1.base;
   VAR_9.vec.len = VAR_1.len;

   VAR_6 = FUNC_2(
    &VAR_9, &VAR_7, ((void*)0));

   if (VAR_7 != 0)
   {
    if (VAR_7 == 1)
    {
     VAR_8 = -1;
    }
   }

   VAR_1.base[VAR_3] = VAR_4;
  }
 }

 if (VAR_1.base != ((void*)0))
 {
  FUNC_0(VAR_1.base);
 }

 return VAR_8;
}
