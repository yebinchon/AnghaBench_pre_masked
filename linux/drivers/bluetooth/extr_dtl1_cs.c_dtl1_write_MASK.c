
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u8 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(unsigned int VAR_3, int VAR_4, __u8 *VAR_5, int VAR_6)
{
 int VAR_7 = 0;


 if (!(FUNC_0(VAR_3 + VAR_0) & VAR_1))
  return 0;


 while ((VAR_4-- > 0) && (VAR_7 < VAR_6)) {

  FUNC_1(VAR_5[VAR_7], VAR_3 + VAR_2);
  VAR_7++;
 }

 return VAR_7;
}
