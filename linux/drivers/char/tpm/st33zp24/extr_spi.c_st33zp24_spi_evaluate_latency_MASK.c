
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct st33zp24_spi_phy {int latency; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,int ,int *,int) ;

__attribute__((used)) static int FUNC_1(void *VAR_3)
{
 struct st33zp24_spi_phy *VAR_4 = VAR_3;
 int VAR_5 = 1, VAR_6 = 0;
 u8 VAR_7 = 0;

 while (!VAR_6 && VAR_5 < VAR_1) {
  VAR_4->latency = VAR_5;
  VAR_6 = FUNC_0(VAR_3, VAR_2,
      &VAR_7, 1);
  VAR_5++;
 }
 if (VAR_6 < 0)
  return VAR_6;
 if (VAR_5 == VAR_1)
  return -VAR_0;

 return VAR_5 - 1;
}
