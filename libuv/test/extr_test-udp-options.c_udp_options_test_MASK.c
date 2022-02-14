
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_udp_t ;
typedef int uv_loop_t ;
typedef int uv_handle_t ;
struct sockaddr {scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int*) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,struct sockaddr const*,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(const struct sockaddr* VAR_4) {
  static int VAR_5[] = { -1, 0, 256 };
  uv_loop_t* VAR_6;
  uv_udp_t VAR_7;
  int VAR_8, VAR_9;

  VAR_6 = FUNC_3();

  VAR_9 = FUNC_6(VAR_6, &VAR_7);
  FUNC_1(VAR_9 == 0);

  FUNC_11((uv_handle_t*)&VAR_7);

  VAR_9 = FUNC_5(&VAR_7, VAR_4, 0);
  FUNC_1(VAR_9 == 0);

  VAR_9 = FUNC_7(&VAR_7, 1);
  VAR_9 |= FUNC_7(&VAR_7, 1);
  VAR_9 |= FUNC_7(&VAR_7, 0);
  VAR_9 |= FUNC_7(&VAR_7, 0);
  FUNC_1(VAR_9 == 0);


  for (VAR_8 = 1; VAR_8 <= 255; VAR_8++) {
    VAR_9 = FUNC_10(&VAR_7, VAR_8);






    FUNC_1(VAR_9 == 0);

  }

  for (VAR_8 = 0; VAR_8 < (int) FUNC_0(VAR_5); VAR_8++) {
    VAR_9 = FUNC_10(&VAR_7, VAR_5[VAR_8]);
    FUNC_1(VAR_9 == VAR_1);
  }

  VAR_9 = FUNC_8(&VAR_7, 1);
  VAR_9 |= FUNC_8(&VAR_7, 1);
  VAR_9 |= FUNC_8(&VAR_7, 0);
  VAR_9 |= FUNC_8(&VAR_7, 0);
  FUNC_1(VAR_9 == 0);


  for (VAR_8 = 0; VAR_8 <= 255; VAR_8++) {
    VAR_9 = FUNC_9(&VAR_7, VAR_8);
    FUNC_1(VAR_9 == 0);
  }


  VAR_9 = FUNC_9(&VAR_7, 256);
  FUNC_1(VAR_9 == VAR_1);


  VAR_9 = FUNC_4(VAR_6, VAR_3);
  FUNC_1(VAR_9 == 0);

  FUNC_2();
  return 0;
}
