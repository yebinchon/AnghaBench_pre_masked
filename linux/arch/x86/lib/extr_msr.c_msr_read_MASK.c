
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct msr {int q; } ;


 int FUNC_0 (int ,int *) ;

int FUNC_1(u32 VAR_0, struct msr *VAR_1)
{
 int VAR_2;
 u64 VAR_3;

 VAR_2 = FUNC_0(VAR_0, &VAR_3);
 if (!VAR_2)
  VAR_1->q = VAR_3;

 return VAR_2;
}
