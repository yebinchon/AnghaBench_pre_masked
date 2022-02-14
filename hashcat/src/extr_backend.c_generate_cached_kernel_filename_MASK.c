
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int FUNC_0 (char*,int,char*,char*,int,char const*) ;

void FUNC_1 (const bool VAR_6, const u32 VAR_7, const u32 VAR_8, const u32 VAR_9, const u32 VAR_10, char *VAR_11, const char *VAR_12, char *VAR_13)
{
  if (VAR_10 & VAR_5)
  {
    if (VAR_7 == VAR_0)
    {
      if (VAR_6 == 1)
      {
        FUNC_0 (VAR_13, 255, "%s/kernels/m%05d_a0-optimized.%s.kernel", VAR_11, (int) VAR_9, VAR_12);
      }
      else
      {
        if (VAR_8 == VAR_4)
          FUNC_0 (VAR_13, 255, "%s/kernels/m%05d_a0-optimized.%s.kernel", VAR_11, (int) VAR_9, VAR_12);
        else if (VAR_8 == VAR_2)
          FUNC_0 (VAR_13, 255, "%s/kernels/m%05d_a1-optimized.%s.kernel", VAR_11, (int) VAR_9, VAR_12);
        else if (VAR_8 == VAR_1)
          FUNC_0 (VAR_13, 255, "%s/kernels/m%05d_a3-optimized.%s.kernel", VAR_11, (int) VAR_9, VAR_12);
        else if (VAR_8 == VAR_3)
          FUNC_0 (VAR_13, 255, "%s/kernels/m%05d_a0-optimized.%s.kernel", VAR_11, (int) VAR_9, VAR_12);
      }
    }
    else
    {
      FUNC_0 (VAR_13, 255, "%s/kernels/m%05d-optimized.%s.kernel", VAR_11, (int) VAR_9, VAR_12);
    }
  }
  else
  {
    if (VAR_7 == VAR_0)
    {
      if (VAR_6 == 1)
      {
        FUNC_0 (VAR_13, 255, "%s/kernels/m%05d_a0-pure.%s.kernel", VAR_11, (int) VAR_9, VAR_12);
      }
      else
      {
        if (VAR_8 == VAR_4)
          FUNC_0 (VAR_13, 255, "%s/kernels/m%05d_a0-pure.%s.kernel", VAR_11, (int) VAR_9, VAR_12);
        else if (VAR_8 == VAR_2)
          FUNC_0 (VAR_13, 255, "%s/kernels/m%05d_a1-pure.%s.kernel", VAR_11, (int) VAR_9, VAR_12);
        else if (VAR_8 == VAR_1)
          FUNC_0 (VAR_13, 255, "%s/kernels/m%05d_a3-pure.%s.kernel", VAR_11, (int) VAR_9, VAR_12);
        else if (VAR_8 == VAR_3)
          FUNC_0 (VAR_13, 255, "%s/kernels/m%05d_a0-pure.%s.kernel", VAR_11, (int) VAR_9, VAR_12);
      }
    }
    else
    {
      FUNC_0 (VAR_13, 255, "%s/kernels/m%05d-pure.%s.kernel", VAR_11, (int) VAR_9, VAR_12);
    }
  }
}
