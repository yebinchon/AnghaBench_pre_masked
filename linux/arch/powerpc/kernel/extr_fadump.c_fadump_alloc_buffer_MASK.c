
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (unsigned long) ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (unsigned long,int) ;
 int FUNC_2 (struct page*) ;
 struct page* FUNC_3 (void*) ;

__attribute__((used)) static void *FUNC_4(unsigned long VAR_3)
{
 unsigned long VAR_4, VAR_5;
 struct page *VAR_6;
 void *VAR_7;

 VAR_7 = FUNC_1(VAR_3, VAR_0 | VAR_2);
 if (!VAR_7)
  return ((void*)0);

 VAR_4 = FUNC_0(VAR_3) / VAR_1;
 VAR_6 = FUNC_3(VAR_7);
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
  FUNC_2(VAR_6 + VAR_5);
 return VAR_7;
}
