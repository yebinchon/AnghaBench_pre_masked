
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nullb_page {int bitmap; int page; } ;
typedef int gfp_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct nullb_page*) ;
 struct nullb_page* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static struct nullb_page *FUNC_4(gfp_t VAR_0)
{
 struct nullb_page *VAR_1;

 VAR_1 = FUNC_2(sizeof(struct nullb_page), VAR_0);
 if (!VAR_1)
  goto out;

 VAR_1->page = FUNC_0(VAR_0, 0);
 if (!VAR_1->page)
  goto out_freepage;

 FUNC_3(VAR_1->bitmap, 0, sizeof(VAR_1->bitmap));
 return VAR_1;
out_freepage:
 FUNC_1(VAR_1);
out:
 return ((void*)0);
}
