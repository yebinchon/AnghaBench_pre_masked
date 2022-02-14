
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
struct spi_device {int dummy; } ;


 int FUNC_0 (struct spi_device*,int,int const*,int *,size_t) ;

__attribute__((used)) static int FUNC_1(struct spi_device *VAR_0, u8 VAR_1,
        const u8 *VAR_2, size_t VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, 0x70, &VAR_1, ((void*)0), 1);
 if (VAR_4)
  return VAR_4;

 return FUNC_0(VAR_0, 0x72, VAR_2, ((void*)0), VAR_3);
}
