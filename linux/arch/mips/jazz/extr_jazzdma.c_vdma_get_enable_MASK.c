
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;

int FUNC_2(int VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0 + (VAR_2 << 5));

 if (VAR_1)
  FUNC_0("vdma_get_enable: channel %d: enable=%d\n", VAR_2,
         VAR_3);

 return VAR_3;
}
