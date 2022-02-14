
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct clk_get_info {int max_rate; int min_rate; } ;
typedef int le_clk_id ;
typedef int clk ;
typedef int __le16 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int,struct clk_get_info*,int) ;

__attribute__((used)) static int
FUNC_3(u16 VAR_1, unsigned long *VAR_2, unsigned long *VAR_3)
{
 int VAR_4;
 struct clk_get_info VAR_5;
 __le16 VAR_6 = FUNC_0(VAR_1);

 VAR_4 = FUNC_2(VAR_0, &VAR_6,
    sizeof(VAR_6), &VAR_5, sizeof(VAR_5));
 if (!VAR_4) {
  *VAR_2 = FUNC_1(VAR_5.min_rate);
  *VAR_3 = FUNC_1(VAR_5.max_rate);
 }
 return VAR_4;
}
