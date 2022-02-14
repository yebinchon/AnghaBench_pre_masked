
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sin_port; int sin_addr; } ;
struct udpdevice {scalar_t__ connected; TYPE_1__ sock; } ;
struct sockaddr {int dummy; } ;
struct TYPE_4__ {char* full; char* base; } ;
struct physical {TYPE_2__ name; int fd; int handler; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 struct udpdevice* FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,void*,size_t) ;
 int FUNC_4 (int ,void*,size_t,int ,struct sockaddr*,int*) ;
 int FUNC_5 (char*,int,char*,char*,int) ;

__attribute__((used)) static ssize_t
FUNC_6(struct physical *VAR_1, void *VAR_2, size_t VAR_3)
{
  struct udpdevice *VAR_4 = FUNC_0(VAR_1->handler);
  int VAR_5, VAR_6;

  if (VAR_4->connected == VAR_0)
    return FUNC_3(VAR_1->fd, VAR_2, VAR_3);

  VAR_5 = sizeof VAR_4->sock;
  VAR_6 = FUNC_4(VAR_1->fd, VAR_2, VAR_3, 0, (struct sockaddr *)&VAR_4->sock, &VAR_5);

  if (*VAR_1->name.full == '\0') {
    FUNC_5(VAR_1->name.full, sizeof VAR_1->name.full, "%s:%d/udp",
             FUNC_1(VAR_4->sock.sin_addr), FUNC_2(VAR_4->sock.sin_port));
    VAR_1->name.base = VAR_1->name.full;
  }

  return VAR_6;
}
