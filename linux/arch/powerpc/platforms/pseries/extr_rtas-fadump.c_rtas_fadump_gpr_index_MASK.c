
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,int,int*) ;

__attribute__((used)) static inline int FUNC_2(u64 VAR_2)
{
 char VAR_3[3];
 int VAR_4 = -1;

 if ((VAR_2 & VAR_1) == FUNC_0("GPR")) {

  VAR_2 &= ~VAR_1;
  VAR_2 >>= 24;
  VAR_3[2] = '\0';
  VAR_3[1] = VAR_2 & 0xff;
  VAR_3[0] = (VAR_2 >> 8) & 0xff;
  if (FUNC_1(VAR_3, 10, &VAR_4))
   VAR_4 = -VAR_0;
  if (VAR_4 > 31)
   VAR_4 = -1;
 }
 return VAR_4;
}
