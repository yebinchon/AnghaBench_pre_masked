
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ld9040 {int error; int dev; } ;


 int FUNC_0 (int ,char*,int,int const*) ;
 int FUNC_1 (int ,char*,int,int,int const*) ;
 int FUNC_2 (struct ld9040*,int const) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct ld9040 *VAR_0, const u8 *VAR_1, size_t VAR_2)
{
 int VAR_3 = 0;

 if (VAR_0->error < 0 || VAR_2 == 0)
  return;

 FUNC_0(VAR_0->dev, "writing dcs seq: %*ph\n", (int)VAR_2, VAR_1);
 VAR_3 = FUNC_2(VAR_0, *VAR_1);

 while (!VAR_3 && --VAR_2) {
  ++VAR_1;
  VAR_3 = FUNC_2(VAR_0, *VAR_1 | 0x100);
 }

 if (VAR_3) {
  FUNC_1(VAR_0->dev, "error %d writing dcs seq: %*ph\n", VAR_3,
   (int)VAR_2, VAR_1);
  VAR_0->error = VAR_3;
 }

 FUNC_3(300, 310);
}
