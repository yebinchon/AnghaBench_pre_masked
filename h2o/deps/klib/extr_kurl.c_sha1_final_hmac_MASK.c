
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_6__ {int* innerHash; int* keyBuffer; } ;
typedef TYPE_1__ sha1nfo ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,size_t const*,size_t) ;
 size_t const* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;

const uint8_t *FUNC_4(sha1nfo *VAR_3)
{
 uint8_t VAR_4;
 FUNC_0(VAR_3->innerHash, FUNC_1(VAR_3), VAR_1);
 FUNC_2(VAR_3);
 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) FUNC_3(VAR_3, VAR_3->keyBuffer[VAR_4] ^ VAR_2);
 for (VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4) FUNC_3(VAR_3, VAR_3->innerHash[VAR_4]);
 return FUNC_1(VAR_3);
}
