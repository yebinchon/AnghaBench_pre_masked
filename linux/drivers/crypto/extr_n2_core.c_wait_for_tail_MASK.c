
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spu_queue {unsigned long tail; unsigned long head; int qhandle; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (char*) ;
 unsigned long FUNC_1 (int ,unsigned long*) ;

__attribute__((used)) static unsigned long FUNC_2(struct spu_queue *VAR_1)
{
 unsigned long VAR_2, VAR_3;

 do {
  VAR_3 = FUNC_1(VAR_1->qhandle, &VAR_2);
  if (VAR_3 != VAR_0) {
   FUNC_0("Hypervisor error on gethead\n");
   break;
  }
  if (VAR_2 == VAR_1->tail) {
   VAR_1->head = VAR_2;
   break;
  }
 } while (1);
 return VAR_3;
}
