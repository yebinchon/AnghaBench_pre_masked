
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static unsigned int FUNC_1(u8 *VAR_1, u32 VAR_2)
{
 __be32 *VAR_3 = (__be32 *)(VAR_1 + VAR_0);
 u64 VAR_4;
 u32 VAR_5 = FUNC_0(*--VAR_3);

 VAR_5 = ~VAR_5;
 VAR_4 = (u64)VAR_5 + 1;
 if ((VAR_2 / VAR_0) > VAR_4)
  VAR_2 = VAR_4 * VAR_0;
 return VAR_2;
}
