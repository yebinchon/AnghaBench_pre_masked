
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int fw_is_running; } ;
struct TYPE_4__ {TYPE_1__ risc; } ;
struct dib9000_state {TYPE_2__ platform; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dib9000_state*,int ,int*,int*,int) ;
 int FUNC_1 (struct dib9000_state*,int ,int*,int,int) ;

__attribute__((used)) static int FUNC_2(struct dib9000_state *VAR_3, u32 VAR_4, u16 VAR_5, const u8 * VAR_6, u32 VAR_7)
{
 u16 VAR_8[10];
 u8 VAR_9, VAR_10;

 if (VAR_4 >= 1024 || !VAR_3->platform.risc.fw_is_running)
  return -VAR_0;

 if (VAR_7 > 18)
  return -VAR_0;



 VAR_8[0] = (u16)VAR_4;
 for (VAR_10 = 0; VAR_10 + 1 < VAR_7; VAR_10 += 2)
  VAR_8[1 + VAR_10 / 2] = VAR_6[VAR_10] << 8 | VAR_6[VAR_10 + 1];
 if (VAR_7 & 1)
  VAR_8[1 + VAR_7 / 2] = VAR_6[VAR_7 - 1] << 8;

 FUNC_1(VAR_3, VAR_2, VAR_8, (3 + VAR_7) / 2, VAR_5);
 return FUNC_0(VAR_3, VAR_1, VAR_8, &VAR_9, VAR_5) == 1 ? 0 : -VAR_0;
}
