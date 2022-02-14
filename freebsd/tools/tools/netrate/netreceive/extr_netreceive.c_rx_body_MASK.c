
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct td_desc {int byte_count; int count; int buflen; int buf; int fd; } ;
struct pollfd {int events; int revents; int fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct pollfd*,int,int) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static void *
FUNC_3(void *VAR_2)
{
 struct td_desc *VAR_3 = VAR_2;
 struct pollfd VAR_4;
 int VAR_5;

 VAR_4.fd = VAR_3->fd;
 VAR_4.events = VAR_1;

 for (;;) {
  if (FUNC_1(&VAR_4, 1, -1) < 0)
   FUNC_0("poll on thread");
  if (!(VAR_4.revents & VAR_1))
   continue;
  for (;;) {
   VAR_5 = FUNC_2(VAR_3->fd, VAR_3->buf, VAR_3->buflen, VAR_0);
   if (VAR_5 < 0)
    break;
   VAR_3->count++;
   VAR_3->byte_count += VAR_5;
  }
 }
 return ((void*)0);
}
