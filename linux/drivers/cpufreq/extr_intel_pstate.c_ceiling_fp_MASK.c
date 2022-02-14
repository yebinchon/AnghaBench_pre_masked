
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline int FUNC_1(int32_t VAR_1)
{
 int VAR_2, VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 VAR_2 = (1 << VAR_0) - 1;
 if (VAR_1 & VAR_2)
  VAR_3 += 1;
 return VAR_3;
}
