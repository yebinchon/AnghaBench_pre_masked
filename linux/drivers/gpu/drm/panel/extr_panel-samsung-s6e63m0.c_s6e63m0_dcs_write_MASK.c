
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct s6e63m0 {int error; int dev; } ;


 int const VAR_0 ;
 int FUNC_0 (int ,char*,int,int const*) ;
 int FUNC_1 (int ,char*,int,int,int const*) ;
 int FUNC_2 (struct s6e63m0*,int const) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct s6e63m0 *VAR_1, const u8 *VAR_2, size_t VAR_3)
{
 int VAR_4 = 0;

 if (VAR_1->error < 0 || VAR_3 == 0)
  return;

 FUNC_0(VAR_1->dev, "writing dcs seq: %*ph\n", (int)VAR_3, VAR_2);
 VAR_4 = FUNC_2(VAR_1, *VAR_2);

 while (!VAR_4 && --VAR_3) {
  ++VAR_2;
  VAR_4 = FUNC_2(VAR_1, *VAR_2 | VAR_0);
 }

 if (VAR_4) {
  FUNC_1(VAR_1->dev, "error %d writing dcs seq: %*ph\n", VAR_4,
         (int)VAR_3, VAR_2);
  VAR_1->error = VAR_4;
 }

 FUNC_3(300, 310);
}
