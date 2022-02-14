
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct device {int dummy; } ;
typedef scalar_t__ ssize_t ;


 unsigned char FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (struct spi_device*,unsigned char*,int,void*,int) ;
 struct spi_device* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0,
      unsigned char VAR_1, int VAR_2,
      void *VAR_3)
{
 struct spi_device *VAR_4 = FUNC_2(VAR_0);
 ssize_t VAR_5;

 VAR_1 = FUNC_0(VAR_1);
 VAR_5 = FUNC_1(VAR_4, &VAR_1, 1, VAR_3, VAR_2);

 return (VAR_5 < 0) ? VAR_5 : 0;
}
