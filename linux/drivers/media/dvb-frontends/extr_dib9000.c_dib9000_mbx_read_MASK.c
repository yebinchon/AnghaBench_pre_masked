
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_3__ {int mbx_if_lock; int fw_is_running; } ;
struct TYPE_4__ {TYPE_1__ risc; } ;
struct dib9000_state {TYPE_2__ platform; } ;


 int VAR_0 ;
 int FUNC_0 (struct dib9000_state*,int,int*,int,int) ;
 int FUNC_1 (struct dib9000_state*,int,int) ;
 int FUNC_2 (struct dib9000_state*,int,int,int) ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static u8 FUNC_6(struct dib9000_state *VAR_1, u16 * VAR_2, u8 VAR_3, u16 VAR_4)
{




 u16 VAR_5, VAR_6;
 u8 VAR_7;
 u8 VAR_8;

 if (!VAR_1->platform.risc.fw_is_running)
  return 0;

 if (FUNC_4(&VAR_1->platform.risc.mbx_if_lock) < 0) {
  FUNC_3("could not get the lock\n");
  return 0;
 }
 if (VAR_3 == 1)
  VAR_8 = 16;
 else
  VAR_8 = 0;


 *VAR_2 = FUNC_1(VAR_1, 1029 + VAR_8, VAR_4);

 VAR_7 = *VAR_2 & 0xff;
 if (VAR_7 <= VAR_0) {
  VAR_2++;
  VAR_7--;

  FUNC_0(VAR_1, 1029 + VAR_8, (u8 *) VAR_2, VAR_7 * 2, VAR_4);


  for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
   VAR_5 = *VAR_2;
   *VAR_2 = (VAR_5 >> 8) | (VAR_5 << 8);
   VAR_2++;
  }







 } else {
  FUNC_3("MBX: message is too big for message cache (%d), flushing message\n", VAR_7);
  VAR_7--;
  while (VAR_7--)
   FUNC_0(VAR_1, 1029 + VAR_8, (u8 *) VAR_2, 2, VAR_4);
 }

 FUNC_2(VAR_1, 1028 + VAR_8, 1 << 14, VAR_4);

 FUNC_5(&VAR_1->platform.risc.mbx_if_lock);

 return VAR_7 + 1;
}
