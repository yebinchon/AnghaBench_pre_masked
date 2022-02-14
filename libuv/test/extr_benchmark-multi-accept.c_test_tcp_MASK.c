
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* data; } ;
typedef TYPE_1__ uv_tcp_t ;
typedef int uv_loop_t ;
typedef int uint64_t ;
struct sockaddr {int dummy; } ;
struct server_ctx {unsigned int num_connects; int semaphore; int thread_id; int async_handle; int idle_handle; int connect_req; int client_handle; } ;
struct client_ctx {unsigned int num_connects; int semaphore; int thread_id; int async_handle; int idle_handle; int connect_req; int client_handle; } ;
typedef int servers ;
typedef int clients ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct server_ctx* FUNC_2 (unsigned int,int) ;
 int VAR_4 ;
 int FUNC_3 (struct server_ctx*) ;
 int VAR_5 ;
 int FUNC_4 (char*,unsigned int,double,double,...) ;
 int FUNC_5 (int ,unsigned int,struct server_ctx*) ;
 int VAR_6 ;
 int FUNC_6 (int *) ;
 int * FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int *,int *) ;
 scalar_t__ FUNC_10 (char*,int ,int *) ;
 scalar_t__ FUNC_11 (int *,int ) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *,int ) ;
 scalar_t__ FUNC_14 (int *,TYPE_1__*,struct sockaddr const*,int ) ;
 scalar_t__ FUNC_15 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_16 (int *,int ,struct server_ctx*) ;
 scalar_t__ FUNC_17 (int *) ;

__attribute__((used)) static int FUNC_18(unsigned int VAR_7, unsigned int VAR_8) {
  struct server_ctx* VAR_9;
  struct client_ctx* VAR_10;
  uv_loop_t* VAR_11;
  uv_tcp_t* VAR_12;
  unsigned int VAR_13;
  double VAR_14;

  FUNC_0(0 == FUNC_10("127.0.0.1", VAR_1, &VAR_5));
  VAR_11 = FUNC_7();

  VAR_9 = FUNC_2(VAR_7, sizeof(VAR_9[0]));
  VAR_10 = FUNC_2(VAR_8, sizeof(VAR_10[0]));
  FUNC_0(VAR_9 != ((void*)0));
  FUNC_0(VAR_10 != ((void*)0));





  for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++) {
    struct server_ctx* VAR_15 = VAR_9 + VAR_13;
    FUNC_0(0 == FUNC_13(&VAR_15->semaphore, 0));
    FUNC_0(0 == FUNC_16(&VAR_15->thread_id, VAR_6, VAR_15));
  }

  FUNC_5(VAR_3, VAR_7, VAR_9);

  for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++) {
    struct client_ctx* VAR_16 = VAR_10 + VAR_13;
    VAR_16->num_connects = VAR_0 / VAR_8;
    VAR_12 = (uv_tcp_t*) &VAR_16->client_handle;
    VAR_12->data = "client handle";
    FUNC_0(0 == FUNC_15(VAR_11, VAR_12));
    FUNC_0(0 == FUNC_14(&VAR_16->connect_req,
                               VAR_12,
                               (const struct sockaddr*) &VAR_5,
                               VAR_4));
    FUNC_0(0 == FUNC_9(VAR_11, &VAR_16->idle_handle));
  }

  {
    uint64_t VAR_17 = FUNC_8();
    FUNC_0(0 == FUNC_11(VAR_11, VAR_2));
    VAR_17 = FUNC_8() - VAR_17;
    VAR_14 = VAR_17 / 1e9;
  }

  for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++) {
    struct server_ctx* VAR_18 = VAR_9 + VAR_13;
    FUNC_6(&VAR_18->async_handle);
    FUNC_0(0 == FUNC_17(&VAR_18->thread_id));
    FUNC_12(&VAR_18->semaphore);
  }

  FUNC_4("accept%u: %.0f accepts/sec (%u total)\n",
         VAR_7,
         VAR_0 / VAR_14,
         VAR_0);

  for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++) {
    struct server_ctx* VAR_19 = VAR_9 + VAR_13;
    FUNC_4("  thread #%u: %.0f accepts/sec (%u total, %.1f%%)\n",
           VAR_13,
           VAR_19->num_connects / VAR_14,
           VAR_19->num_connects,
           VAR_19->num_connects * 100.0 / VAR_0);
  }

  FUNC_3(VAR_10);
  FUNC_3(VAR_9);

  FUNC_1();
  return 0;
}
