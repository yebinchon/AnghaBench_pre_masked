
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oid_array {int nr; int * oid; } ;
struct fetch_negotiator {int dummy; } ;


 int FUNC_0 (int ,struct fetch_negotiator*) ;
 int FUNC_1 (struct fetch_negotiator*,int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct fetch_negotiator *VAR_1,
        const struct oid_array *VAR_2)
{
 int VAR_3;

 if (!VAR_2) {
  FUNC_0(VAR_0, VAR_1);
  return;
 }

 for (VAR_3 = 0; VAR_3 < VAR_2->nr; VAR_3++)
  FUNC_1(VAR_1, ((void*)0),
        &VAR_2->oid[VAR_3]);
 return;
}
