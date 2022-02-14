
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int __be64 ;
typedef int __be32 ;
typedef int __be16 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static u64 FUNC_4(int VAR_0, int VAR_1, void *VAR_2)
{
 switch (VAR_1) {
 case 1: return *(u8 *) ((char *)VAR_2 + VAR_0);
 case 2: return FUNC_0((__be16 *) ((char *)VAR_2 + VAR_0));
 case 4: return FUNC_1((__be32 *) ((char *)VAR_2 + VAR_0));
 case 8: return FUNC_2((__be64 *) ((char *)VAR_2 + VAR_0));
 default:
  FUNC_3("Field size %d bits not handled\n", VAR_1 * 8);
  return 0;
 }
}
