
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efa_dev {int ibdev; } ;
struct efa_admin_aenq_entry {int dummy; } ;


 int FUNC_0 (int *,char*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0,
           struct efa_admin_aenq_entry *VAR_1)
{
 struct efa_dev *VAR_2 = (struct efa_dev *)VAR_0;

 FUNC_0(&VAR_2->ibdev,
    "Unknown event was received or event with unimplemented handler\n");
}
