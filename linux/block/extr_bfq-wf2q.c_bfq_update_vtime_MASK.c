
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct bfq_service_tree {scalar_t__ vtime; } ;


 int FUNC_0 (struct bfq_service_tree*) ;

__attribute__((used)) static void FUNC_1(struct bfq_service_tree *VAR_0, u64 VAR_1)
{
 if (VAR_1 > VAR_0->vtime) {
  VAR_0->vtime = VAR_1;
  FUNC_0(VAR_0);
 }
}
