
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvt_qpn_table {int lock; } ;
struct rvt_qpn_map {void* page; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct rvt_qpn_table *VAR_1,
    struct rvt_qpn_map *VAR_2)
{
 unsigned long VAR_3 = FUNC_1(VAR_0);





 FUNC_2(&VAR_1->lock);
 if (VAR_2->page)
  FUNC_0(VAR_3);
 else
  VAR_2->page = (void *)VAR_3;
 FUNC_3(&VAR_1->lock);
}
