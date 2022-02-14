
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rmi_spi_xport {int page; } ;
struct rmi_spi_cmd {int addr; int op; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rmi_spi_xport*,struct rmi_spi_cmd*,int *,int,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct rmi_spi_xport *VAR_2, u8 VAR_3)
{
 struct rmi_spi_cmd VAR_4;
 int VAR_5;

 VAR_4.op = VAR_1;
 VAR_4.addr = VAR_0;

 VAR_5 = FUNC_0(VAR_2, &VAR_4, &VAR_3, 1, ((void*)0), 0);

 if (VAR_5)
  VAR_2->page = VAR_3;

 return VAR_5;
}
