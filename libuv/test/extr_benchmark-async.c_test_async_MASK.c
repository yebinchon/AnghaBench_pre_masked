
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int threads ;
struct ctx {int nthreads; int worker_sent; int worker_seen; unsigned int main_sent; unsigned int main_seen; int thread; int main_async; int worker_async; int loop; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 struct ctx* FUNC_2 (int,int) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (struct ctx*) ;
 int VAR_2 ;
 int FUNC_5 (char*,int,int,char*) ;
 scalar_t__ FUNC_6 (int *,int *,int ) ;
 int * FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,int ) ;
 scalar_t__ FUNC_11 (int *,int ,struct ctx*) ;
 scalar_t__ FUNC_12 (int *) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_13(int VAR_5) {
  struct ctx* VAR_6;
  struct ctx* VAR_7;
  uint64_t VAR_8;
  int VAR_9;

  VAR_6 = FUNC_2(VAR_5, sizeof(VAR_6[0]));
  FUNC_0(VAR_6 != ((void*)0));

  for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
    VAR_7 = VAR_6 + VAR_9;
    VAR_7->nthreads = VAR_5;
    FUNC_0(0 == FUNC_9(&VAR_7->loop));
    FUNC_0(0 == FUNC_6(&VAR_7->loop, &VAR_7->worker_async, VAR_4));
    FUNC_0(0 == FUNC_6(FUNC_7(),
                              &VAR_7->main_async,
                              VAR_2));
    FUNC_0(0 == FUNC_11(&VAR_7->thread, VAR_3, VAR_7));
  }

  VAR_8 = FUNC_8();

  FUNC_0(0 == FUNC_10(FUNC_7(), VAR_1));

  for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
    FUNC_0(0 == FUNC_12(&VAR_6[VAR_9].thread));

  VAR_8 = FUNC_8() - VAR_8;

  for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
    VAR_7 = VAR_6 + VAR_9;
    FUNC_0(VAR_7->worker_sent == VAR_0);
    FUNC_0(VAR_7->worker_seen == VAR_0);
    FUNC_0(VAR_7->main_sent == (unsigned int) VAR_0);
    FUNC_0(VAR_7->main_seen == (unsigned int) VAR_0);
  }

  FUNC_5("async%d: %.2f sec (%s/sec)\n",
         VAR_5,
         VAR_8 / 1e9,
         FUNC_3(VAR_0 / (VAR_8 / 1e9)));

  FUNC_4(VAR_6);

  FUNC_1();
  return 0;
}
