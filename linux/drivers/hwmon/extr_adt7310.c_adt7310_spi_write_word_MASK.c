
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct spi_device {int dummy; } ;
struct device {int dummy; } ;
typedef int buf ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct spi_device*,int *,int) ;
 struct spi_device* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0, u8 VAR_1, u16 VAR_2)
{
 struct spi_device *VAR_3 = FUNC_3(VAR_0);
 u8 VAR_4[3];

 VAR_4[0] = FUNC_0(VAR_1);
 FUNC_1(VAR_2, &VAR_4[1]);

 return FUNC_2(VAR_3, VAR_4, sizeof(VAR_4));
}
