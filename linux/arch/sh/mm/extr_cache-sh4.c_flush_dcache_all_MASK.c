
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long sets; unsigned long entry_shift; unsigned long ways; } ;
struct TYPE_4__ {TYPE_1__ dcache; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int ,unsigned long) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void FUNC_1(void)
{
 unsigned long VAR_2, VAR_3, VAR_4;

 VAR_3 = VAR_0 +
  (VAR_1.dcache.sets <<
   VAR_1.dcache.entry_shift) *
   VAR_1.dcache.ways;

 VAR_4 = 1 << VAR_1.dcache.entry_shift;

 for (VAR_2 = VAR_0; VAR_2 < VAR_3; ) {
  FUNC_0(0, VAR_2); VAR_2 += VAR_4;
  FUNC_0(0, VAR_2); VAR_2 += VAR_4;
  FUNC_0(0, VAR_2); VAR_2 += VAR_4;
  FUNC_0(0, VAR_2); VAR_2 += VAR_4;
  FUNC_0(0, VAR_2); VAR_2 += VAR_4;
  FUNC_0(0, VAR_2); VAR_2 += VAR_4;
  FUNC_0(0, VAR_2); VAR_2 += VAR_4;
  FUNC_0(0, VAR_2); VAR_2 += VAR_4;
 }
}
