
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int* flags; int level; int family; int model; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int* VAR_3 ;
 int FUNC_0 (int,int*,int*,int*,int*) ;
 int FUNC_1 (int,int ,int*,int*,int*,int*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 () ;
 int VAR_4 ;
 int FUNC_4 (int ,int*) ;

void FUNC_5(void)
{
 u32 VAR_5, VAR_6;
 u32 VAR_7;
 u32 VAR_8;

 if (VAR_4)
  return;
 VAR_4 = 1;

 if (FUNC_3())
  FUNC_4(VAR_1, VAR_2.flags);

 if (FUNC_2(VAR_0)) {
  FUNC_0(0x0, &VAR_5, &VAR_3[0], &VAR_3[2],
        &VAR_3[1]);

  if (VAR_5 >= 0x00000001 &&
      VAR_5 <= 0x0000ffff) {
   FUNC_0(0x1, &VAR_7, &VAR_8, &VAR_2.flags[4],
         &VAR_2.flags[0]);
   VAR_2.level = (VAR_7 >> 8) & 15;
   VAR_2.family = VAR_2.level;
   VAR_2.model = (VAR_7 >> 4) & 15;
   if (VAR_2.level >= 6)
    VAR_2.model += ((VAR_7 >> 16) & 0xf) << 4;
  }

  if (VAR_5 >= 0x00000007) {
   FUNC_1(0x00000007, 0, &VAR_8, &VAR_8,
     &VAR_2.flags[16], &VAR_8);
  }

  FUNC_0(0x80000000, &VAR_6, &VAR_8, &VAR_8,
        &VAR_8);

  if (VAR_6 >= 0x80000001 &&
      VAR_6 <= 0x8000ffff) {
   FUNC_0(0x80000001, &VAR_8, &VAR_8, &VAR_2.flags[6],
         &VAR_2.flags[1]);
  }
 }
}
