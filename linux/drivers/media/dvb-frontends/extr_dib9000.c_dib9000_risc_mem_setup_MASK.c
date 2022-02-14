
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int memcmd; struct dib9000_fe_memory_map* fe_mm; } ;
struct TYPE_4__ {TYPE_1__ risc; } ;
struct dib9000_state {TYPE_2__ platform; } ;
struct dib9000_fe_memory_map {int size; int addr; } ;


 int FUNC_0 (struct dib9000_state*,int ,int,int) ;

__attribute__((used)) static void FUNC_1(struct dib9000_state *VAR_0, u8 VAR_1)
{
 struct dib9000_fe_memory_map *VAR_2 = &VAR_0->platform.risc.fe_mm[VAR_1 & 0x7f];

 if (VAR_0->platform.risc.memcmd == VAR_1 &&
     !(VAR_1 & 0x80 && VAR_2->size < 67))
  return;
 FUNC_0(VAR_0, VAR_2->addr, VAR_2->size, VAR_1 & 0x80);
 VAR_0->platform.risc.memcmd = VAR_1;
}
