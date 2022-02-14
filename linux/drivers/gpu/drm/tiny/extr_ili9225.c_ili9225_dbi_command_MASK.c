
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct spi_device {int dummy; } ;
struct mipi_dbi {int dc; int swap_bytes; struct spi_device* spi; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct spi_device*,size_t) ;
 int FUNC_2 (struct spi_device*,int ,unsigned int,scalar_t__*,size_t) ;

__attribute__((used)) static int FUNC_3(struct mipi_dbi *VAR_1, u8 *VAR_2, u8 *VAR_3,
          size_t VAR_4)
{
 struct spi_device *VAR_5 = VAR_1->spi;
 unsigned int VAR_6 = 8;
 u32 VAR_7;
 int VAR_8;

 FUNC_0(VAR_1->dc, 0);
 VAR_7 = FUNC_1(VAR_5, 1);
 VAR_8 = FUNC_2(VAR_5, VAR_7, 8, VAR_2, 1);
 if (VAR_8 || !VAR_4)
  return VAR_8;

 if (*VAR_2 == VAR_0 && !VAR_1->swap_bytes)
  VAR_6 = 16;

 FUNC_0(VAR_1->dc, 1);
 VAR_7 = FUNC_1(VAR_5, VAR_4);

 return FUNC_2(VAR_5, VAR_7, VAR_6, VAR_3, VAR_4);
}
