
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r1conf {int r1buf_pool; } ;


 int VAR_0 ;
 int FUNC_0 (struct r1conf*,int) ;
 int FUNC_1 (struct r1conf*,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct r1conf *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  FUNC_1(VAR_1, VAR_2);
  FUNC_0(VAR_1, VAR_2);
 }

 FUNC_2(&VAR_1->r1buf_pool);
}
