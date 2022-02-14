
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int handle; } ;
typedef TYPE_1__ uv_udp_send_t ;
struct sockaddr {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (TYPE_1__*,int *,int *,int,struct sockaddr const*,void (*) (TYPE_1__*,int)) ;

__attribute__((used)) static void FUNC_4(uv_udp_send_t* VAR_5, int VAR_6) {
  int VAR_7;

  FUNC_0(VAR_5 != ((void*)0));
  FUNC_0(VAR_6 == 0);
  FUNC_1(VAR_5->handle);
  if (++VAR_2 == 1) {
    FUNC_2(&VAR_3, ((void*)0));
    VAR_7 = FUNC_3(VAR_5, &VAR_3, &VAR_1, 1, ((void*)0), FUNC_4);
    FUNC_0(VAR_7 == VAR_0);
    VAR_7 = FUNC_3(VAR_5,
                    &VAR_3,
                    &VAR_1,
                    1,
                    (const struct sockaddr*) &VAR_4,
                    FUNC_4);
    FUNC_0(VAR_7 == 0);
  }

}
