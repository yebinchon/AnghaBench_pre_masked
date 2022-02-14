
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int byte ;
struct TYPE_2__ {int totalN; } ;


 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (int*,int*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_4 (int*) ;

__attribute__((used)) static void FUNC_5(byte *VAR_1, int VAR_2)
{
 byte VAR_3[128];
 uint32_t VAR_4[16];
 uint32_t VAR_5;

 VAR_0->totalN += VAR_2;

 VAR_5 = VAR_0->totalN * 8;

 FUNC_1(VAR_3, 0, 128);
 if (VAR_2) FUNC_0(VAR_3, VAR_1, VAR_2);
 VAR_3[VAR_2] = 0x80;

 if (VAR_2 <= 55) {
  FUNC_2(VAR_3+56, VAR_5);
  FUNC_3(VAR_4, VAR_3);
  FUNC_4(VAR_4);
 } else {
  FUNC_2(VAR_3+120, VAR_5);
  FUNC_3(VAR_4, VAR_3);
  FUNC_4(VAR_4);
  FUNC_3(VAR_4, VAR_3+64);
  FUNC_4(VAR_4);
 }
}
