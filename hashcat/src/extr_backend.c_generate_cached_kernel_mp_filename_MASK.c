
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 int const VAR_0 ;
 int const VAR_1 ;
 int FUNC_0 (char*,int,char*,char*,char const*) ;

void FUNC_1 (const u32 VAR_2, const u64 VAR_3, char *VAR_4, const char *VAR_5, char *VAR_6)
{
  if ((VAR_2 & VAR_0) && (VAR_3 & VAR_1))
  {
    FUNC_0 (VAR_6, 255, "%s/kernels/markov_be.%s.kernel", VAR_4, VAR_5);
  }
  else
  {
    FUNC_0 (VAR_6, 255, "%s/kernels/markov_le.%s.kernel", VAR_4, VAR_5);
  }
}
