
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intr_vector {scalar_t__ iv_refcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int,int ,struct intr_vector*) ;
 int VAR_4 ;
 int VAR_5 ;
 struct intr_vector* VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int
FUNC_4(int VAR_7, void *VAR_8)
{
 struct intr_vector *VAR_9;
 int VAR_10;

 if (VAR_7 < 0 || VAR_7 >= VAR_1)
  return (VAR_0);
 VAR_10 = FUNC_0(VAR_8);
 if (VAR_10 == 0) {




  FUNC_2(&VAR_5);
  VAR_9 = &VAR_6[VAR_7];
  VAR_9->iv_refcnt--;
  if (VAR_9->iv_refcnt == 0) {




   FUNC_1(VAR_2, VAR_3, VAR_7,
       VAR_4, VAR_9);
  }
  FUNC_3(&VAR_5);
 }
 return (VAR_10);
}
