
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct memtype {scalar_t__ start; scalar_t__ end; } ;



__attribute__((used)) static int FUNC_0(struct memtype *VAR_0, u64 VAR_1, u64 VAR_2)
{
 if (VAR_0->start >= VAR_2 || VAR_0->end <= VAR_1)
  return 0;

 return 1;
}
