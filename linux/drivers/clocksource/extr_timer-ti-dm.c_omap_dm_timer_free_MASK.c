
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_dm_timer {scalar_t__ reserved; int fclk; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct omap_dm_timer *VAR_1)
{
 if (FUNC_2(!VAR_1))
  return -VAR_0;

 FUNC_1(VAR_1->fclk);

 FUNC_0(!VAR_1->reserved);
 VAR_1->reserved = 0;
 return 0;
}
