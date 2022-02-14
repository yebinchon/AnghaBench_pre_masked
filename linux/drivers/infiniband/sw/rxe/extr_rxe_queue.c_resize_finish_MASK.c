
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxe_queue {int elem_size; } ;


 int VAR_0 ;
 int FUNC_0 (struct rxe_queue*) ;
 int FUNC_1 (struct rxe_queue*) ;
 int FUNC_2 (struct rxe_queue*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct rxe_queue*) ;
 unsigned int FUNC_5 (struct rxe_queue*) ;
 int FUNC_6 (struct rxe_queue*) ;
 int FUNC_7 (struct rxe_queue,struct rxe_queue) ;

__attribute__((used)) static int FUNC_8(struct rxe_queue *VAR_1, struct rxe_queue *VAR_2,
    unsigned int VAR_3)
{
 if (!FUNC_6(VAR_1) && (VAR_3 < FUNC_5(VAR_1)))
  return -VAR_0;

 while (!FUNC_6(VAR_1)) {
  FUNC_3(FUNC_4(VAR_2), FUNC_2(VAR_1),
         VAR_2->elem_size);
  FUNC_1(VAR_2);
  FUNC_0(VAR_1);
 }

 FUNC_7(*VAR_1, *VAR_2);

 return 0;
}
