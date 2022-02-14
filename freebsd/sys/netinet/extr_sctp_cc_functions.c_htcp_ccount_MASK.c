
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct htcp {int minRTT; } ;


 int FUNC_0 (struct htcp*) ;

__attribute__((used)) static inline uint32_t
FUNC_1(struct htcp *VAR_0)
{
 return (FUNC_0(VAR_0) / VAR_0->minRTT);
}
