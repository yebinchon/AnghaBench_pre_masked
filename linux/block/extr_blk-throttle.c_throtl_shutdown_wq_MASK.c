
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct throtl_data {int dispatch_work; } ;
struct request_queue {struct throtl_data* td; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct request_queue *VAR_0)
{
 struct throtl_data *VAR_1 = VAR_0->td;

 FUNC_0(&VAR_1->dispatch_work);
}
