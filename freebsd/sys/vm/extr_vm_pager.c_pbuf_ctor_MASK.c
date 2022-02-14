
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buf {scalar_t__ b_error; int * b_iodone; scalar_t__ b_ioflags; scalar_t__ b_flags; scalar_t__ b_xflags; int b_kvabase; int b_data; scalar_t__ b_qindex; void* b_wcred; void* b_rcred; int * b_bufobj; int * b_vp; } ;


 int FUNC_0 (struct buf*,int ,int *) ;
 int VAR_0 ;
 void* VAR_1 ;

__attribute__((used)) static int
FUNC_1(void *VAR_2, int VAR_3, void *VAR_4, int VAR_5)
{
 struct buf *VAR_6 = VAR_2;

 VAR_6->b_vp = ((void*)0);
 VAR_6->b_bufobj = ((void*)0);


 VAR_6->b_rcred = VAR_1;
 VAR_6->b_wcred = VAR_1;
 VAR_6->b_qindex = 0;
 VAR_6->b_data = VAR_6->b_kvabase;
 VAR_6->b_xflags = 0;
 VAR_6->b_flags = 0;
 VAR_6->b_ioflags = 0;
 VAR_6->b_iodone = ((void*)0);
 VAR_6->b_error = 0;
 FUNC_0(VAR_6, VAR_0, ((void*)0));

 return (0);
}
