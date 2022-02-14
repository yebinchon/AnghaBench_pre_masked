
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (char*,int*,int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static bool FUNC_4(u64 *VAR_2, bool VAR_3)
{
 u64 VAR_4 = *VAR_2;

 if (!FUNC_0(VAR_4) &&
       !(VAR_3 && FUNC_3(VAR_4)))
  return 0;

 FUNC_2("rmap_write_protect: spte %p %llx\n", VAR_2, *VAR_2);

 if (VAR_3)
  VAR_4 &= ~VAR_1;
 VAR_4 = VAR_4 & ~VAR_0;

 return FUNC_1(VAR_2, VAR_4);
}
