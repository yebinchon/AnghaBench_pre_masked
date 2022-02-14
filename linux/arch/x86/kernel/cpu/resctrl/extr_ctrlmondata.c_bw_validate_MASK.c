
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long min_bw; scalar_t__ bw_gran; int delay_linear; } ;
struct rdt_resource {unsigned long default_ctrl; TYPE_1__ membw; } ;


 int FUNC_0 (struct rdt_resource*) ;
 int FUNC_1 (char*,int,unsigned long*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;
 unsigned long FUNC_4 (unsigned long,unsigned long) ;

__attribute__((used)) static bool FUNC_5(char *VAR_0, unsigned long *VAR_1, struct rdt_resource *VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;




 if (!VAR_2->membw.delay_linear) {
  FUNC_3("No support for non-linear MB domains\n");
  return 0;
 }

 VAR_4 = FUNC_1(VAR_0, 10, &VAR_3);
 if (VAR_4) {
  FUNC_2("Non-decimal digit in MB value %s\n", VAR_0);
  return 0;
 }

 if ((VAR_3 < VAR_2->membw.min_bw || VAR_3 > VAR_2->default_ctrl) &&
     !FUNC_0(VAR_2)) {
  FUNC_2("MB value %ld out of range [%d,%d]\n", VAR_3,
        VAR_2->membw.min_bw, VAR_2->default_ctrl);
  return 0;
 }

 *VAR_1 = FUNC_4(VAR_3, (unsigned long)VAR_2->membw.bw_gran);
 return 1;
}
