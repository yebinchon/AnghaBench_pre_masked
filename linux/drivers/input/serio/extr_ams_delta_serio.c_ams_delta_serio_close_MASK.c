
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {struct ams_delta_serio* port_data; } ;
struct ams_delta_serio {int vcc; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct serio *VAR_0)
{
 struct ams_delta_serio *VAR_1 = VAR_0->port_data;


 FUNC_0(VAR_1->vcc);
}
