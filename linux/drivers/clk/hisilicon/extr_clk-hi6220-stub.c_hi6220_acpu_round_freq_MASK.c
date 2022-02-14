
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hi6220_stub_clk {int dfs_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 int FUNC_2 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct hi6220_stub_clk *VAR_5,
      unsigned int VAR_6)
{
 unsigned int VAR_7, VAR_8 = VAR_4;
 unsigned int VAR_9;


 FUNC_2(VAR_5->dfs_map, VAR_0, &VAR_7);
 if (VAR_7 == VAR_3)
  FUNC_2(VAR_5->dfs_map, VAR_1, &VAR_8);


 FUNC_2(VAR_5->dfs_map, VAR_2, &VAR_9);


 VAR_9 = FUNC_1(VAR_9, VAR_8);

 if (FUNC_0(VAR_6 > VAR_9))
  VAR_6 = VAR_9;

 return VAR_6;
}
