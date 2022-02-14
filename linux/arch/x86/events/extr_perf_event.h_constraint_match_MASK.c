
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct event_constraint {scalar_t__ cmask; scalar_t__ code; scalar_t__ size; } ;



__attribute__((used)) static inline bool FUNC_0(struct event_constraint *VAR_0, u64 VAR_1)
{
 return ((VAR_1 & VAR_0->cmask) - VAR_0->code) <= (u64)VAR_0->size;
}
