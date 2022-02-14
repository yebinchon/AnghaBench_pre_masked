
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ps2dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ps2dev*,int*,int ) ;

__attribute__((used)) static int FUNC_2(struct ps2dev *VAR_3, u8 VAR_4, u8 VAR_5)
{
 u8 VAR_6[3] = { VAR_2, VAR_4, VAR_5 };


 if (VAR_4 < 0x20 || VAR_4 >= 0x2F)
  return -VAR_0;

 return FUNC_1(VAR_3, VAR_6, FUNC_0(3, 0, VAR_1));
}
