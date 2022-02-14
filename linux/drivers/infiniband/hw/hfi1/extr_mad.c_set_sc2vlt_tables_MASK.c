
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hfi1_devdata {int sc2vl_lock; int sc2vl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*,int) ;
 int FUNC_1 (int ,void*,int) ;
 int FUNC_2 (struct hfi1_devdata*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct hfi1_devdata *VAR_4, void *VAR_5)
{
 u64 *VAR_6 = VAR_5;

 FUNC_0(VAR_5, 1);

 FUNC_2(VAR_4, VAR_0, *VAR_6++);
 FUNC_2(VAR_4, VAR_1, *VAR_6++);
 FUNC_2(VAR_4, VAR_2, *VAR_6++);
 FUNC_2(VAR_4, VAR_3, *VAR_6++);
 FUNC_3(&VAR_4->sc2vl_lock);
 FUNC_1(VAR_4->sc2vl, VAR_5, sizeof(VAR_4->sc2vl));
 FUNC_4(&VAR_4->sc2vl_lock);
 return 0;
}
