
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct error_descr {scalar_t__ type; int const mask; char* descr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,size_t,char*,char*,char*) ;

__attribute__((used)) static void FUNC_1(char *VAR_1, size_t VAR_2,
      const struct error_descr *VAR_3,
      const uint64_t VAR_4)
{
 int VAR_5 = 0;

 while (VAR_3->type && VAR_3->mask && VAR_3->descr) {
  if (VAR_4 & VAR_3->mask) {
   VAR_5 = FUNC_0(VAR_1, VAR_2, "\n\t%s, %s",
           VAR_3->type == VAR_0 ?
      "Corrected" : "Uncorrected",
           VAR_3->descr);
   VAR_1 += VAR_5;
   VAR_2 -= VAR_5;
  }
  VAR_3++;
 }
}
