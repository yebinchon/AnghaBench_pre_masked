
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 size_t VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (int *,char*,char*,int ,scalar_t__,int,int,int ,int ,int *) ;
 int FUNC_1 (int *,char*,char*,int ,int,int) ;
 int FUNC_2 (int *,char*,char*,int ,int,int *) ;
 int VAR_12 ;
 int * VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static void FUNC_3(void)
{

 VAR_13[VAR_10] = FUNC_0(((void*)0), "d1cpre",
   "sys_ck", VAR_0, VAR_11 + VAR_7, 8, 4, 0,
   VAR_12, &VAR_15);

 VAR_13[VAR_2] = FUNC_0(((void*)0), "hclk", "d1cpre",
   VAR_0, VAR_11 + VAR_7, 0, 4, 0,
   VAR_12, &VAR_15);



 VAR_13[VAR_1] = FUNC_1(((void*)0), "systick",
   "d1cpre", 0, 1, 8);


 VAR_13[VAR_5] = FUNC_0(((void*)0), "pclk3", "hclk", 0,
   VAR_11 + VAR_7, 4, 3, 0,
   VAR_14, &VAR_15);



 VAR_13[VAR_3] = FUNC_0(((void*)0), "pclk1", "hclk", 0,
   VAR_11 + VAR_8, 4, 3, 0,
   VAR_14, &VAR_15);


 FUNC_2(((void*)0), "tim1_ker", "pclk1", 0,
   4, &VAR_15);


 VAR_13[VAR_4] = FUNC_0(((void*)0), "pclk2", "hclk", 0,
   VAR_11 + VAR_8, 8, 3, 0, VAR_14,
   &VAR_15);

 FUNC_2(((void*)0), "tim2_ker", "pclk2", 0, 8,
   &VAR_15);



 VAR_13[VAR_6] = FUNC_0(((void*)0), "pclk4", "hclk", 0,
   VAR_11 + VAR_9, 4, 3, 0,
   VAR_14, &VAR_15);
}
