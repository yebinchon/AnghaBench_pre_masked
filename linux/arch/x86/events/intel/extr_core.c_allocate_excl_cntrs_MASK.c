
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_excl_cntrs {int core_id; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct intel_excl_cntrs* FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct intel_excl_cntrs *FUNC_3(int VAR_1)
{
 struct intel_excl_cntrs *VAR_2;

 VAR_2 = FUNC_1(sizeof(struct intel_excl_cntrs),
    VAR_0, FUNC_0(VAR_1));
 if (VAR_2) {
  FUNC_2(&VAR_2->lock);
  VAR_2->core_id = -1;
 }
 return VAR_2;
}
