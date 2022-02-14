
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct srp_target_port {int ch_count; TYPE_1__* ch; } ;
struct TYPE_2__ {scalar_t__ connected; } ;



__attribute__((used)) static int FUNC_0(struct srp_target_port *VAR_0)
{
 int VAR_1, VAR_2 = 0;

 for (VAR_1 = 0; VAR_1 < VAR_0->ch_count; VAR_1++)
  VAR_2 += VAR_0->ch[VAR_1].connected;

 return VAR_2;
}
