
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mm_struct {int dummy; } ;
struct TYPE_2__ {unsigned long long x86_virt_bits; } ;


 unsigned long long VAR_0 ;
 unsigned long long VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (struct mm_struct*) ;

__attribute__((used)) static inline unsigned long FUNC_1(struct mm_struct *VAR_3)
{
 unsigned long long VAR_4;
 unsigned long long VAR_5 = (1ULL << 30);





 if (!FUNC_0(VAR_3))
  return (4ULL * VAR_5) / VAR_0;






 VAR_4 = (1ULL << VAR_2.x86_virt_bits);
 return VAR_4 / VAR_1;
}
