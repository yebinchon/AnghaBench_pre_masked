
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct dispc_device {TYPE_1__* feat; int core_clk_rate; } ;
struct TYPE_2__ {scalar_t__ mstandby_workaround; scalar_t__ has_gamma_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int,int,int) ;
 int VAR_6 ;
 int FUNC_1 (struct dispc_device*,int ,int,int,int) ;
 int FUNC_2 (struct dispc_device*) ;
 int FUNC_3 (struct dispc_device*) ;
 scalar_t__ FUNC_4 (struct dispc_device*,int ) ;
 int FUNC_5 (struct dispc_device*) ;
 int FUNC_6 (struct dispc_device*) ;
 int FUNC_7 (struct dispc_device*) ;
 int FUNC_8 (struct dispc_device*,int ) ;
 int FUNC_9 (struct dispc_device*,int ) ;
 int FUNC_10 (struct dispc_device*) ;
 int FUNC_11 (struct dispc_device*,int ,int ) ;

__attribute__((used)) static void FUNC_12(struct dispc_device *VAR_7)
{
 u32 VAR_8;


 if (FUNC_4(VAR_7, VAR_3)) {
  VAR_8 = FUNC_8(VAR_7, VAR_1);

  VAR_8 = FUNC_0(VAR_8, 1, 0, 0);
  VAR_8 = FUNC_0(VAR_8, 1, 23, 16);
  FUNC_11(VAR_7, VAR_1, VAR_8);

  VAR_7->core_clk_rate = FUNC_3(VAR_7);
 }


 if (VAR_7->feat->has_gamma_table)
  FUNC_1(VAR_7, VAR_0, 1, 3, 3);





 if (FUNC_4(VAR_7, VAR_4) ||
     VAR_7->feat->has_gamma_table)
  FUNC_1(VAR_7, VAR_0, 1, 9, 9);

 FUNC_10(VAR_7);

 FUNC_9(VAR_7, VAR_6);

 FUNC_5(VAR_7);

 FUNC_2(VAR_7);

 FUNC_7(VAR_7);

 if (VAR_7->feat->mstandby_workaround)
  FUNC_1(VAR_7, VAR_2, 1, 0, 0);

 if (FUNC_4(VAR_7, VAR_5))
  FUNC_6(VAR_7);
}
