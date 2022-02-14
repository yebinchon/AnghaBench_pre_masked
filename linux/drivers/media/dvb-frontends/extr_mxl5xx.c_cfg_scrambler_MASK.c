
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mxl {int demod; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mxl*,int,int*) ;

__attribute__((used)) static int FUNC_2(struct mxl *VAR_2, u32 VAR_3)
{
 u32 VAR_4;
 u8 VAR_5[26] = {
  VAR_1, 24,
  0, VAR_0, 0, 0,
  VAR_2->demod, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 1, 0, 0, 0,
 };

 VAR_4 = FUNC_0(VAR_3);

 VAR_5[25] = (VAR_4 >> 24) & 0xff;
 VAR_5[24] = (VAR_4 >> 16) & 0xff;
 VAR_5[23] = (VAR_4 >> 8) & 0xff;
 VAR_5[22] = VAR_4 & 0xff;

 return FUNC_1(VAR_2, sizeof(VAR_5), VAR_5);
}
