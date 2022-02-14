
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roce_hem_item {int start; int end; } ;



__attribute__((used)) static inline bool FUNC_0(struct roce_hem_item *VAR_0,
          int VAR_1)
{
 return (VAR_0->start <= VAR_1 && VAR_1 <= VAR_0->end);
}
