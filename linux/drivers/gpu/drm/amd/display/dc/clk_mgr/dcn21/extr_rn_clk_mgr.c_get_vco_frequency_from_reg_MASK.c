
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fixed31_32 {unsigned int value; } ;
struct clk_mgr_internal {int dfs_ref_freq_khz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,unsigned int*) ;
 int FUNC_1 (struct fixed31_32) ;
 struct fixed31_32 FUNC_2 (unsigned int) ;
 struct fixed31_32 FUNC_3 (struct fixed31_32,int ) ;

__attribute__((used)) static int FUNC_4(struct clk_mgr_internal *VAR_3)
{

 struct fixed31_32 VAR_4;
 unsigned int VAR_5 = 0;
 unsigned int VAR_6 = 0;







 FUNC_0(VAR_0, VAR_1, &VAR_5);
 FUNC_0(VAR_0, VAR_2, &VAR_6);

 VAR_4 = FUNC_2(VAR_6);





 VAR_4.value |= VAR_5 << 16;


 VAR_4 = FUNC_3(VAR_4, VAR_3->dfs_ref_freq_khz);


 return FUNC_1(VAR_4);
}
