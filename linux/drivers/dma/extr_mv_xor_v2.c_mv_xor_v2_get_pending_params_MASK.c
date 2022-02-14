
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mv_xor_v2_device {scalar_t__ dma_base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline
int FUNC_1(struct mv_xor_v2_device *VAR_5,
     int *VAR_6)
{
 u32 VAR_7;

 VAR_7 = FUNC_0(VAR_5->dma_base + VAR_0);


 *VAR_6 = ((VAR_7 >> VAR_4) &
   VAR_3);


 return ((VAR_7 >> VAR_2) &
  VAR_1);
}
