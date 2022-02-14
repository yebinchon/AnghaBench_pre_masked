
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int pt_frag_refcount; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (struct page*) ;
 struct page* FUNC_3 (void*) ;

__attribute__((used)) static void FUNC_4(void *VAR_3)
{
 int VAR_4;
 struct page *VAR_5;

 VAR_5 = FUNC_3(VAR_3);

 VAR_4 = ((unsigned long)VAR_3 & ~VAR_0) >> VAR_2;

 if (FUNC_1(VAR_1 - VAR_4, &VAR_5->pt_frag_refcount)) {
  FUNC_2(VAR_5);
  FUNC_0(VAR_5);
 }
}
