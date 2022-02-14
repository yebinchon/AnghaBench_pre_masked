
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int flags; } ;
struct address_space {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (struct address_space*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 struct address_space* FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 unsigned long VAR_2 ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(void *VAR_3)
{
 struct page *VAR_4 = VAR_3;
 unsigned long VAR_5 = (unsigned long)FUNC_3(VAR_4);

 struct address_space *VAR_6 = FUNC_4(VAR_4);

 if (VAR_6 && !FUNC_2(VAR_6))
  FUNC_0(VAR_1, &VAR_4->flags);
 else

  FUNC_1(VAR_0 |
    (VAR_5 & VAR_2), FUNC_5(VAR_4));

 FUNC_6();
}
