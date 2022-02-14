
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {TYPE_1__* elevator; } ;
struct elevator_type {int dummy; } ;
typedef int elevator_name ;
struct TYPE_2__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct request_queue*) ;
 struct elevator_type* FUNC_1 (struct request_queue*,int ,int) ;
 scalar_t__ FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (struct elevator_type*) ;
 int FUNC_4 (struct request_queue*,struct elevator_type*) ;
 int FUNC_5 (char*,char const*,int) ;
 int FUNC_6 (char const*,char*,int) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8(struct request_queue *VAR_3, const char *VAR_4)
{
 char VAR_5[VAR_1];
 struct elevator_type *VAR_6;


 if (!FUNC_0(VAR_3))
  return -VAR_2;




 if (!FUNC_6(VAR_4, "none", 4)) {
  if (!VAR_3->elevator)
   return 0;
  return FUNC_4(VAR_3, ((void*)0));
 }

 FUNC_5(VAR_5, VAR_4, sizeof(VAR_5));
 VAR_6 = FUNC_1(VAR_3, FUNC_7(VAR_5), 1);
 if (!VAR_6)
  return -VAR_0;

 if (VAR_3->elevator &&
     FUNC_2(VAR_3->elevator->type, VAR_5, 0)) {
  FUNC_3(VAR_6);
  return 0;
 }

 return FUNC_4(VAR_3, VAR_6);
}
