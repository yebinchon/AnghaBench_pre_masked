
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ps2dev {int dummy; } ;


 int FUNC_0 (struct ps2dev*,int,int*) ;
 int FUNC_1 (struct ps2dev*,int,int) ;

__attribute__((used)) static int FUNC_2(struct ps2dev *VAR_0,
     u8 VAR_1, u8 VAR_2, u8 VAR_3)
{
 int VAR_4;
 u8 VAR_5;

 VAR_4 = FUNC_0(VAR_0, VAR_1, &VAR_5);
 if (VAR_4)
  return VAR_4;

 if (((VAR_5 & VAR_2) == VAR_2) != !!VAR_3)
  VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2);

 return VAR_4;
}
