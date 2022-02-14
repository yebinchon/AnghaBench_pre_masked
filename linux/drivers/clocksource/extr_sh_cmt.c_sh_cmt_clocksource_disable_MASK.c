
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_cmt_channel {int cs_enabled; } ;
struct clocksource {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct sh_cmt_channel* FUNC_1 (struct clocksource*) ;
 int FUNC_2 (struct sh_cmt_channel*,int ) ;

__attribute__((used)) static void FUNC_3(struct clocksource *VAR_1)
{
 struct sh_cmt_channel *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(!VAR_2->cs_enabled);

 FUNC_2(VAR_2, VAR_0);
 VAR_2->cs_enabled = 0;
}
