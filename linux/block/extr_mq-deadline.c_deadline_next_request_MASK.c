
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int q; } ;
struct deadline_data {int zone_lock; struct request** next_rq; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct request*) ;
 struct request* FUNC_3 (struct request*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static struct request *
FUNC_6(struct deadline_data *VAR_2, int VAR_3)
{
 struct request *VAR_4;
 unsigned long VAR_5;

 if (FUNC_0(VAR_3 != VAR_0 && VAR_3 != VAR_1))
  return ((void*)0);

 VAR_4 = VAR_2->next_rq[VAR_3];
 if (!VAR_4)
  return ((void*)0);

 if (VAR_3 == VAR_0 || !FUNC_1(VAR_4->q))
  return VAR_4;





 FUNC_4(&VAR_2->zone_lock, VAR_5);
 while (VAR_4) {
  if (FUNC_2(VAR_4))
   break;
  VAR_4 = FUNC_3(VAR_4);
 }
 FUNC_5(&VAR_2->zone_lock, VAR_5);

 return VAR_4;
}
