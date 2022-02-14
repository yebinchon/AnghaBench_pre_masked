
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct page {int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct page*) ;
 void* FUNC_1 (struct page*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*,void*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct page*,int ) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (int ,int *) ;

void FUNC_10(struct page *VAR_4, struct page *VAR_5,
 unsigned long VAR_6, struct vm_area_struct *VAR_7)
{
 void *VAR_8 = FUNC_1(VAR_4);

 if (!FUNC_9(VAR_1, &VAR_5->flags))
  FUNC_0(FUNC_5(VAR_5), VAR_5);

 FUNC_6(&VAR_2);

 FUNC_8(VAR_0, FUNC_4(VAR_5, VAR_3));

 FUNC_3((void *)VAR_0, VAR_8);

 FUNC_7(&VAR_2);

 FUNC_2(VAR_8);
}
