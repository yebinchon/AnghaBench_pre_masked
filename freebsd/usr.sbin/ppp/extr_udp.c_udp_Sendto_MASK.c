
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udpdevice {int connected; int sock; } ;
struct sockaddr {int dummy; } ;
struct physical {int fd; int handler; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;

 int VAR_1 ;

 struct udpdevice* FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,void const*,size_t,int ,struct sockaddr*,int) ;
 int FUNC_2 (int ,void const*,size_t) ;

__attribute__((used)) static ssize_t
FUNC_3(struct physical *VAR_3, const void *VAR_4, size_t VAR_5)
{
  struct udpdevice *VAR_6 = FUNC_0(VAR_3->handler);
  int VAR_7;

  switch (VAR_6->connected) {
    case 129:
      VAR_7 = FUNC_2(VAR_3->fd, VAR_4, VAR_5);
      break;

    case 128:
    default:
      VAR_7 = FUNC_1(VAR_3->fd, VAR_4, VAR_5, 0, (struct sockaddr *)&VAR_6->sock,
                   sizeof VAR_6->sock);
      break;
  }
  if (VAR_6->connected == VAR_1) {
    if (VAR_7 == -1 && VAR_2 == VAR_0) {
      VAR_6->connected = 129;
      VAR_7 = FUNC_2(VAR_3->fd, VAR_4, VAR_5);
    } else
      VAR_6->connected = 128;
  }

  return VAR_7;
}
