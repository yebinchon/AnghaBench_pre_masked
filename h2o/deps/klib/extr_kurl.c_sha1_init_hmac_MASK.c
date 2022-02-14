
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int* keyBuffer; } ;
typedef TYPE_1__ sha1nfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,int const*,int) ;
 int FUNC_1 (int*,int ,int) ;
 int const* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int) ;

void FUNC_5(sha1nfo *VAR_3, const uint8_t* VAR_4, int VAR_5)
{
 uint8_t VAR_6;
 FUNC_1(VAR_3->keyBuffer, 0, VAR_0);
 if (VAR_5 > VAR_0) {
  FUNC_3(VAR_3);
  while (VAR_5--) FUNC_4(VAR_3, *VAR_4++);
  FUNC_0(VAR_3->keyBuffer, FUNC_2(VAR_3), VAR_1);
 } else FUNC_0(VAR_3->keyBuffer, VAR_4, VAR_5);
 FUNC_3(VAR_3);
 for (VAR_6 = 0; VAR_6 < VAR_0; ++VAR_6)
  FUNC_4(VAR_3, VAR_3->keyBuffer[VAR_6] ^ VAR_2);
}
