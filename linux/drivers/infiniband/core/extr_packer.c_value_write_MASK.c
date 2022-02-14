
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int __be64 ;
typedef int __be32 ;
typedef int __be16 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static void FUNC_4(int VAR_0, int VAR_1, u64 VAR_2, void *VAR_3)
{
 switch (VAR_1 * 8) {
 case 8: *( u8 *) (VAR_3 + VAR_0) = VAR_2; break;
 case 16: *(__be16 *) (VAR_3 + VAR_0) = FUNC_0(VAR_2); break;
 case 32: *(__be32 *) (VAR_3 + VAR_0) = FUNC_1(VAR_2); break;
 case 64: *(__be64 *) (VAR_3 + VAR_0) = FUNC_2(VAR_2); break;
 default:
  FUNC_3("Field size %d bits not handled\n", VAR_1 * 8);
 }
}
