
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct max30102_data {int client; int buffer; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (int ,int ,unsigned int,int *) ;

__attribute__((used)) static int FUNC_2(struct max30102_data *VAR_3,
         unsigned int VAR_4)
{
 int VAR_5;
 u8 *VAR_6 = (u8 *) &VAR_3->buffer;

 VAR_5 = FUNC_1(VAR_3->client,
         VAR_1,
         VAR_4 *
         VAR_2,
         VAR_6);

 switch (VAR_4) {
 case 3:
  FUNC_0(2);

 case 2:
  FUNC_0(1);

 case 1:
  FUNC_0(0);
  break;
 default:
  return -VAR_0;
 }

 return (VAR_5 == VAR_4 * VAR_2) ?
        0 : -VAR_0;
}
