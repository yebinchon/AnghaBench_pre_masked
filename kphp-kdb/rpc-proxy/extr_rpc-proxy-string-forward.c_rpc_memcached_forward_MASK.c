
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_cluster_bucket {TYPE_1__* methods; } ;
struct TYPE_4__ {long long step; long long tot_buckets; struct rpc_cluster_bucket* buckets; } ;
struct TYPE_3__ {scalar_t__ (* get_state ) (struct rpc_cluster_bucket*) ;} ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 long long FUNC_0 (char const*,int) ;
 int FUNC_1 (char*,char const*,int) ;
 scalar_t__ FUNC_2 (struct rpc_cluster_bucket*) ;

int FUNC_3 (void **VAR_2, void **VAR_3) {
  const char *VAR_4 = *VAR_3;
  int VAR_5 = (long)*(VAR_3 + 1);
  int VAR_6 = 0;
  if (VAR_5 >= 4 && *VAR_4 == '#' && *(VAR_4 + 1) == '#') {
    VAR_6 = 2;
    while (VAR_6 < VAR_5 && VAR_4[VAR_6] != '#') {
      VAR_6 ++;
    }
    if (VAR_6 < VAR_5 - 1 && VAR_4[VAR_6] == '#' && VAR_4[VAR_6 + 1] == '#') {
      VAR_6 += 2;
    } else {
      VAR_6 = 0;
    }
    if (VAR_6 >= VAR_5) {
      VAR_6 = 0;
    }
  }
  long long VAR_7 = FUNC_0 (VAR_4 + VAR_6, VAR_5 - VAR_6);
  if (VAR_0->step > 0) {
    VAR_7 /= VAR_0->step;
  }
  struct rpc_cluster_bucket *VAR_8 = &VAR_0->buckets[VAR_7 % VAR_0->tot_buckets];
  int VAR_9 = 0;
  char VAR_10[VAR_5 + 2];
  while (VAR_8->methods->get_state (VAR_8) < 0) {
    if (!VAR_9) {
      FUNC_1 (VAR_10+2, VAR_4 + VAR_6, VAR_5 - VAR_6);
      VAR_10[1] = '0';
      VAR_10[0] = '0';
    }
    if (++VAR_9 > VAR_1) {
      *(VAR_3 + 2) = 0;
      return 0;
    }
    VAR_10[1]++;
    if (VAR_9 < 10) {
      VAR_7 += FUNC_0 (VAR_10+1, VAR_5 + 1 - VAR_6);
    } else {
      if (VAR_10[1] == ':') {
        VAR_10[1] = '0';
        VAR_10[0]++;
      }
      VAR_7 += FUNC_0 (VAR_10, VAR_5 + 2 - VAR_6);
    }
    VAR_8 = &VAR_0->buckets[VAR_7 % VAR_0->tot_buckets];
  }
  if (VAR_8) {
    *(VAR_3 + 2) = VAR_8;
    return 0;
  } else {
    *(VAR_3 + 2) = 0;
    return -1;
  }
}
