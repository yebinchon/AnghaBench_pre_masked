
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsd_t ;
struct prof_tdata_merge_iter_arg_s {int cnt_all; } ;
struct prof_gctx_merge_iter_arg_s {int dummy; } ;
struct prof_gctx_dump_iter_arg_s {int propagate_err; int tsdn; } ;
typedef int prof_tdata_t ;
typedef int prof_gctx_tree_t ;


 int * FUNC_0 (int *,int *,int ,void*) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ,int,int *) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int,char const*) ;
 int VAR_1 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static bool
FUNC_6(tsd_t *VAR_2, bool VAR_3, const char *VAR_4,
    bool VAR_5, prof_tdata_t *VAR_6,
    struct prof_tdata_merge_iter_arg_s *VAR_7,
    struct prof_gctx_merge_iter_arg_s *VAR_8,
    struct prof_gctx_dump_iter_arg_s *VAR_9,
    prof_gctx_tree_t *VAR_10) {

 if ((VAR_0 = FUNC_4(VAR_3, VAR_4)) == -1) {
  return 1;
 }


 if (FUNC_2(FUNC_5(VAR_2), VAR_3,
     &VAR_7->cnt_all)) {
  goto label_write_error;
 }


 VAR_9->tsdn = FUNC_5(VAR_2);
 VAR_9->propagate_err = VAR_3;
 if (FUNC_0(VAR_10, ((void*)0), VAR_1,
     (void *)VAR_9) != ((void*)0)) {
  goto label_write_error;
 }


 if (FUNC_3(VAR_3)) {
  goto label_write_error;
 }

 if (FUNC_1(VAR_3)) {
  return 1;
 }

 return 0;
label_write_error:
 FUNC_1(VAR_3);
 return 1;
}
