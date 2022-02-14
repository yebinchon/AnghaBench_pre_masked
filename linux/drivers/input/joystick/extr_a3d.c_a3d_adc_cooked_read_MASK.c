
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gameport {struct a3d* port_data; } ;
struct a3d {int* axes; int buttons; } ;



__attribute__((used)) static int FUNC_0(struct gameport *VAR_0, int *VAR_1, int *VAR_2)
{
 struct a3d *VAR_3 = VAR_0->port_data;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 4; VAR_4++)
  VAR_1[VAR_4] = (VAR_3->axes[VAR_4] < 254) ? VAR_3->axes[VAR_4] : -1;
 *VAR_2 = VAR_3->buttons;
 return 0;
}
