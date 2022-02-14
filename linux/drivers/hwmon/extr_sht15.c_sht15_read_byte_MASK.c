
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sht15_data {int sck; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static u8 FUNC_3(struct sht15_data *VAR_2)
{
 int VAR_3;
 u8 VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < 8; ++VAR_3) {
  VAR_4 <<= 1;
  FUNC_1(VAR_2->sck, 1);
  FUNC_2(VAR_0);
  VAR_4 |= !!FUNC_0(VAR_2->data);
  FUNC_1(VAR_2->sck, 0);
  FUNC_2(VAR_1);
 }
 return VAR_4;
}
