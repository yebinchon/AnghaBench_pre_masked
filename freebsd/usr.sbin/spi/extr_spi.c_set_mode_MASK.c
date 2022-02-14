
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct spi_options {scalar_t__ mode; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,scalar_t__*) ;

__attribute__((used)) static int
FUNC_1(int VAR_1, struct spi_options *VAR_2)
{
 uint32_t VAR_3 = VAR_2->mode;

 if (VAR_2->mode < 0)
  return 0;

 return FUNC_0(VAR_1, VAR_0, &VAR_3);
}
