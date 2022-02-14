
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef size_t mutex_prof_arena_ind_t ;
typedef int emitter_t ;
typedef int emitter_row_t ;
typedef int emitter_col_t ;


 char** VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *,int *,int *,int *) ;
 int FUNC_5 (int *,char*,int *,int *,int *) ;
 int FUNC_6 (unsigned int,size_t,char const*,int *,int *,int *,int ) ;

__attribute__((used)) static void
FUNC_7(emitter_t *VAR_4, unsigned VAR_5, uint64_t VAR_6) {
 emitter_row_t VAR_7;
 emitter_col_t VAR_8;
 emitter_col_t VAR_9[VAR_3];
 emitter_col_t VAR_10[VAR_2];

 FUNC_2(&VAR_7);
 FUNC_5(&VAR_7, "", &VAR_8, VAR_9, VAR_10);

 FUNC_1(VAR_4, "mutexes");
 FUNC_3(VAR_4, &VAR_7);

 for (mutex_prof_arena_ind_t VAR_11 = 0; VAR_11 < VAR_1;
     VAR_11++) {
  const char *VAR_12 = VAR_0[VAR_11];
  FUNC_1(VAR_4, VAR_12);
  FUNC_6(VAR_5, VAR_11, VAR_12, &VAR_8, VAR_9,
      VAR_10, VAR_6);
  FUNC_4(VAR_4, &VAR_7, VAR_9, VAR_10);
  FUNC_0(VAR_4);
 }
 FUNC_0(VAR_4);
}
