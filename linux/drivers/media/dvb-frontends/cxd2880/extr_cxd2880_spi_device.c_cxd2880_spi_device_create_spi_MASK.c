
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxd2880_spi_device {int dummy; } ;
struct cxd2880_spi {struct cxd2880_spi_device* user; scalar_t__ flags; int write_read; int write; int * read; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_0(struct cxd2880_spi *VAR_3,
      struct cxd2880_spi_device *VAR_4)
{
 if (!VAR_3 || !VAR_4)
  return -VAR_0;

 VAR_3->read = ((void*)0);
 VAR_3->write = VAR_1;
 VAR_3->write_read = VAR_2;
 VAR_3->flags = 0;
 VAR_3->user = VAR_4;

 return 0;
}
