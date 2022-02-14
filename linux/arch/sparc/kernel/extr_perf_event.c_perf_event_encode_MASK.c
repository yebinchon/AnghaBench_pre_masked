
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_map {unsigned long pic_mask; scalar_t__ encoding; } ;



__attribute__((used)) static unsigned long FUNC_0(const struct perf_event_map *VAR_0)
{
 return ((unsigned long) VAR_0->encoding << 16) | VAR_0->pic_mask;
}
