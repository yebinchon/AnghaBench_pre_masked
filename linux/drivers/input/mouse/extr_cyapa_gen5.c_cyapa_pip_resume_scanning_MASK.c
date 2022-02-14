
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cyapa {int dummy; } ;
typedef int resp_data ;
typedef int cmd ;


 int VAR_0 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (struct cyapa*,int *,int *,int *) ;
 int FUNC_2 (struct cyapa*,int*,int,int*,int*,int,int ,int) ;
 int VAR_1 ;

int FUNC_3(struct cyapa *VAR_2)
{
 u8 VAR_3[] = { 0x04, 0x00, 0x05, 0x00, 0x2f, 0x00, 0x04 };
 u8 VAR_4[6];
 int VAR_5;
 int VAR_6;


 FUNC_1(VAR_2, ((void*)0), ((void*)0), ((void*)0));

 VAR_5 = sizeof(VAR_4);
 VAR_6 = FUNC_2(VAR_2,
   VAR_3, sizeof(VAR_3),
   VAR_4, &VAR_5,
   500, VAR_1, 1);
 if (VAR_6 || !FUNC_0(VAR_4, 0x04))
  return -VAR_0;


 FUNC_1(VAR_2, ((void*)0), ((void*)0), ((void*)0));

 return 0;
}
