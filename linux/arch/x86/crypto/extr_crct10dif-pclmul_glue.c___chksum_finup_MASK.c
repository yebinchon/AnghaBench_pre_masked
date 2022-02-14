
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int __u16 ;


 int FUNC_0 (int ,int const*,unsigned int) ;
 int FUNC_1 (int ,int const*,unsigned int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(__u16 VAR_0, const u8 *VAR_1, unsigned int VAR_2, u8 *VAR_3)
{
 if (VAR_2 >= 16 && FUNC_2()) {
  FUNC_3();
  *(__u16 *)VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
  FUNC_4();
 } else
  *(__u16 *)VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 return 0;
}
