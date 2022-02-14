
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int tsd_t ;
struct TYPE_6__ {int active; int * thread_name; scalar_t__ thr_discrim; scalar_t__ thr_uid; } ;
typedef TYPE_1__ prof_tdata_t ;


 int FUNC_0 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *,scalar_t__,scalar_t__,char*,int,int) ;
 char* FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;

prof_tdata_t *
FUNC_4(tsd_t *VAR_0, prof_tdata_t *VAR_1) {
 uint64_t VAR_2 = VAR_1->thr_uid;
 uint64_t VAR_3 = VAR_1->thr_discrim + 1;
 char *VAR_4 = (VAR_1->thread_name != ((void*)0)) ?
     FUNC_2(FUNC_3(VAR_0), VAR_1->thread_name) : ((void*)0);
 bool VAR_5 = VAR_1->active;

 FUNC_0(VAR_0, VAR_1);
 return FUNC_1(VAR_0, VAR_2, VAR_3, VAR_4,
     VAR_5, 1);
}
