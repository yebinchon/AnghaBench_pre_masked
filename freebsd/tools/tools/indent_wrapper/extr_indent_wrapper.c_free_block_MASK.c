
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block {int dummy; } ;
typedef int block_head_t ;


 struct block* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct block*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct block*) ;

__attribute__((used)) static void
FUNC_3(block_head_t *VAR_1)
{
 struct block *VAR_2;

 while ((VAR_2 = FUNC_0(VAR_1))) {
  FUNC_1(VAR_1, VAR_2, VAR_0);
  FUNC_2(VAR_2);
 }
}
