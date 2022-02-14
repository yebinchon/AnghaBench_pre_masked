
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct page {int flags; } ;


 unsigned int FUNC_0 (unsigned long) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,struct page*) ;
 int FUNC_2 (void*,void*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct page*,int ) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (unsigned long,int ) ;
 int FUNC_10 (int ,int *) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_11(struct page *VAR_6,
 struct page *VAR_7, unsigned long VAR_8, struct vm_area_struct *VAR_9)
{
 unsigned int VAR_10 = FUNC_0(VAR_8);
 unsigned long VAR_11, VAR_12;

 if (!FUNC_10(VAR_4, &VAR_7->flags))
  FUNC_1(FUNC_6(VAR_7), VAR_7);


 FUNC_3(FUNC_5(VAR_6));





 FUNC_7(&VAR_5);

 VAR_11 = VAR_0 + (VAR_10 << VAR_3);
 VAR_12 = VAR_1 + (VAR_10 << VAR_3);

 FUNC_9(VAR_11, FUNC_4(VAR_7, VAR_2));
 FUNC_9(VAR_12, FUNC_4(VAR_6, VAR_2));

 FUNC_2((void *)VAR_12, (void *)VAR_11);

 FUNC_8(&VAR_5);
}
