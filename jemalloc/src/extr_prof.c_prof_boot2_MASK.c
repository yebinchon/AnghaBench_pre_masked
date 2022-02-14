
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsd_t ;
typedef int malloc_mutex_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int ,int,int ) ;
 int VAR_13 ;
 int FUNC_5 (int ) ;
 int VAR_14 ;
 int * VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_6 (int *,char*,int ,int ) ;
 int VAR_17 ;
 int FUNC_7 (char*) ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 char* VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 scalar_t__ FUNC_8 (int *) ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 scalar_t__ FUNC_9 (int *) ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int * VAR_39 ;
 int VAR_40 ;
 int FUNC_10 (int *) ;

bool
FUNC_11(tsd_t *VAR_41) {
 FUNC_5(VAR_14);

 if (VAR_22) {
  unsigned VAR_42;

  VAR_16 = VAR_21;

  VAR_28 = VAR_23;
  if (FUNC_6(&VAR_29, "prof_active",
      VAR_3, VAR_17)) {
   return 1;
  }

  VAR_35 = VAR_25;
  if (FUNC_6(&VAR_34, "prof_gdump",
      VAR_8, VAR_17)) {
   return 1;
  }

  VAR_36 = VAR_27;
  if (FUNC_6(&VAR_37,
      "prof_thread_active_init",
      VAR_12,
      VAR_17)) {
   return 1;
  }

  if (FUNC_8(VAR_41)) {
   return 1;
  }

  if (FUNC_6(&VAR_13, "prof_bt2gctx",
      VAR_4, VAR_17)) {
   return 1;
  }

  if (FUNC_6(&VAR_40, "prof_tdatas",
      VAR_11, VAR_17)) {
   return 1;
  }

  VAR_18 = 0;
  if (FUNC_6(&VAR_19, "prof_next_thr_uid",
      VAR_9, VAR_17)) {
   return 1;
  }

  if (FUNC_6(&VAR_31, "prof_dump_filename",
      VAR_6, VAR_17)) {
   return 1;
  }
  if (FUNC_6(&VAR_32, "prof_dump",
      VAR_5, VAR_17)) {
   return 1;
  }

  if (VAR_24 && VAR_26[0] != '\0' &&
      FUNC_2(VAR_33) != 0) {
   FUNC_7("<jemalloc>: Error in atexit()\n");
   if (VAR_20) {
    FUNC_1();
   }
  }

  if (FUNC_9(VAR_41)) {
   return 1;
  }

  VAR_15 = (malloc_mutex_t *)FUNC_4(FUNC_10(VAR_41),
      FUNC_3(), VAR_1 * sizeof(malloc_mutex_t),
      VAR_0);
  if (VAR_15 == ((void*)0)) {
   return 1;
  }
  for (VAR_42 = 0; VAR_42 < VAR_1; VAR_42++) {
   if (FUNC_6(&VAR_15[VAR_42], "prof_gctx",
       VAR_7,
       VAR_17)) {
    return 1;
   }
  }

  VAR_39 = (malloc_mutex_t *)FUNC_4(FUNC_10(VAR_41),
      FUNC_3(), VAR_2 * sizeof(malloc_mutex_t),
      VAR_0);
  if (VAR_39 == ((void*)0)) {
   return 1;
  }
  for (VAR_42 = 0; VAR_42 < VAR_2; VAR_42++) {
   if (FUNC_6(&VAR_39[VAR_42], "prof_tdata",
       VAR_10,
       VAR_17)) {
    return 1;
   }
  }







 }
 VAR_30 = 1;

 return 0;
}
