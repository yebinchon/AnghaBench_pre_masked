
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_slave {unsigned int bus; unsigned int cs; } ;
struct ar71xx_spi_slave {unsigned int mode; struct spi_slave slave; } ;


 int FUNC_0 (char*) ;
 struct ar71xx_spi_slave* FUNC_1 (int) ;

struct spi_slave *FUNC_2(unsigned int VAR_0, unsigned int VAR_1,
  unsigned int VAR_2, unsigned int VAR_3)
{
 struct ar71xx_spi_slave *VAR_4;

 FUNC_0("ar71xx_spi: spi_setup_slave");

 if ((VAR_0 != 0) || (VAR_1 > 2))
  return ((void*)0);

 VAR_4 = FUNC_1(sizeof(struct ar71xx_spi_slave));
 if (!VAR_4)
  return ((void*)0);

 VAR_4->slave.bus = VAR_0;
 VAR_4->slave.cs = VAR_1;
 VAR_4->mode = VAR_3;



 FUNC_0(" ---> out\n");

 return &VAR_4->slave;
}
