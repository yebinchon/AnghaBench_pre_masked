
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_long ;
struct TYPE_2__ {int ic_linesize; int ic_size; int dc_linesize; int dc_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (scalar_t__,int ,int ) ;

void
FUNC_2(void)
{
 u_long VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2.dc_size);
     VAR_3 += FUNC_0(VAR_2.dc_linesize))
  FUNC_1(VAR_3, VAR_0, 0);
 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2.ic_size);
     VAR_3 += FUNC_0(VAR_2.ic_linesize))
  FUNC_1(VAR_3, VAR_1, 0);
}
