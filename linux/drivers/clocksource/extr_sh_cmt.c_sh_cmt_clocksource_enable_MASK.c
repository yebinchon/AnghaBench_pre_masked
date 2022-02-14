
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_cmt_channel {int cs_enabled; scalar_t__ total_cycles; } ;
struct clocksource {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct sh_cmt_channel* FUNC_1 (struct clocksource*) ;
 int FUNC_2 (struct sh_cmt_channel*,int ) ;

__attribute__((used)) static int FUNC_3(struct clocksource *VAR_1)
{
 int VAR_2;
 struct sh_cmt_channel *VAR_3 = FUNC_1(VAR_1);

 FUNC_0(VAR_3->cs_enabled);

 VAR_3->total_cycles = 0;

 VAR_2 = FUNC_2(VAR_3, VAR_0);
 if (!VAR_2)
  VAR_3->cs_enabled = 1;

 return VAR_2;
}
