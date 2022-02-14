
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smq_policy {int dummy; } ;
struct entry {int pending_work; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct smq_policy *VAR_0, struct entry *VAR_1)
{
 FUNC_0(!VAR_1->pending_work);
 VAR_1->pending_work = 0;
}
