
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int flags; } ;
struct address_space {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct address_space*) ;
 int FUNC_4 (struct page*) ;
 struct address_space* FUNC_5 (struct page*) ;

__attribute__((used)) static void FUNC_6(void *VAR_1)
{
 struct page *VAR_2 = VAR_1;
 struct address_space *VAR_3 = FUNC_5(VAR_2);

 if (VAR_3 && !FUNC_3(VAR_3))
  FUNC_2(VAR_0, &VAR_2->flags);
 else
  FUNC_0(FUNC_1(FUNC_4(VAR_2)));
}
