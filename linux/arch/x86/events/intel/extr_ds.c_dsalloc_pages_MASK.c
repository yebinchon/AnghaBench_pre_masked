
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 struct page* FUNC_0 (int,int,unsigned int) ;
 int FUNC_1 (int) ;
 unsigned int FUNC_2 (size_t) ;
 void* FUNC_3 (struct page*) ;

__attribute__((used)) static void *FUNC_4(size_t VAR_1, gfp_t VAR_2, int VAR_3)
{
 unsigned int VAR_4 = FUNC_2(VAR_1);
 int VAR_5 = FUNC_1(VAR_3);
 struct page *VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_2 | VAR_0, VAR_4);
 return VAR_6 ? FUNC_3(VAR_6) : ((void*)0);
}
