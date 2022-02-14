
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;



 int VAR_0 ;
 int FUNC_0 (unsigned int,int*) ;
 scalar_t__ FUNC_1 (unsigned int,int *,int*) ;

__attribute__((used)) static u64 FUNC_2(unsigned int VAR_1, int *VAR_2)
{
 u64 VAR_3;

 if (FUNC_1(VAR_1, &VAR_3, VAR_2))
  return VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 switch (VAR_1) {
 case 128:
  VAR_3 &= ~VAR_0;
  break;
 }
 return VAR_3;
}
