
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {int memcmd; } ;
struct TYPE_4__ {TYPE_1__ risc; } ;
struct dib9000_state {TYPE_2__ platform; } ;


 int FUNC_0 (struct dib9000_state*,int,int*,int) ;
 int FUNC_1 (struct dib9000_state*,int,int) ;

__attribute__((used)) static void FUNC_2(struct dib9000_state *VAR_0, u32 VAR_1, u32 VAR_2, u8 VAR_3)
{
 u8 VAR_4[14] = { 0 };



 VAR_4[1] = 1;



 VAR_4[4] = (u8) (VAR_1 >> 8);
 VAR_4[5] = (u8) (VAR_1 & 0xff);



 VAR_4[12] = (u8) (VAR_1 >> 8);
 VAR_4[13] = (u8) (VAR_1 & 0xff);

 VAR_1 += VAR_2;


 VAR_4[8] = (u8) (VAR_1 >> 8);
 VAR_4[9] = (u8) (VAR_1 & 0xff);

 FUNC_0(VAR_0, 1056, VAR_4, 14);
 if (VAR_3)
  FUNC_1(VAR_0, 1056, (1 << 15) | 1);
 VAR_0->platform.risc.memcmd = -1;
}
