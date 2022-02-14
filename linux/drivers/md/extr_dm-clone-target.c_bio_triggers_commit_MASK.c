
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clone {int cmd; } ;
struct bio {int bi_opf; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct clone *VAR_0, struct bio *VAR_1)
{
 return FUNC_1(VAR_1->bi_opf) &&
  FUNC_0(VAR_0->cmd);
}
