
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nullb_page {int page; int bitmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct nullb_page*) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct nullb_page *VAR_2)
{
 FUNC_1(VAR_0, VAR_2->bitmap);
 if (FUNC_3(VAR_1, VAR_2->bitmap))
  return;
 FUNC_0(VAR_2->page);
 FUNC_2(VAR_2);
}
