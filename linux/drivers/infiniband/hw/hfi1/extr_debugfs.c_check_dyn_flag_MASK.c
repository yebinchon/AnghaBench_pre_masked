
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int,char*,int,int,char const*,char*) ;

__attribute__((used)) static void FUNC_1(u64 VAR_1, char *VAR_2, int VAR_3, int *VAR_4,
      int VAR_5, int VAR_6, u32 VAR_7, const char *VAR_8)
{
 u32 VAR_9;

 VAR_9 = VAR_7 << (VAR_6 ? VAR_0 : 0);
 if (VAR_1 & VAR_9) {
  *VAR_4 += FUNC_0(VAR_2 + *VAR_4, VAR_3 - *VAR_4,
       "  0x%08x - HFI%d %s in use, %s device\n",
       VAR_9, VAR_6, VAR_8,
       VAR_5 == VAR_6 ? "this" : "other");
 }
}
