
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int,int ) ;
 int * VAR_1 ;

u64 FUNC_1(unsigned int VAR_2)
{
 u64 VAR_3 = 0;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  VAR_3 += FUNC_0(VAR_2, VAR_1[VAR_4]);

 return VAR_3;
}
