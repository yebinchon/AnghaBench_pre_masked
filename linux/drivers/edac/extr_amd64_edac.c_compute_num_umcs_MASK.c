
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int x86_model; int x86; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int,char*,int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(void)
{
 u8 VAR_2 = VAR_0.x86_model;

 if (VAR_0.x86 < 0x17)
  return;

 if (VAR_2 >= 0x30 && VAR_2 <= 0x3f)
  VAR_1 = 8;
 else
  VAR_1 = 2;

 FUNC_0(1, "Number of UMCs: %x", VAR_1);
}
