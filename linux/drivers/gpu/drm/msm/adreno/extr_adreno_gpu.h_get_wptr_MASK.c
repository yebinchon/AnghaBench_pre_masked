
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct msm_ringbuffer {int cur; int start; } ;


 int VAR_0 ;

__attribute__((used)) static inline uint32_t FUNC_0(struct msm_ringbuffer *VAR_1)
{
 return (VAR_1->cur - VAR_1->start) % (VAR_0 >> 2);
}
