
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r9a06g032_priv {int lock; } ;
struct r9a06g032_gate {scalar_t__ midle; scalar_t__ ready; scalar_t__ reset; scalar_t__ gate; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct r9a06g032_priv*,scalar_t__,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(struct r9a06g032_priv *VAR_0,
         struct r9a06g032_gate *VAR_1, int VAR_2)
{
 unsigned long VAR_3;

 FUNC_0(!VAR_1->gate);

 FUNC_2(&VAR_0->lock, VAR_3);
 FUNC_1(VAR_0, VAR_1->gate, VAR_2);

 if (VAR_1->reset)
  FUNC_1(VAR_0, VAR_1->reset, 1);
 FUNC_3(&VAR_0->lock, VAR_3);


 FUNC_4(5);





 if (VAR_1->ready || VAR_1->midle) {
  FUNC_2(&VAR_0->lock, VAR_3);
  if (VAR_1->ready)
   FUNC_1(VAR_0, VAR_1->ready, VAR_2);

  if (VAR_1->midle)
   FUNC_1(VAR_0, VAR_1->midle, !VAR_2);
  FUNC_3(&VAR_0->lock, VAR_3);
 }

}
