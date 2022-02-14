
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
 int FUNC_0 (struct cyapa*,int*,int,int*,int*,int,int ,int) ;
 int VAR_2 ;

int FUNC_1(struct cyapa *VAR_3, u8 VAR_4)
{
 u8 VAR_5[] = { 0x05, 0x00, 0x00, 0x08};
 u8 VAR_6[5];
 int VAR_7;
 int VAR_8;

 VAR_5[2] = VAR_4 & VAR_1;
 VAR_7 = sizeof(VAR_6);
 VAR_8 = FUNC_0(VAR_3, VAR_5, sizeof(VAR_5),
   VAR_6, &VAR_7,
   500, VAR_2, 0);
 if (VAR_8 || ((VAR_6[3] & VAR_1) != VAR_4))
  return -VAR_0;

 return 0;
}
