
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int object_id_t ;
typedef int listree_xglobal_t ;
typedef int listree_t ;
typedef int global_id_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 () ;

__attribute__((used)) static inline void FUNC_7 (object_id_t VAR_2, global_id_t VAR_3, int VAR_4, int VAR_5) {
  int VAR_6 = VAR_4 & (VAR_0 - 1);
  int VAR_7 = VAR_5 & (VAR_0 - 1);
  if (VAR_7 != VAR_6) {
    listree_t VAR_8, VAR_9;
    listree_xglobal_t VAR_10, VAR_11;
    FUNC_5 (&VAR_8, VAR_6);
    FUNC_5 (&VAR_9, VAR_7);
    FUNC_4 (&VAR_10, VAR_6);
    FUNC_4 (&VAR_11, VAR_7);
    FUNC_1 (&VAR_8, VAR_2, FUNC_6 () );
    FUNC_3 (&VAR_9, VAR_2, FUNC_6 () );




    FUNC_1 (&VAR_10, VAR_3, VAR_2 * VAR_1);
    FUNC_3 (&VAR_11, VAR_3, VAR_2 * VAR_1);

  }
}
