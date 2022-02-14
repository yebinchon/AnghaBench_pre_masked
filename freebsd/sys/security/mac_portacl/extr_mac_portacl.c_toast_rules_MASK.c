
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rulehead {int dummy; } ;
struct rule {int dummy; } ;


 int VAR_0 ;
 struct rule* FUNC_0 (struct rulehead*) ;
 int FUNC_1 (struct rulehead*,struct rule*,int ) ;
 int FUNC_2 (struct rule*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(struct rulehead *VAR_2)
{
 struct rule *VAR_3;

 while ((VAR_3 = FUNC_0(VAR_2)) != ((void*)0)) {
  FUNC_1(VAR_2, VAR_3, VAR_1);
  FUNC_2(VAR_3, VAR_0);
 }
}
