
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int hashsz; } ;
typedef TYPE_1__ cf_chash ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*,int,int*,int,int*,TYPE_1__ const*) ;
 scalar_t__ FUNC_2 (int*,void const*,int ) ;
 int FUNC_3 (int*,char*,int) ;
 int FUNC_4 (int*,int,int) ;

__attribute__((used)) static inline void FUNC_5(const cf_chash *VAR_1,
                             const void *VAR_2,
                             const void *VAR_3,
                             const void *VAR_4,
                             const void *VAR_5)
{
  uint8_t VAR_6[VAR_0];
  uint8_t VAR_7[25], VAR_8[50];




  FUNC_4(VAR_7, 0x0b, 20);
  FUNC_3(VAR_8, "Hi There", 8);
  FUNC_1(VAR_7, 20, VAR_8, 8, VAR_6, VAR_1);

  FUNC_0(FUNC_2(VAR_6, VAR_2, VAR_1->hashsz) == 0);




  FUNC_3(VAR_7, "Jefe", 4);
  FUNC_3(VAR_8, "what do ya want for nothing?", 28);
  FUNC_1(VAR_7, 4, VAR_8, 28, VAR_6, VAR_1);
  FUNC_0(FUNC_2(VAR_6, VAR_3, VAR_1->hashsz) == 0);




  FUNC_4(VAR_7, 0xaa, 20);
  FUNC_4(VAR_8, 0xdd, 50);
  FUNC_1(VAR_7, 20, VAR_8, 50, VAR_6, VAR_1);
  FUNC_0(FUNC_2(VAR_6, VAR_4, VAR_1->hashsz) == 0);




  for (uint8_t VAR_9 = 1; VAR_9 < 26; VAR_9++)
    VAR_7[VAR_9 - 1] = VAR_9;
  FUNC_4(VAR_8, 0xcd, 50);
  FUNC_1(VAR_7, 25, VAR_8, 50, VAR_6, VAR_1);
  FUNC_0(FUNC_2(VAR_6, VAR_5, VAR_1->hashsz) == 0);
}
