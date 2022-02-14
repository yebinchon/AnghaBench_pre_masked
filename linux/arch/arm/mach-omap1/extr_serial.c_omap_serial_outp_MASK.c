
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct plat_serial8250_port {int regshift; scalar_t__ membase; } ;


 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct plat_serial8250_port *VAR_0, int VAR_1,
        int VAR_2)
{
 VAR_1 <<= VAR_0->regshift;
 FUNC_0(VAR_2, VAR_0->membase + VAR_1);
}
