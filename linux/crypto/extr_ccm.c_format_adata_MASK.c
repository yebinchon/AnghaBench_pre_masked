
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int __be32 ;
typedef int __be16 ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static int FUNC_2(u8 *VAR_0, unsigned int VAR_1)
{
 int VAR_2 = 0;




 if (VAR_1 < 65280) {
  *(__be16 *)VAR_0 = FUNC_0(VAR_1);
  VAR_2 = 2;
 } else {
  *(__be16 *)VAR_0 = FUNC_0(0xfffe);
  *(__be32 *)&VAR_0[2] = FUNC_1(VAR_1);
  VAR_2 = 6;
 }

 return VAR_2;
}
