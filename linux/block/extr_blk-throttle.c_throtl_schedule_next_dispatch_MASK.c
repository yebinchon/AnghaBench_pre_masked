
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct throtl_service_queue {int first_pending_disptime; int nr_pending; } ;


 int VAR_0 ;
 int FUNC_0 (struct throtl_service_queue*,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct throtl_service_queue*) ;

__attribute__((used)) static bool FUNC_3(struct throtl_service_queue *VAR_1,
       bool VAR_2)
{

 if (!VAR_1->nr_pending)
  return 1;

 FUNC_2(VAR_1);


 if (VAR_2 || FUNC_1(VAR_1->first_pending_disptime, VAR_0)) {
  FUNC_0(VAR_1, VAR_1->first_pending_disptime);
  return 1;
 }


 return 0;
}
