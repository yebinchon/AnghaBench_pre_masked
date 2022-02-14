
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tsd_t ;
struct TYPE_3__ {int * tcache; } ;
typedef TYPE_1__ tcaches_t ;
typedef int tcache_t ;


 int * VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static tcache_t *
FUNC_2(tsd_t *VAR_2, tcaches_t *VAR_3, bool VAR_4) {
 FUNC_0(FUNC_1(VAR_2), &VAR_1);

 if (VAR_3->tcache == ((void*)0)) {
  return ((void*)0);
 }
 tcache_t *VAR_5 = VAR_3->tcache;
 if (VAR_4) {
  VAR_3->tcache = VAR_0;
 } else {
  VAR_3->tcache = ((void*)0);
 }

 if (VAR_5 == VAR_0) {
  return ((void*)0);
 }
 return VAR_5;
}
