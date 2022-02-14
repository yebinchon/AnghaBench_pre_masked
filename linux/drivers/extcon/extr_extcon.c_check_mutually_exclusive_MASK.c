
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct extcon_dev {int* mutually_exclusive; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct extcon_dev *VAR_0, u32 VAR_1)
{
 int VAR_2 = 0;

 if (!VAR_0->mutually_exclusive)
  return 0;

 for (VAR_2 = 0; VAR_0->mutually_exclusive[VAR_2]; VAR_2++) {
  int VAR_3;
  u32 VAR_4 = VAR_1 & VAR_0->mutually_exclusive[VAR_2];


  VAR_3 = FUNC_0(VAR_4);
  if (VAR_3 > 1)
   return VAR_2 + 1;
 }

 return 0;
}
