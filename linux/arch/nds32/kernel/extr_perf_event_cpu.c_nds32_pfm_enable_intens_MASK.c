
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;


 int VAR_0 ;
 unsigned int* VAR_1 ;
 unsigned int* VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,int ) ;

__attribute__((used)) static inline int FUNC_2(int VAR_3)
{
 unsigned int VAR_4 = FUNC_0(VAR_0);
 u32 VAR_5 = 0;

 VAR_5 = VAR_1[VAR_3];
 VAR_4 |= VAR_5;
 VAR_4 &= ~(VAR_2[0] | VAR_2[1] | VAR_2[2]);
 FUNC_1(VAR_4, VAR_0);
 return VAR_3;
}
