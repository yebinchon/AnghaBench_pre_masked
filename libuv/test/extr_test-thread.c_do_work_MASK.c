
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_loop_t ;
struct test_thread {int thread_called; } ;
struct getaddrinfo_req {int counter; int * loop; } ;
struct fs_req {int counter; int * loop; } ;


 size_t FUNC_0 (struct getaddrinfo_req*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (struct getaddrinfo_req*) ;
 int FUNC_3 (struct getaddrinfo_req*) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int ) ;

__attribute__((used)) static void FUNC_7(void* VAR_1) {
  struct getaddrinfo_req VAR_2[4];
  struct fs_req VAR_3[4];
  uv_loop_t VAR_4;
  size_t VAR_5;
  struct test_thread* VAR_6 = VAR_1;

  FUNC_1(0 == FUNC_5(&VAR_4));

  for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++) {
    struct getaddrinfo_req* VAR_7 = VAR_2 + VAR_5;
    VAR_7->counter = 4;
    VAR_7->loop = &VAR_4;
    FUNC_3(VAR_7);
  }

  for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_3); VAR_5++) {
    struct fs_req* VAR_8 = VAR_3 + VAR_5;
    VAR_8->counter = 4;
    VAR_8->loop = &VAR_4;
    FUNC_2(VAR_8);
  }

  FUNC_1(0 == FUNC_6(&VAR_4, VAR_0));
  FUNC_1(0 == FUNC_4(&VAR_4));
  VAR_6->thread_called = 1;
}
