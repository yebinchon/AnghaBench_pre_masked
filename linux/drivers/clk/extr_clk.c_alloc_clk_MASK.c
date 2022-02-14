
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_core {int dummy; } ;
struct clk {char const* dev_id; int max_rate; int con_id; struct clk_core* core; } ;


 int VAR_0 ;
 struct clk* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char const*,int ) ;
 struct clk* FUNC_2 (int,int ) ;

__attribute__((used)) static struct clk *FUNC_3(struct clk_core *VAR_3, const char *VAR_4,
        const char *VAR_5)
{
 struct clk *VAR_6;

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_6->core = VAR_3;
 VAR_6->dev_id = VAR_4;
 VAR_6->con_id = FUNC_1(VAR_5, VAR_1);
 VAR_6->max_rate = VAR_2;

 return VAR_6;
}
