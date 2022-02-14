
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_3__ {int mbx_if_lock; int fw_is_running; } ;
struct TYPE_4__ {TYPE_1__ risc; } ;
struct dib9000_state {TYPE_2__ platform; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct dib9000_state*,int,int) ;
 scalar_t__ FUNC_1 (struct dib9000_state*,int,scalar_t__*,scalar_t__,int) ;
 scalar_t__ FUNC_2 (struct dib9000_state*,int,int,int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct dib9000_state *VAR_5, u8 VAR_6, u16 * VAR_7, u8 VAR_8, u16 VAR_9)
{
 u8 *VAR_10, VAR_11[2];
 u16 VAR_12;
 u16 VAR_13;
 u32 VAR_14;
 int VAR_15 = 0;

 if (!VAR_5->platform.risc.fw_is_running)
  return -VAR_1;

 if (FUNC_5(&VAR_5->platform.risc.mbx_if_lock) < 0) {
  FUNC_3("could not get the lock\n");
  return -VAR_0;
 }
 VAR_12 = VAR_3;
 do {
  VAR_13 = FUNC_0(VAR_5, 1043, VAR_9) & 0xff;
  if ((VAR_13 + VAR_8 + 1) > VAR_4 && --VAR_12) {
   FUNC_3("MBX: RISC mbx full, retrying\n");
   FUNC_4(100);
  } else
   break;
 } while (1);



 if (VAR_12 == 0) {
  VAR_15 = -VAR_1;
  goto out;
 }





 VAR_10 = (u8 *) VAR_7;
 for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14++) {
  VAR_12 = VAR_7[VAR_14];
  *VAR_10++ = VAR_12 >> 8;
  *VAR_10++ = VAR_12 & 0xff;
 }


 VAR_11[0] = VAR_6;
 VAR_11[1] = VAR_8 + 1;
 if (FUNC_1(VAR_5, 1045, VAR_11, 2, VAR_9) != 0 || FUNC_1(VAR_5, 1045, (u8 *) VAR_7, VAR_8 * 2, VAR_9) != 0) {
  VAR_15 = -VAR_2;
  goto out;
 }


 VAR_15 = (u8) FUNC_2(VAR_5, 1043, 1 << 14, VAR_9);

out:
 FUNC_6(&VAR_5->platform.risc.mbx_if_lock);

 return VAR_15;
}
