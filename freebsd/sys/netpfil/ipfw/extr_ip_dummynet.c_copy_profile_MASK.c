
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dn_profile {int dummy; } ;
struct dn_id {int len; } ;
struct copy_args {int end; int* start; } ;


 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 int FUNC_1 (int,struct dn_profile*,int) ;

__attribute__((used)) static int
FUNC_2(struct copy_args *VAR_1, struct dn_profile *VAR_2)
{
 int VAR_3 = VAR_1->end - *VAR_1->start;

 int VAR_4 = sizeof(struct dn_profile) -
  VAR_0*sizeof(int);

 if (VAR_2 == ((void*)0))
  return 0;
 if (VAR_3 < VAR_4) {
  FUNC_0("error have %d need %d", VAR_3, VAR_4);
  return 1;
 }
 FUNC_1(*VAR_1->start, VAR_2, VAR_4);
 ((struct dn_id *)(*VAR_1->start))->len = VAR_4;
 *VAR_1->start += VAR_4;
 return 0;
}
