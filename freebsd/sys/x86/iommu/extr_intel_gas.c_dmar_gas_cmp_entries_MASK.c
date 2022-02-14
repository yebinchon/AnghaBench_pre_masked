
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct dmar_map_entry {scalar_t__ start; scalar_t__ end; } ;


 int FUNC_0 (int,char*) ;

__attribute__((used)) static int
FUNC_1(struct dmar_map_entry *VAR_0, struct dmar_map_entry *VAR_1)
{


 FUNC_0(VAR_0->start <= VAR_0->end, ("inverted entry %p (%jx, %jx)",
     VAR_0, (uintmax_t)VAR_0->start, (uintmax_t)VAR_0->end));
 FUNC_0(VAR_1->start <= VAR_1->end, ("inverted entry %p (%jx, %jx)",
     VAR_1, (uintmax_t)VAR_1->start, (uintmax_t)VAR_1->end));
 FUNC_0(VAR_0->end <= VAR_1->start || VAR_1->end <= VAR_0->start ||
     VAR_0->end == VAR_0->start || VAR_1->end == VAR_1->start,
     ("overlapping entries %p (%jx, %jx) %p (%jx, %jx)",
     VAR_0, (uintmax_t)VAR_0->start, (uintmax_t)VAR_0->end,
     VAR_1, (uintmax_t)VAR_1->start, (uintmax_t)VAR_1->end));

 if (VAR_0->end < VAR_1->end)
  return (-1);
 else if (VAR_1->end < VAR_0->end)
  return (1);
 return (0);
}
