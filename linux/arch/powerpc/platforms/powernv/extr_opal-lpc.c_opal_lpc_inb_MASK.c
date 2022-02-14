
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ int64_t ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__,int ,unsigned long,int *,int) ;

__attribute__((used)) static u8 FUNC_2(unsigned long VAR_2)
{
 int64_t VAR_3;
 __be32 VAR_4;

 if (VAR_1 < 0 || VAR_2 > 0xffff)
  return 0xff;
 VAR_3 = FUNC_1(VAR_1, VAR_0, VAR_2, &VAR_4, 1);
 return VAR_3 ? 0xff : FUNC_0(VAR_4);
}
