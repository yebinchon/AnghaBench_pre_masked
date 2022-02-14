
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int,char*,unsigned int,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(u32 VAR_0)
{
 unsigned int VAR_1 = 0;

 if (FUNC_3(VAR_0))
  VAR_1++;
 if (FUNC_2(VAR_0))
  VAR_1++;
 if (FUNC_5(VAR_0))
  VAR_1++;
 if (FUNC_4(VAR_0))
  VAR_1++;
 if (FUNC_1(VAR_0))
  VAR_1++;
 FUNC_0(VAR_1 != 1, "Bad count %d key=%x", VAR_1, VAR_0);
}
