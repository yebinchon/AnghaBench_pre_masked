
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct disambiguate_state {int candidate_ok; int candidate; int cb_data; int repo; scalar_t__ (* fn ) (int ,int *,int ) ;int disambiguate_fn_used; int candidate_checked; int candidate_exists; scalar_t__ ambiguous; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct object_id*,int *) ;
 scalar_t__ FUNC_1 (int ,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct disambiguate_state *VAR_2,
     struct object_id *VAR_3)
{
 if (VAR_2->ambiguous)
  return VAR_1;

 if (!VAR_2->candidate_exists)
  return VAR_0;

 if (!VAR_2->candidate_checked)
  VAR_2->candidate_ok = (!VAR_2->disambiguate_fn_used ||
        VAR_2->fn(VAR_2->repo, &VAR_2->candidate, VAR_2->cb_data));

 if (!VAR_2->candidate_ok)
  return VAR_1;

 FUNC_0(VAR_3, &VAR_2->candidate);
 return 0;
}
