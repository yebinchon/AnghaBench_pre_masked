
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
 int FUNC_0 (char*,int,char*,char*,int) ;

void FUNC_1 (const bool VAR_6, const u32 VAR_7, const u32 VAR_8, const u32 VAR_9, const u32 VAR_10, char *VAR_11, char *VAR_12)
{
  if (VAR_10 & VAR_5)
  {
    if (VAR_7 == VAR_0)
    {
      if (VAR_6 == 1)
      {
        FUNC_0 (VAR_12, 255, "%s/OpenCL/m%05d_a0-optimized.cl", VAR_11, (int) VAR_9);
      }
      else
      {
        if (VAR_8 == VAR_4)
          FUNC_0 (VAR_12, 255, "%s/OpenCL/m%05d_a0-optimized.cl", VAR_11, (int) VAR_9);
        else if (VAR_8 == VAR_2)
          FUNC_0 (VAR_12, 255, "%s/OpenCL/m%05d_a1-optimized.cl", VAR_11, (int) VAR_9);
        else if (VAR_8 == VAR_1)
          FUNC_0 (VAR_12, 255, "%s/OpenCL/m%05d_a3-optimized.cl", VAR_11, (int) VAR_9);
        else if (VAR_8 == VAR_3)
          FUNC_0 (VAR_12, 255, "%s/OpenCL/m%05d_a0-optimized.cl", VAR_11, (int) VAR_9);
      }
    }
    else
    {
      FUNC_0 (VAR_12, 255, "%s/OpenCL/m%05d-optimized.cl", VAR_11, (int) VAR_9);
    }
  }
  else
  {
    if (VAR_7 == VAR_0)
    {
      if (VAR_6 == 1)
      {
        FUNC_0 (VAR_12, 255, "%s/OpenCL/m%05d_a0-pure.cl", VAR_11, (int) VAR_9);
      }
      else
      {
        if (VAR_8 == VAR_4)
          FUNC_0 (VAR_12, 255, "%s/OpenCL/m%05d_a0-pure.cl", VAR_11, (int) VAR_9);
        else if (VAR_8 == VAR_2)
          FUNC_0 (VAR_12, 255, "%s/OpenCL/m%05d_a1-pure.cl", VAR_11, (int) VAR_9);
        else if (VAR_8 == VAR_1)
          FUNC_0 (VAR_12, 255, "%s/OpenCL/m%05d_a3-pure.cl", VAR_11, (int) VAR_9);
        else if (VAR_8 == VAR_3)
          FUNC_0 (VAR_12, 255, "%s/OpenCL/m%05d_a0-pure.cl", VAR_11, (int) VAR_9);
      }
    }
    else
    {
      FUNC_0 (VAR_12, 255, "%s/OpenCL/m%05d-pure.cl", VAR_11, (int) VAR_9);
    }
  }
}
