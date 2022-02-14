
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_port_data {scalar_t__ netdev; int ndev_hash_link; } ;


 int FUNC_0 (int ,int *,uintptr_t) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(struct ib_port_data *VAR_2)
{
 unsigned long VAR_3;

 FUNC_3();

 FUNC_4(&VAR_1, VAR_3);
 if (FUNC_2(&VAR_2->ndev_hash_link)) {
  FUNC_1(&VAR_2->ndev_hash_link);
  FUNC_5(&VAR_1, VAR_3);




  FUNC_6();
  FUNC_4(&VAR_1, VAR_3);
 }
 if (VAR_2->netdev)
  FUNC_0(VAR_0, &VAR_2->ndev_hash_link,
        (uintptr_t)VAR_2->netdev);
 FUNC_5(&VAR_1, VAR_3);
}
