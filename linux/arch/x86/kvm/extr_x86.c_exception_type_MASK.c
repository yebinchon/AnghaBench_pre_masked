
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(int VAR_10)
{
 unsigned int VAR_11;

 if (FUNC_0(VAR_10 > 31 || VAR_10 == VAR_8))
  return VAR_5;

 VAR_11 = 1 << VAR_10;


 if (VAR_11 & ((1 << VAR_1) | (1 << VAR_0) | (1 << VAR_9)))
  return VAR_6;

 if (VAR_11 & ((1 << VAR_2) | (1 << VAR_7)))
  return VAR_3;


 return VAR_4;
}
