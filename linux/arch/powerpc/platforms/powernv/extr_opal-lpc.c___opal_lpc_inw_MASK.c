
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int64_t ;
typedef int __le16 ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,unsigned long,int *,int) ;

__attribute__((used)) static __le16 FUNC_3(unsigned long VAR_2)
{
 int64_t VAR_3;
 __be32 VAR_4;

 if (VAR_1 < 0 || VAR_2 > 0xfffe)
  return 0xffff;
 if (VAR_2 & 1)
  return (__le16)FUNC_1(VAR_2) << 8 | FUNC_1(VAR_2 + 1);
 VAR_3 = FUNC_2(VAR_1, VAR_0, VAR_2, &VAR_4, 2);
 return VAR_3 ? 0xffff : FUNC_0(VAR_4);
}
