
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mms114_data {int cache_mode_control; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct mms114_data*,unsigned int,int,int*) ;

__attribute__((used)) static int FUNC_1(struct mms114_data *VAR_1, unsigned int VAR_2)
{
 u8 VAR_3;
 int VAR_4;

 if (VAR_2 == VAR_0)
  return VAR_1->cache_mode_control;

 VAR_4 = FUNC_0(VAR_1, VAR_2, 1, &VAR_3);
 return VAR_4 < 0 ? VAR_4 : VAR_3;
}
