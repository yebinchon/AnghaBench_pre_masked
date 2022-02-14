
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {struct ps2if* port_data; } ;
struct ps2if {scalar_t__ base; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct serio *VAR_0)
{
 struct ps2if *VAR_1 = VAR_0->port_data;


 while (FUNC_0(VAR_1->base) & 0xffff0000)
             ;

 FUNC_1(1, VAR_1->base + 4);
 return 0;
}
