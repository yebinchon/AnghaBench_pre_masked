
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct disambiguate_state {int ambiguous; int candidate_exists; int candidate_checked; int disambiguate_fn_used; scalar_t__ candidate_ok; int cb_data; int repo; scalar_t__ (* fn ) (int ,struct object_id const*,int ) ;struct object_id const candidate; scalar_t__ always_call_fn; } ;


 int FUNC_0 (struct object_id const*,struct object_id const*) ;
 scalar_t__ FUNC_1 (struct object_id const*,struct object_id const*) ;
 scalar_t__ FUNC_2 (int ,struct object_id const*,int ) ;
 scalar_t__ FUNC_3 (int ,struct object_id const*,int ) ;
 scalar_t__ FUNC_4 (int ,struct object_id const*,int ) ;

__attribute__((used)) static void FUNC_5(struct disambiguate_state *VAR_0, const struct object_id *VAR_1)
{
 if (VAR_0->always_call_fn) {
  VAR_0->ambiguous = VAR_0->fn(VAR_0->repo, VAR_1, VAR_0->cb_data) ? 1 : 0;
  return;
 }
 if (!VAR_0->candidate_exists) {

  FUNC_0(&VAR_0->candidate, VAR_1);
  VAR_0->candidate_exists = 1;
  return;
 } else if (FUNC_1(&VAR_0->candidate, VAR_1)) {

  return;
 }

 if (!VAR_0->fn) {

  VAR_0->ambiguous = 1;
  return;
 }

 if (!VAR_0->candidate_checked) {
  VAR_0->candidate_ok = VAR_0->fn(VAR_0->repo, &VAR_0->candidate, VAR_0->cb_data);
  VAR_0->disambiguate_fn_used = 1;
  VAR_0->candidate_checked = 1;
 }

 if (!VAR_0->candidate_ok) {

  FUNC_0(&VAR_0->candidate, VAR_1);
  VAR_0->candidate_checked = 0;
  return;
 }


 if (VAR_0->fn(VAR_0->repo, VAR_1, VAR_0->cb_data)) {




  VAR_0->candidate_ok = 0;
  VAR_0->ambiguous = 1;
 }


}
