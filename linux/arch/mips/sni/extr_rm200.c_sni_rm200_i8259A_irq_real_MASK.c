
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static inline int FUNC_2(unsigned int VAR_3)
{
 int VAR_4;
 int VAR_5 = 1 << VAR_3;

 if (VAR_3 < 8) {
  FUNC_1(0x0B, VAR_1 + VAR_0);
  VAR_4 = FUNC_0(VAR_1 + VAR_0) & VAR_5;
  FUNC_1(0x0A, VAR_1 + VAR_0);
  return VAR_4;
 }
 FUNC_1(0x0B, VAR_2 + VAR_0);
 VAR_4 = FUNC_0(VAR_2 + VAR_0) & (VAR_5 >> 8);
 FUNC_1(0x0A, VAR_2 + VAR_0);
 return VAR_4;
}
