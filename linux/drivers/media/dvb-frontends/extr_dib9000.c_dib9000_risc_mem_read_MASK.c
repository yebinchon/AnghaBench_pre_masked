
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_3__ {int mem_lock; int fw_is_running; } ;
struct TYPE_4__ {TYPE_1__ risc; } ;
struct dib9000_state {TYPE_2__ platform; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dib9000_state*,int*,int ) ;
 int FUNC_1 (struct dib9000_state*,int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct dib9000_state *VAR_2, u8 VAR_3, u8 * VAR_4, u16 VAR_5)
{
 if (!VAR_2->platform.risc.fw_is_running)
  return -VAR_1;

 if (FUNC_3(&VAR_2->platform.risc.mem_lock) < 0) {
  FUNC_2("could not get the lock\n");
  return -VAR_0;
 }
 FUNC_1(VAR_2, VAR_3 | 0x80);
 FUNC_0(VAR_2, VAR_4, VAR_5);
 FUNC_4(&VAR_2->platform.risc.mem_lock);
 return 0;
}
