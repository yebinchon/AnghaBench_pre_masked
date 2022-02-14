
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cyapa {int dummy; } ;
typedef int resp_data ;
typedef int cmd ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (struct cyapa*,int*,int,int*,int*,int,int ,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct cyapa *VAR_2, u8 VAR_3)
{
 u8 VAR_4[8] = { 0x04, 0x00, 0x06, 0x00, 0x2f, 0x00, 0x08, 0x01 };
 u8 VAR_5[6];
 int VAR_6;
 int VAR_7;

 VAR_4[7] = VAR_3;
 VAR_6 = sizeof(VAR_5);
 VAR_7 = FUNC_2(VAR_2, VAR_4, sizeof(VAR_4),
   VAR_5, &VAR_6,
   500, VAR_1, 0);
 if (VAR_7 || !FUNC_1(VAR_5, 0x08) ||
   !FUNC_0(VAR_5))
  return VAR_7 < 0 ? VAR_7 : -VAR_0;

 return 0;
}
