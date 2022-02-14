
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {int handle; } ;
struct nouveau_channel {TYPE_1__ vram; } ;


 int FUNC_0 (struct nouveau_channel*,int ,int ,int) ;
 int FUNC_1 (struct nouveau_channel*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct nouveau_channel*,int ) ;
 int FUNC_3 (struct nouveau_channel*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct nouveau_channel *VAR_3, u64 VAR_4, u32 VAR_5)
{
 int VAR_6 = FUNC_3(VAR_3, 7);
 if (VAR_6 == 0) {
  FUNC_0(VAR_3, 0, VAR_0, 1);
  FUNC_2 (VAR_3, VAR_3->vram.handle);
  FUNC_0(VAR_3, 0, VAR_1, 4);
  FUNC_2 (VAR_3, FUNC_5(VAR_4));
  FUNC_2 (VAR_3, FUNC_4(VAR_4));
  FUNC_2 (VAR_3, VAR_5);
  FUNC_2 (VAR_3, VAR_2);
  FUNC_1 (VAR_3);
 }
 return VAR_6;
}
