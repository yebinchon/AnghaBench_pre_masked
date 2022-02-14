
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct page* FUNC_0 (int,int,int ) ;
 void* FUNC_1 (struct page*) ;

void *FUNC_2(int VAR_2)
{
 struct page *VAR_3;
 void *VAR_4 = ((void*)0);

 VAR_3 = FUNC_0(VAR_2, VAR_0 | VAR_1, 0);
 if (VAR_3)
  VAR_4 = FUNC_1(VAR_3);
 return VAR_4;
}
