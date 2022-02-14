
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lazy_name_thread_data {int k_start; int k_end; int pthread; struct lazy_name_thread_data* lazy_entries; struct index_state* istate; } ;
struct lazy_entry {int k_start; int k_end; int pthread; struct lazy_entry* lazy_entries; struct index_state* istate; } ;
struct lazy_dir_thread_data {int k_start; int k_end; int pthread; struct lazy_dir_thread_data* lazy_entries; struct index_state* istate; } ;
struct index_state {int cache_nr; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct lazy_name_thread_data*) ;
 int FUNC_5 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (struct index_state*,struct lazy_name_thread_data*) ;
 int FUNC_7 (int *,int *,int ,struct lazy_name_thread_data*) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int) ;
 struct lazy_name_thread_data* FUNC_10 (int,int) ;

__attribute__((used)) static void FUNC_11(
 struct index_state *VAR_4)
{
 int VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;
 struct lazy_entry *VAR_9;
 struct lazy_dir_thread_data *VAR_10;
 struct lazy_name_thread_data *VAR_11;

 if (!VAR_0)
  return;

 VAR_7 = 0;
 VAR_6 = FUNC_0(VAR_4->cache_nr, VAR_3);

 VAR_9 = FUNC_10(VAR_4->cache_nr, sizeof(struct lazy_entry));
 VAR_10 = FUNC_10(VAR_3, sizeof(struct lazy_dir_thread_data));
 VAR_11 = FUNC_10(1, sizeof(struct lazy_name_thread_data));

 FUNC_5();





 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  struct lazy_dir_thread_data *VAR_12 = VAR_10 + VAR_8;
  VAR_12->istate = VAR_4;
  VAR_12->lazy_entries = VAR_9;
  VAR_12->k_start = VAR_7;
  VAR_7 += VAR_6;
  if (VAR_7 > VAR_4->cache_nr)
   VAR_7 = VAR_4->cache_nr;
  VAR_12->k_end = VAR_7;
  VAR_5 = FUNC_7(&VAR_12->pthread, ((void*)0), VAR_1, VAR_12);
  if (VAR_5)
   FUNC_3(FUNC_1("unable to create lazy_dir thread: %s"), FUNC_9(VAR_5));
 }
 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  struct lazy_dir_thread_data *VAR_13 = VAR_10 + VAR_8;
  if (FUNC_8(VAR_13->pthread, ((void*)0)))
   FUNC_3("unable to join lazy_dir_thread");
 }
 VAR_11->istate = VAR_4;
 VAR_11->lazy_entries = VAR_9;
 VAR_5 = FUNC_7(&VAR_11->pthread, ((void*)0), VAR_2, VAR_11);
 if (VAR_5)
  FUNC_3(FUNC_1("unable to create lazy_name thread: %s"), FUNC_9(VAR_5));

 FUNC_6(VAR_4, VAR_9);

 VAR_5 = FUNC_8(VAR_11->pthread, ((void*)0));
 if (VAR_5)
  FUNC_3(FUNC_1("unable to join lazy_name thread: %s"), FUNC_9(VAR_5));

 FUNC_2();

 FUNC_4(VAR_11);
 FUNC_4(VAR_10);
 FUNC_4(VAR_9);
}
