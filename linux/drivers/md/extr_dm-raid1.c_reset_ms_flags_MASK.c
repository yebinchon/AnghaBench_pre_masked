
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mirror_set {unsigned int nr_mirrors; TYPE_1__* mirror; scalar_t__ leg_failure; } ;
struct TYPE_2__ {scalar_t__ error_type; int error_count; } ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(struct mirror_set *VAR_0)
{
 unsigned int VAR_1;

 VAR_0->leg_failure = 0;
 for (VAR_1 = 0; VAR_1 < VAR_0->nr_mirrors; VAR_1++) {
  FUNC_0(&(VAR_0->mirror[VAR_1].error_count), 0);
  VAR_0->mirror[VAR_1].error_type = 0;
 }
}
