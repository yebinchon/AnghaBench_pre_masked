
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dtl {int lock; scalar_t__ buf_entries; int * buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dtl*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct dtl *VAR_2)
{
 FUNC_3(&VAR_2->lock);
 FUNC_0(VAR_2);
 FUNC_1(VAR_1, VAR_2->buf);
 VAR_2->buf = ((void*)0);
 VAR_2->buf_entries = 0;
 FUNC_4(&VAR_2->lock);
 FUNC_2(&VAR_0);
}
