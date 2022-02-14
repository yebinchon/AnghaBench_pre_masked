
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r5l_recovery_ctx {int total_pages; int ra_bio; int * ra_pool; } ;
struct r5l_log {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct r5l_log *VAR_0,
     struct r5l_recovery_ctx *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->total_pages; ++VAR_2)
  FUNC_1(VAR_1->ra_pool[VAR_2]);
 FUNC_0(VAR_1->ra_bio);
}
