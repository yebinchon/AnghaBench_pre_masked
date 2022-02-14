
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gen6_interval_setting {void* lp2_interval; void* lp1_interval; void* active_interval; } ;
struct cyapa {int dummy; } ;
typedef int resp_data ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (struct cyapa*,int*,int,int*,int*,int,int ,int) ;
 int VAR_2 ;
 void* FUNC_2 (int*) ;

__attribute__((used)) static int FUNC_3(struct cyapa *VAR_3,
  struct gen6_interval_setting *VAR_4)
{
 u8 VAR_5[] = { 0x04, 0x00, 0x05, 0x00, 0x2f, 0x00,
       VAR_1 };
 u8 VAR_6[11];
 int VAR_7;
 int VAR_8;

 VAR_7 = sizeof(VAR_6);
 VAR_8 = FUNC_1(VAR_3, VAR_5, sizeof(VAR_5),
   VAR_6, &VAR_7,
   500, VAR_2, 0);
 if (VAR_8 ||
  !FUNC_0(VAR_6, VAR_1))
  return VAR_8 < 0 ? VAR_8 : -VAR_0;

 VAR_4->active_interval = FUNC_2(&VAR_6[5]);
 VAR_4->lp1_interval = FUNC_2(&VAR_6[7]);
 VAR_4->lp2_interval = FUNC_2(&VAR_6[9]);

 return 0;
}
