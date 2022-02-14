
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct cxd2880_spi_device {int spi; } ;
struct cxd2880_spi {struct cxd2880_spi_device* user; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int const*,int ,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct cxd2880_spi *VAR_2,
      const u8 *VAR_3,
      u32 VAR_4,
      u8 *VAR_5,
      u32 VAR_6)
{
 struct cxd2880_spi_device *VAR_7 = ((void*)0);
 int VAR_8 = 0;

 if (!VAR_2 || !VAR_2->user || !VAR_3 ||
     !VAR_4 || !VAR_5 || !VAR_6)
  return -VAR_0;

 VAR_7 = VAR_2->user;

 VAR_8 = FUNC_0(VAR_7->spi, VAR_3,
         VAR_4, VAR_5, VAR_6);
 if (VAR_8 < 0)
  return -VAR_1;

 return 0;
}
