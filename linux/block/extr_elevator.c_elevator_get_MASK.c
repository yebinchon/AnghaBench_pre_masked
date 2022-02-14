
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int required_elevator_features; } ;
struct elevator_type {int elevator_owner; } ;


 struct elevator_type* FUNC_0 (char const*,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static struct elevator_type *FUNC_5(struct request_queue *VAR_1,
       const char *VAR_2, bool VAR_3)
{
 struct elevator_type *VAR_4;

 FUNC_2(&VAR_0);

 VAR_4 = FUNC_0(VAR_2, VAR_1->required_elevator_features);
 if (!VAR_4 && VAR_3) {
  FUNC_3(&VAR_0);
  FUNC_1("%s-iosched", VAR_2);
  FUNC_2(&VAR_0);
  VAR_4 = FUNC_0(VAR_2, VAR_1->required_elevator_features);
 }

 if (VAR_4 && !FUNC_4(VAR_4->elevator_owner))
  VAR_4 = ((void*)0);

 FUNC_3(&VAR_0);
 return VAR_4;
}
