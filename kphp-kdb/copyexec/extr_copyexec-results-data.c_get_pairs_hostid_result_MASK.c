
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree_t ;
struct pair_hostid_result {int host_id; scalar_t__ result; } ;
typedef int a ;
struct TYPE_2__ {unsigned long long volume_id; int disabled; } ;


 TYPE_1__** VAR_0 ;
 int FUNC_0 (int) ;
 struct pair_hostid_result* FUNC_1 (int,int) ;
 int VAR_1 ;
 int FUNC_2 (struct pair_hostid_result*,int*,unsigned long long,int *) ;
 int FUNC_3 (int,char*,int) ;

__attribute__((used)) static struct pair_hostid_result *FUNC_4 (int *VAR_2, unsigned long long VAR_3, tree_t *VAR_4) {
  *VAR_2 = 0;
  struct pair_hostid_result *VAR_5 = FUNC_1 (VAR_1, sizeof (VAR_5[0]));
  if (VAR_5 == ((void*)0)) {
    return ((void*)0);
  }
  FUNC_2 (VAR_5, VAR_2, VAR_3, VAR_4);
  const int VAR_6 = (!(*VAR_2)) ? 1 : (VAR_5[(*VAR_2)-1].host_id + 1);
  int VAR_7;
  for (VAR_7 = VAR_6; VAR_7 <= VAR_1; VAR_7++) {
    if (VAR_0[VAR_7]->volume_id == VAR_3 && !VAR_0[VAR_7]->disabled) {
      FUNC_0 ((*VAR_2) < VAR_1);
      VAR_5[*VAR_2].host_id = VAR_7;
      VAR_5[*VAR_2].result = 0;
      (*VAR_2)++;
    }
  }
  FUNC_3 (4, "get_pairs_hostid_result: *k = %d\n", *VAR_2);
  return VAR_5;
}
