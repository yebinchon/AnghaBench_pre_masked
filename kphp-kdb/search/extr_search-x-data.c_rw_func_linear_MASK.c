
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rate_weight {int p; } ;
struct item {int dummy; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (struct item*,int ) ;

__attribute__((used)) static double FUNC_1 (struct item *VAR_1, struct rate_weight *VAR_2) {
  unsigned VAR_3 = FUNC_0 (VAR_1, VAR_2->p);
  VAR_3 -= VAR_0;
  return 1.0 - VAR_3 * (1.0 / 4294967295.0);
}
