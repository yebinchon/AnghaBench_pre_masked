
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ) ;

__attribute__((used)) static int
FUNC_1(u64 VAR_5, int VAR_6)
{
 int VAR_7 = VAR_2;




 if (!(VAR_5 & ((1UL << 29))))
  return VAR_3;

 if (!VAR_6)
  return VAR_7;

 if (VAR_5 & (1UL << 29))
  FUNC_0("%s    Icache parity error\n", VAR_4);

 return VAR_7;
}
