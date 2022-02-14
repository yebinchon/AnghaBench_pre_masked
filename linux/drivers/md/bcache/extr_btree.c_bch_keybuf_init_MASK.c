
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keybuf {int freelist; int lock; int keys; int last_scanned; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct keybuf *VAR_2)
{
 VAR_2->last_scanned = VAR_0;
 VAR_2->keys = VAR_1;

 FUNC_1(&VAR_2->lock);
 FUNC_0(&VAR_2->freelist);
}
