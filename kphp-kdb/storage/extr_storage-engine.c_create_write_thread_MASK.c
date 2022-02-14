
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int volume_t ;
struct gather_data {long long req_id; unsigned char* filedata; int filedata_len; int content_type; struct gather_data* prev; struct gather_data* next; int q; int writing_thread; void* filename; void* key; scalar_t__ key_len; int * V; struct connection* c; } ;
struct connection {int query_start_time; } ;
typedef int pthread_attr_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct gather_data* VAR_2 ;
 int FUNC_0 (struct gather_data*,struct connection*,double) ;
 int FUNC_1 (struct gather_data*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int *,int ,void*) ;
 int FUNC_8 (struct gather_data*,struct connection*,double) ;
 scalar_t__ FUNC_9 (struct gather_data*) ;
 int FUNC_10 (void*,char const*) ;
 scalar_t__ FUNC_11 (char const*) ;
 int FUNC_12 (struct gather_data*,struct connection*,double) ;
 void* FUNC_13 (scalar_t__) ;
 int FUNC_14 (int,char*) ;
 int VAR_3 ;
 struct gather_data* FUNC_15 (int) ;

int FUNC_16 (struct connection *VAR_4, long long VAR_5, volume_t *VAR_6, const char *VAR_7, const char *VAR_8, unsigned char *VAR_9, int VAR_10, int VAR_11) {
  pthread_attr_t VAR_12;
  FUNC_4 (&VAR_12);
  FUNC_5 (&VAR_12, VAR_0);
  FUNC_6 (&VAR_12, 4 << 20);
  VAR_1++;
  struct gather_data *VAR_13 = FUNC_15 (sizeof (struct gather_data));

  VAR_13->req_id = VAR_5;
  VAR_13->c = VAR_4;
  VAR_13->V = VAR_6;
  VAR_13->key_len = FUNC_11 (VAR_7);
  VAR_13->key = FUNC_13 (VAR_13->key_len + 1);
  FUNC_10 (VAR_13->key, VAR_7);
  if (VAR_8) {
    VAR_13->filename = FUNC_13 (FUNC_11 (VAR_8) + 1);
    FUNC_10 (VAR_13->filename, VAR_8);
  }

  VAR_13->filedata = VAR_9;
  VAR_13->filedata_len = VAR_10;
  VAR_13->content_type = VAR_11;

  int VAR_14 = FUNC_7 (&VAR_13->writing_thread, &VAR_12, VAR_3, (void *) VAR_13);

  if (VAR_14) {
    FUNC_14 (1, "create_write_thread: pthread_create failed. %m\n");
    FUNC_3 (&VAR_12);
    FUNC_1 (VAR_13);
    return -1;
  }

  FUNC_3 (&VAR_12);

  VAR_4->query_start_time = FUNC_2 ();

  VAR_13->q = (FUNC_9 (VAR_13) ? FUNC_8 : FUNC_0) (VAR_13, VAR_4, 600.0);

  VAR_13->next = VAR_2;
  if (VAR_2) {
    VAR_2->prev = VAR_13;
  }
  VAR_2 = VAR_13;
  return 0;
}
