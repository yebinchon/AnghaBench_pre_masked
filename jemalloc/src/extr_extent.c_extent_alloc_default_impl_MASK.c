
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int dss_prec_t ;
struct TYPE_4__ {int dss_prec; } ;
typedef TYPE_1__ arena_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 void* FUNC_1 (int *,TYPE_1__*,void*,size_t,size_t,int*,int*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (void*,size_t) ;

__attribute__((used)) static void *
FUNC_3(tsdn_t *VAR_2, arena_t *VAR_3, void *VAR_4,
    size_t VAR_5, size_t VAR_6, bool *VAR_7, bool *VAR_8) {
 void *VAR_9 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
     VAR_8, (dss_prec_t)FUNC_0(&VAR_3->dss_prec,
     VAR_0));
 if (VAR_1 && VAR_9) {
  FUNC_2(VAR_9, VAR_5);
 }
 return VAR_9;
}
