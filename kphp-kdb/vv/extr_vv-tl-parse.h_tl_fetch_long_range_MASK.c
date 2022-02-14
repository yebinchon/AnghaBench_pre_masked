
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 long long FUNC_0 () ;
 int FUNC_1 (int ,char*,long long,long long,long long) ;

__attribute__((used)) static inline long long FUNC_2 (long long VAR_1, long long VAR_2) {
  long long VAR_3 = FUNC_0 ();
  if (VAR_3 < VAR_1 || VAR_3 > VAR_2) {
    FUNC_1 (VAR_0, "Expected int64 in range [%lld,%lld], %lld presented", VAR_1, VAR_2, VAR_3);
  }
  return VAR_3;
}
