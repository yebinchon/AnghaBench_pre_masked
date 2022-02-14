
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_1(void)
{
 u32 VAR_4, VAR_5;

 VAR_4 = FUNC_0(VAR_3 + VAR_2);


 if (VAR_4 & VAR_0)
  VAR_5 = (VAR_4 & VAR_1) * 128000;
 else
  VAR_5 = (VAR_4 & VAR_1) * 1000;

 return VAR_5;
}
