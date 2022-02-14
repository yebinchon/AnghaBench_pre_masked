
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct page* FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct page*) ;

__attribute__((used)) static struct page *FUNC_4(gfp_t VAR_2)
{
 struct page *VAR_3;

 VAR_3 = FUNC_0(VAR_2 | VAR_1,
    FUNC_1(VAR_0));
 if (!VAR_3)
  return ((void*)0);


 FUNC_2(FUNC_3(VAR_3), VAR_0);

 return VAR_3;
}
