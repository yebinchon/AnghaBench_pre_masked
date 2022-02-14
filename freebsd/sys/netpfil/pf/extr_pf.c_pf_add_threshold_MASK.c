
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct pf_threshold {int last; int seconds; int count; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct pf_threshold *VAR_2)
{
 u_int32_t VAR_3 = VAR_1, VAR_4 = VAR_3 - VAR_2->last;

 if (VAR_4 >= VAR_2->seconds)
  VAR_2->count = 0;
 else
  VAR_2->count -= VAR_2->count * VAR_4 /
      VAR_2->seconds;
 VAR_2->count += VAR_0;
 VAR_2->last = VAR_3;
}
