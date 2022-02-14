
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cyapa {int dummy; } ;
typedef int resp_data ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (struct cyapa*,int*,int,int*,int*,int,int ,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct cyapa *VAR_3, u8 VAR_4)
{
 u8 VAR_5[] = { 0x04, 0x00, 0x06, 0x00, 0x2f, 0x00, 0x46, VAR_4 };
 u8 VAR_6[6];
 int VAR_7;
 int VAR_8;

 VAR_7 = sizeof(VAR_6);
 VAR_8 = FUNC_1(VAR_3, VAR_5, sizeof(VAR_5),
   VAR_6, &VAR_7,
   500, VAR_2, 0);
 if (VAR_8 || !FUNC_0(VAR_6, 0x46))
  return VAR_8 < 0 ? VAR_8 : -VAR_1;


 if (VAR_6[5] != VAR_4)
  return -VAR_0;

 return 0;
}
