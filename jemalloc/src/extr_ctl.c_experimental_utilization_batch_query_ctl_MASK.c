
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tsd_t ;
struct TYPE_2__ {int size; int nregs; int nfree; } ;
typedef TYPE_1__ extent_util_stats_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,void*,int *,int *,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(tsd_t *VAR_1, const size_t *VAR_2,
    size_t VAR_3, void *VAR_4, size_t *VAR_5, void *VAR_6, size_t VAR_7) {
 int VAR_8;

 FUNC_0(sizeof(extent_util_stats_t) == sizeof(size_t) * 3);

 const size_t VAR_9 = VAR_7 / sizeof(const void *);
 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0) || VAR_6 == ((void*)0) || VAR_7 == 0
     || VAR_7 != VAR_9 * sizeof(const void *)
     || *VAR_5 != VAR_9 * sizeof(extent_util_stats_t)) {
  VAR_8 = VAR_0;
  goto label_return;
 }

 void **VAR_10 = (void **)VAR_6;
 extent_util_stats_t *VAR_11 = (extent_util_stats_t *)VAR_4;
 size_t VAR_12;
 for (VAR_12 = 0; VAR_12 < VAR_9; ++VAR_12) {
  FUNC_1(FUNC_2(VAR_1), VAR_10[VAR_12],
      &VAR_11[VAR_12].nfree, &VAR_11[VAR_12].nregs,
      &VAR_11[VAR_12].size);
 }
 VAR_8 = 0;

label_return:
 return VAR_8;
}
