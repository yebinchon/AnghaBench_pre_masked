
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_tcp_t ;
typedef int uv_stream_t ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int saddr ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,struct sockaddr*,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,struct sockaddr*,int*) ;
 int FUNC_3 (struct sockaddr_storage*,int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int,unsigned long) ;

__attribute__((used)) static int FUNC_8(uv_tcp_t* VAR_3, int VAR_4, unsigned long VAR_5) {
  struct sockaddr_storage VAR_6;
  socklen_t VAR_7;
  int VAR_8;
  int VAR_9;

  VAR_9 = FUNC_5(VAR_4, VAR_0, 0);
  if (VAR_9 < 0)
    return VAR_9;
  VAR_8 = VAR_9;

  VAR_9 = FUNC_7((uv_stream_t*) VAR_3, VAR_8, VAR_5);
  if (VAR_9) {
    FUNC_4(VAR_8);
    return VAR_9;
  }

  if (VAR_5 & VAR_1) {

    VAR_7 = sizeof(VAR_6);
    FUNC_3(&VAR_6, 0, sizeof(VAR_6));
    if (FUNC_2(FUNC_6(VAR_3), (struct sockaddr*) &VAR_6, &VAR_7)) {
      FUNC_4(VAR_8);
      return FUNC_0(VAR_2);
    }

    if (FUNC_1(FUNC_6(VAR_3), (struct sockaddr*) &VAR_6, VAR_7)) {
      FUNC_4(VAR_8);
      return FUNC_0(VAR_2);
    }
  }

  return 0;
}
