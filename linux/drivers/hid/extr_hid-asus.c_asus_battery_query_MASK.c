
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct asus_drvdata {int battery_in_query; int hdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct asus_drvdata*,int *,int) ;
 int FUNC_1 (int ,int ,int *,int,int ,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct asus_drvdata *VAR_7)
{
 u8 *VAR_8;
 int VAR_9 = 0;

 VAR_8 = FUNC_3(VAR_1, VAR_4);
 if (!VAR_8)
  return -VAR_3;

 VAR_7->battery_in_query = 1;
 VAR_9 = FUNC_1(VAR_7->hdev, VAR_0,
    VAR_8, VAR_1,
    VAR_5, VAR_6);
 VAR_7->battery_in_query = 0;
 if (VAR_9 == VAR_1)
  VAR_9 = FUNC_0(VAR_7, VAR_8, VAR_1);
 else
  VAR_9 = -VAR_2;

 FUNC_2(VAR_8);

 return VAR_9;
}
