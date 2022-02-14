
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct eps_cpu_data {int fsb; } ;


 int VAR_0 ;
 struct eps_cpu_data** VAR_1 ;
 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static unsigned int FUNC_1(unsigned int VAR_2)
{
 struct eps_cpu_data *VAR_3;
 u32 VAR_4, VAR_5;

 if (VAR_2)
  return 0;
 VAR_3 = VAR_1[VAR_2];
 if (VAR_3 == ((void*)0))
  return 0;


 FUNC_0(VAR_0, VAR_4, VAR_5);
 return VAR_3->fsb * ((VAR_4 >> 8) & 0xff);
}
