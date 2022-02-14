
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pending_result {scalar_t__ num_pending; int result; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static bool FUNC_1(struct pending_result *VAR_0, int *VAR_1)
{
 FUNC_0(VAR_0->num_pending > 0);

 if (*VAR_1 && !VAR_0->result)
  VAR_0->result = *VAR_1;
 if (--VAR_0->num_pending)
  return 0;

 *VAR_1 = VAR_0->result;
 return 1;
}
