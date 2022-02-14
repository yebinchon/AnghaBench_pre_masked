
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeset {int dummy; } ;
struct era_metadata {int current_writeset; } ;
typedef int dm_block_t ;


 struct writeset* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct writeset*,int ) ;

__attribute__((used)) static bool FUNC_4(struct era_metadata *VAR_0, dm_block_t VAR_1)
{
 bool VAR_2;
 struct writeset *VAR_3;

 FUNC_1();
 VAR_3 = FUNC_0(VAR_0->current_writeset);
 VAR_2 = FUNC_3(VAR_3, VAR_1);
 FUNC_2();

 return VAR_2;
}
