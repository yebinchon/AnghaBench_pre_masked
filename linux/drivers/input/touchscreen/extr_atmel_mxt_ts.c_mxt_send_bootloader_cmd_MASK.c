
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mxt_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mxt_data*,int*,int) ;

__attribute__((used)) static int FUNC_1(struct mxt_data *VAR_2, bool VAR_3)
{
 int VAR_4;
 u8 VAR_5[2];

 if (VAR_3) {
  VAR_5[0] = VAR_0;
  VAR_5[1] = VAR_1;
 } else {
  VAR_5[0] = 0x01;
  VAR_5[1] = 0x01;
 }

 VAR_4 = FUNC_0(VAR_2, VAR_5, 2);
 if (VAR_4)
  return VAR_4;

 return 0;
}
