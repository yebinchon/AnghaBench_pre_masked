
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udp_socket {int flags; int fd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct udp_socket*,int) ;
 int FUNC_1 (int,char*,int ,int,...) ;

int FUNC_2 (struct udp_socket *VAR_6) {
  int VAR_7 = 0, VAR_8 = 0, VAR_9 = (VAR_6->flags & VAR_3);
  FUNC_1 (2, "in udp_reader(%d,%d)\n", VAR_6->fd, VAR_9);
  while (!(VAR_6->flags & VAR_4) || VAR_9) {
    int VAR_10 = FUNC_0 (VAR_6, VAR_9);
    if (VAR_10 < 0) {
      if (VAR_5 == VAR_2 || VAR_5 == VAR_1) {
 continue;
      }
      if (VAR_5 == VAR_0) {
 if (VAR_9) {
   VAR_9 = 0;
   continue;
 }
 VAR_6->flags |= VAR_4;
 break;
      }
      VAR_9 = VAR_3;
      continue;


    } else if (!VAR_10) {
      if (VAR_9) {
 VAR_9 = 0;
 continue;
      }
      VAR_6->flags |= VAR_4;
      break;
    } else {
      VAR_7 += VAR_10;
      if (VAR_9) {
 VAR_8 += VAR_10;
      }
    }
  }
  VAR_6->flags = (VAR_6->flags & ~VAR_3) | VAR_9;
  FUNC_1 (2, "udp_reader(%d): %d packets received, %d error packets\n", VAR_6->fd, VAR_7, VAR_8);
  return VAR_7;
}
