
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int __be64 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct page* FUNC_0 (int,int,scalar_t__) ;
 int FUNC_1 (int *,int ,unsigned long) ;
 int * FUNC_2 (struct page*) ;
 int FUNC_3 (char*,unsigned int) ;

__attribute__((used)) static __be64 *FUNC_4(int VAR_3, unsigned int VAR_4)
{
 struct page *VAR_5 = ((void*)0);
 __be64 *VAR_6;

 VAR_5 = FUNC_0(VAR_3, VAR_0 | VAR_2,
   VAR_4 - VAR_1);
 if (!VAR_5) {
  FUNC_3("Failed to allocate a TCE memory, level shift=%d\n",
    VAR_4);
  return ((void*)0);
 }
 VAR_6 = FUNC_2(VAR_5);
 FUNC_1(VAR_6, 0, 1UL << VAR_4);

 return VAR_6;
}
