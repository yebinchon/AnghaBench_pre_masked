
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {struct ps2if* port_data; } ;
struct ps2if {int base; } ;


 int FUNC_0 (unsigned char,int ) ;

__attribute__((used)) static int FUNC_1(struct serio *VAR_0, unsigned char VAR_1)
{
 struct ps2if *VAR_2 = VAR_0->port_data;

 FUNC_0(VAR_1, VAR_2->base);
 return 0;
}
