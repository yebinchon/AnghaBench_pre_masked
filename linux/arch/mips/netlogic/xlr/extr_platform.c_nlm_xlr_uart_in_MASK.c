
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct uart_port {scalar_t__ membase; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static unsigned int FUNC_1(struct uart_port *VAR_2, int VAR_3)
{
 uint64_t VAR_4;
 unsigned int VAR_5;


 VAR_4 = (uint64_t)(long)VAR_2->membase;
 VAR_5 = FUNC_0(VAR_4, VAR_3);


 if (VAR_3 == VAR_1)
  VAR_5 ^= 0xF0;
 else if (VAR_3 == VAR_0)
  VAR_5 ^= 0x3;

 return VAR_5;
}
