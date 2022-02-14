
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int mce_banks_t ;
typedef enum mcp_flags { ____Placeholder_mcp_flags } mcp_flags ;
struct TYPE_2__ {int bootlog; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int *) ;
 TYPE_1__ VAR_7 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int,int) ;

__attribute__((used)) static void FUNC_5(void)
{
 enum mcp_flags VAR_8 = 0;
 mce_banks_t VAR_9;
 u64 VAR_10;

 if (!VAR_7.bootlog)
  VAR_8 = VAR_2;




 FUNC_0(VAR_9, VAR_0);
 FUNC_2(VAR_3 | VAR_8, &VAR_9);

 FUNC_1(VAR_6);

 FUNC_3(VAR_4, VAR_10);
 if (VAR_10 & VAR_1)
  FUNC_4(VAR_5, 0xffffffff, 0xffffffff);
}
