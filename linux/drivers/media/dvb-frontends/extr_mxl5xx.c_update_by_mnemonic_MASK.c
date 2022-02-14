
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mxl {int dummy; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct mxl*,int,int*) ;
 int FUNC_2 (struct mxl*,int,int) ;

__attribute__((used)) static int FUNC_3(struct mxl *VAR_0,
         u32 VAR_1, u8 VAR_2, u8 VAR_3, u32 VAR_4)
{
 u32 VAR_5, VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_0, VAR_1, &VAR_5);
 if (VAR_7)
  return VAR_7;
 VAR_6 = FUNC_0(VAR_2, VAR_3);
 VAR_5 = (VAR_5 & ~VAR_6) | ((VAR_4 << VAR_2) & VAR_6);
 VAR_7 = FUNC_2(VAR_0, VAR_1, VAR_5);
 return VAR_7;
}
