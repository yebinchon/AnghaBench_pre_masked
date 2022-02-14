
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mock_hwsp_freelist {int cachelines; int * history; } ;
struct intel_timeline {int dummy; } ;


 int FUNC_0 (struct intel_timeline*) ;
 int FUNC_1 (struct intel_timeline*) ;
 int FUNC_2 (int *,int ) ;
 struct intel_timeline* FUNC_3 (int *,struct intel_timeline*) ;

__attribute__((used)) static void FUNC_4(struct mock_hwsp_freelist *VAR_0,
          unsigned int VAR_1,
          struct intel_timeline *VAR_2)
{
 VAR_2 = FUNC_3(&VAR_0->history[VAR_1], VAR_2);
 if (VAR_2) {
  FUNC_2(&VAR_0->cachelines, FUNC_0(VAR_2));
  FUNC_1(VAR_2);
 }
}
