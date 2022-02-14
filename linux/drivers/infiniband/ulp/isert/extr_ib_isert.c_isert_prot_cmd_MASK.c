
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_cmd {scalar_t__ prot_op; } ;
struct isert_conn {scalar_t__ pi_support; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline bool
FUNC_0(struct isert_conn *VAR_1, struct se_cmd *VAR_2)
{
 return (VAR_1->pi_support &&
  VAR_2->prot_op != VAR_0);
}
