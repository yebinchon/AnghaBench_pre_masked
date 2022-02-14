
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {float tv_usec; scalar_t__ tv_sec; } ;
struct http_parser {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct timeval*,int *) ;
 size_t FUNC_4 (struct http_parser*,int *,int ,size_t) ;
 int FUNC_5 (struct http_parser*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_6(int VAR_6, int VAR_7) {
  struct http_parser VAR_8;
  int VAR_9;
  int VAR_10;
  struct timeval VAR_11;
  struct timeval VAR_12;

  if (!VAR_7) {
    VAR_10 = FUNC_3(&VAR_11, ((void*)0));
    FUNC_0(VAR_10 == 0);
  }

  FUNC_2(VAR_4, "req_len=%d\n", (int) VAR_2);
  for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
    size_t VAR_13;
    FUNC_5(&VAR_8, VAR_0);

    VAR_13 = FUNC_4(&VAR_8, &VAR_3, VAR_1, VAR_2);
    FUNC_0(VAR_13 == VAR_2);
  }

  if (!VAR_7) {
    double VAR_14;
    double VAR_15;
    double VAR_16;

    VAR_10 = FUNC_3(&VAR_12, ((void*)0));
    FUNC_0(VAR_10 == 0);

    FUNC_2(VAR_5, "Benchmark result:\n");

    VAR_14 = (double) (VAR_12.tv_sec - VAR_11.tv_sec) +
              (VAR_12.tv_usec - VAR_11.tv_usec) * 1e-6f;

    VAR_16 = (double) VAR_6 * VAR_2;
    VAR_15 = (double) VAR_16 / VAR_14;

    FUNC_2(VAR_5, "%.2f mb | %.2f mb/s | %.2f req/sec | %.2f s\n",
        (double) VAR_16 / (1024 * 1024),
        VAR_15 / (1024 * 1024),
        (double) VAR_6 / VAR_14,
        VAR_14);

    FUNC_1(VAR_5);
  }

  return 0;
}
