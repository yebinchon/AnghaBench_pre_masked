
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {int fw_is_running; int memcmd; } ;
struct TYPE_4__ {TYPE_1__ risc; } ;
struct dib9000_state {TYPE_2__ platform; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dib9000_state*,int,int,int const*,int ) ;
 scalar_t__ FUNC_1 (struct dib9000_state*,int) ;
 scalar_t__ FUNC_2 (struct dib9000_state*) ;
 int FUNC_3 (struct dib9000_state*,int,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct dib9000_state *VAR_2, const u8 * VAR_3, u32 VAR_4, const u8 * VAR_5, u32 VAR_6)
{

 FUNC_3(VAR_2, 1225, 0x02);
 FUNC_3(VAR_2, 1226, 0x05);


 FUNC_3(VAR_2, 1542, 1);


 FUNC_3(VAR_2, 1074, 0);
 FUNC_3(VAR_2, 1075, 0);


 FUNC_3(VAR_2, 1237, 0);


 if (VAR_3 != ((void*)0))
  FUNC_3(VAR_2, 1024, 2);
 else
  FUNC_3(VAR_2, 1024, 15);
 if (VAR_5 != ((void*)0))
  FUNC_3(VAR_2, 1040, 2);

 if (VAR_3 != ((void*)0))
  FUNC_0(VAR_2, 0, 0x1234, VAR_3, VAR_4);
 if (VAR_5 != ((void*)0))
  FUNC_0(VAR_2, 1, 0x1234, VAR_5, VAR_6);


 if (VAR_3 != ((void*)0))
  FUNC_3(VAR_2, 1024, 0);
 if (VAR_5 != ((void*)0))
  FUNC_3(VAR_2, 1040, 0);

 if (VAR_3 != ((void*)0))
  if (FUNC_1(VAR_2, 0) != 0)
   return -VAR_1;
 if (VAR_5 != ((void*)0))
  if (FUNC_1(VAR_2, 1) != 0)
   return -VAR_1;

 FUNC_4(100);
 VAR_2->platform.risc.fw_is_running = 1;

 if (FUNC_2(VAR_2) != 0)
  return -VAR_0;

 VAR_2->platform.risc.memcmd = 0xff;
 return 0;
}
