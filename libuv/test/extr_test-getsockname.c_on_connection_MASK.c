
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * data; } ;
typedef TYPE_1__ uv_tcp_t ;
typedef int uv_stream_t ;
struct sockaddr {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct sockaddr*,char*,int ,char*) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_3 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int *,int *) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (TYPE_1__*,struct sockaddr*,int*) ;
 int FUNC_8 (TYPE_1__*,struct sockaddr*,int*) ;
 int FUNC_9 (int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_10(uv_stream_t* VAR_8, int VAR_9) {
  struct sockaddr VAR_10, VAR_11;
  int VAR_12;
  uv_tcp_t* VAR_13;
  int VAR_14;

  if (VAR_9 != 0) {
    FUNC_2(VAR_7, "Connect error %s\n", FUNC_5(VAR_9));
  }
  FUNC_0(VAR_9 == 0);

  VAR_13 = FUNC_3(sizeof(*VAR_13));
  FUNC_0(VAR_13 != ((void*)0));

  VAR_14 = FUNC_9(VAR_5, VAR_13);
  FUNC_0(VAR_14 == 0);


  VAR_13->data = VAR_8;

  VAR_14 = FUNC_4(VAR_8, (uv_stream_t*)VAR_13);
  FUNC_0(VAR_14 == 0);

  VAR_12 = sizeof VAR_10;
  VAR_14 = FUNC_8(VAR_13, &VAR_10, &VAR_12);
  FUNC_0(VAR_14 == 0);
  FUNC_1(&VAR_10, "127.0.0.1", VAR_6, "accepted socket");
  VAR_4++;

  VAR_12 = sizeof VAR_11;
  VAR_14 = FUNC_7(VAR_13, &VAR_11, &VAR_12);
  FUNC_0(VAR_14 == 0);
  FUNC_1(&VAR_11, "127.0.0.1", VAR_2, "accepted socket peer");
  VAR_3++;

  VAR_14 = FUNC_6((uv_stream_t*)VAR_13, VAR_1, VAR_0);
  FUNC_0(VAR_14 == 0);
}
