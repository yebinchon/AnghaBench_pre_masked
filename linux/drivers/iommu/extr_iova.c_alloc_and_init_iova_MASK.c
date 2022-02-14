
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iova {unsigned long pfn_lo; unsigned long pfn_hi; } ;


 struct iova* FUNC_0 () ;

__attribute__((used)) static inline struct iova *
FUNC_1(unsigned long VAR_0, unsigned long VAR_1)
{
 struct iova *VAR_2;

 VAR_2 = FUNC_0();
 if (VAR_2) {
  VAR_2->pfn_lo = VAR_0;
  VAR_2->pfn_hi = VAR_1;
 }

 return VAR_2;
}
