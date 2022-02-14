
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int __be64 ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(char *VAR_0, unsigned int VAR_1, u64 VAR_2)
{
 FUNC_1(VAR_0, 0, VAR_1);
 *VAR_0 = 0x80;
 if (VAR_1 == 64)
  *(__be64 *)(VAR_0 + 56) = FUNC_0(VAR_2 << 3);
 else
  *(__be64 *)(VAR_0 + 120) = FUNC_0(VAR_2 << 3);
}
