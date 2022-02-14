
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dispc_device {TYPE_1__* feat; } ;
struct TYPE_2__ {scalar_t__ has_writeback; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dispc_device*) ;
 int FUNC_1 (struct dispc_device*,int,int const) ;

__attribute__((used)) static void FUNC_2(struct dispc_device *VAR_2)
{
 int VAR_3;
 const int VAR_4 = VAR_0;


 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2); ++VAR_3)
  FUNC_1(VAR_2, VAR_3, VAR_4);
 if (VAR_2->feat->has_writeback)
  FUNC_1(VAR_2, VAR_1, VAR_4);
}
