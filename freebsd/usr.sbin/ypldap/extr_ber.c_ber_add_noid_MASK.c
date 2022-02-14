
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ber_oid {int bo_n; int bo_id; } ;
struct ber_element {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 struct ber_element* FUNC_1 (struct ber_element*,struct ber_oid*) ;

struct ber_element *
FUNC_2(struct ber_element *VAR_1, struct ber_oid *VAR_2, int VAR_3)
{
 struct ber_oid VAR_4;

 if (VAR_3 > VAR_0)
  return (((void*)0));
 VAR_4.bo_n = VAR_3;
 FUNC_0(&VAR_2->bo_id, &VAR_4.bo_id, sizeof(VAR_4.bo_id));

 return (FUNC_1(VAR_1, &VAR_4));
}
