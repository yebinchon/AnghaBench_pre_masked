
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uv_thread_t ;
typedef int uv_signal_t ;
typedef int uv_handle_t ;
typedef char uv_buf_t ;
typedef int test_buf ;
struct thread_ctx {int doread; int interval; int size; char* data; int fd; int pid; } ;
struct TYPE_6__ {int result; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int VAR_3 ;
 void* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;
 scalar_t__ FUNC_6 (int*) ;
 int FUNC_7 () ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char FUNC_8 (char*,int) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 () ;
 int FUNC_11 (int ,TYPE_1__*,int,char*,int,int,int *) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (int ,TYPE_1__*,int,char*,size_t,int,int *) ;
 scalar_t__ FUNC_14 (int ,int ) ;
 scalar_t__ FUNC_15 (int ,int *) ;
 scalar_t__ FUNC_16 (int *,int ,int ) ;
 size_t FUNC_17 (char*,int) ;
 scalar_t__ FUNC_18 (int *,int ,struct thread_ctx*) ;
 scalar_t__ FUNC_19 (int *) ;
 TYPE_1__ VAR_7 ;

__attribute__((used)) static void FUNC_20(int VAR_8) {
  struct thread_ctx VAR_9;
  uv_thread_t VAR_10;
  uv_signal_t VAR_11;
  int VAR_12[2];
  size_t VAR_13;
  uv_buf_t* VAR_14;
  char* VAR_15;
  size_t VAR_16;

  VAR_13 = 54321;

  VAR_14 = FUNC_4(sizeof(*VAR_14) * VAR_13);
  FUNC_0(VAR_14 != ((void*)0));

  VAR_9.pid = FUNC_7();
  VAR_9.doread = VAR_8;
  VAR_9.interval = 1000;
  VAR_9.size = sizeof(test_buf) * VAR_13;
  VAR_9.data = FUNC_4(VAR_9.size);
  FUNC_0(VAR_9.data != ((void*)0));
  VAR_15 = FUNC_4(VAR_9.size);
  FUNC_0(VAR_15 != ((void*)0));

  for (VAR_16 = 0; VAR_16 < VAR_13; ++VAR_16)
    VAR_14[VAR_16] = FUNC_8(VAR_15 + VAR_16 * sizeof(test_buf), sizeof(test_buf));

  VAR_3 = FUNC_10();

  FUNC_0(0 == FUNC_15(VAR_3, &VAR_11));
  FUNC_0(0 == FUNC_16(&VAR_11, VAR_5, VAR_0));

  FUNC_0(0 == FUNC_6(VAR_12));

  VAR_9.fd = VAR_12[VAR_8];
  FUNC_0(0 == FUNC_18(&VAR_10, VAR_6, &VAR_9));

  if (VAR_8) {
    uv_buf_t* VAR_17;
    int VAR_18;
    VAR_17 = VAR_14;
    VAR_18 = 0;
    while (VAR_18 < VAR_9.size) {
      int VAR_19;
      VAR_19 = FUNC_11(VAR_3, &VAR_4, VAR_12[0], VAR_17, VAR_13, -1, ((void*)0));
      if (VAR_19 > 0) {
        size_t VAR_20;
        VAR_20 = FUNC_17(VAR_17, VAR_19);
        VAR_17 += VAR_20;
        VAR_13 -= VAR_20;
        VAR_18 += VAR_19;
      } else {
        FUNC_0(VAR_19 == VAR_1);
      }
      FUNC_12(&VAR_4);
    }
  } else {
    int VAR_21;
    VAR_21 = FUNC_13(VAR_3, &VAR_7, VAR_12[1], VAR_14, VAR_13, -1, ((void*)0));
    FUNC_0(VAR_7.result == VAR_21);
    FUNC_0(VAR_21 == VAR_9.size);
    FUNC_12(&VAR_7);
  }

  FUNC_0(0 == FUNC_5(VAR_15, VAR_9.data, VAR_9.size));

  FUNC_0(0 == FUNC_19(&VAR_10));
  FUNC_0(0 == FUNC_14(VAR_3, VAR_2));

  FUNC_0(0 == FUNC_2(VAR_12[1]));
  FUNC_9((uv_handle_t*) &VAR_11, ((void*)0));

  {
      int VAR_22;
      VAR_22 = FUNC_11(VAR_3, &VAR_4, VAR_12[0], VAR_14, 1, -1, ((void*)0));
      FUNC_0(VAR_22 == 0);
      FUNC_12(&VAR_4);
  }
  FUNC_0(0 == FUNC_2(VAR_12[0]));

  FUNC_3(VAR_14);
  FUNC_3(VAR_15);
  FUNC_3(VAR_9.data);

  FUNC_1();
}
