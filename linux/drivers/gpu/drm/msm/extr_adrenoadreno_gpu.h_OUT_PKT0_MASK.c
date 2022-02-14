
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct msm_ringbuffer {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct msm_ringbuffer*,int) ;
 int FUNC_1 (struct msm_ringbuffer*,int) ;

__attribute__((used)) static inline void
FUNC_2(struct msm_ringbuffer *VAR_1, uint16_t VAR_2, uint16_t VAR_3)
{
 FUNC_1(VAR_1, VAR_3+1);
 FUNC_0(VAR_1, VAR_0 | ((VAR_3-1) << 16) | (VAR_2 & 0x7FFF));
}
