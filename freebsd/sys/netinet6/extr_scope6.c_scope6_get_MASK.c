
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scope6_id {int dummy; } ;
struct ifnet {int dummy; } ;
struct epoch_tracker {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct epoch_tracker) ;
 int FUNC_1 (struct epoch_tracker) ;
 struct scope6_id* FUNC_2 (struct ifnet*) ;

__attribute__((used)) static int
FUNC_3(struct ifnet *VAR_1, struct scope6_id *VAR_2)
{
 struct epoch_tracker VAR_3;
 struct scope6_id *VAR_4;


 FUNC_0(VAR_3);
 VAR_4 = FUNC_2(VAR_1);
 if (VAR_4 == ((void*)0)) {
  FUNC_1(VAR_3);
  return (VAR_0);
 }

 *VAR_2 = *VAR_4;

 FUNC_1(VAR_3);
 return (0);
}
