
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cyapa {int operational; scalar_t__ gen; int state; } ;
typedef int resp_data ;
typedef int cmd ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cyapa*,int *,int *,int *) ;
 int FUNC_1 (struct cyapa*,int*,int,int*,int*,int,int ,int) ;
 int FUNC_2 (struct cyapa*) ;
 scalar_t__ FUNC_3 (struct cyapa*) ;
 int FUNC_4 (struct cyapa*,int) ;
 int VAR_6 ;
 int FUNC_5 (int*,int ,int) ;

int FUNC_6(struct cyapa *VAR_7)
{
 u8 VAR_8[] = { 0x04, 0x00, 0x05, 0x00, 0x2F, 0x00, 0x01 };
 u8 VAR_9[2];
 int VAR_10;
 int VAR_11;

 VAR_11 = FUNC_4(VAR_7, 500);
 if (VAR_11 < 0)
  return VAR_11;


 if (FUNC_3(VAR_7))
  return 0;
 else if (!FUNC_2(VAR_7))
  return -VAR_5;


 FUNC_0(VAR_7, ((void*)0), ((void*)0), ((void*)0));





 VAR_10 = sizeof(VAR_9);
 FUNC_5(VAR_9, 0, VAR_10);
 VAR_11 = FUNC_1(VAR_7,
   VAR_8, sizeof(VAR_8),
   VAR_9, &VAR_10,
   5000, VAR_6,
   1);
 if (VAR_11 || VAR_9[0] != 0x00 || VAR_9[1] != 0x00)
  return VAR_11 < 0 ? VAR_11 : -VAR_4;

 VAR_7->operational = 0;
 if (VAR_7->gen == VAR_0)
  VAR_7->state = VAR_2;
 else if (VAR_7->gen == VAR_1)
  VAR_7->state = VAR_3;
 return 0;
}
