
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {scalar_t__ tv_nsec; int tv_sec; } ;
struct nscd_connection_ {int sockfd; int read_queue; } ;
struct kevent {scalar_t__ filter; int flags; scalar_t__ data; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,int ,struct kevent*,int,struct timespec*) ;
 int FUNC_1 (int ,char*,size_t) ;

__attribute__((used)) static int
FUNC_2(struct nscd_connection_ *VAR_3, void *VAR_4, size_t VAR_5)
{
 struct kevent VAR_6;
 size_t VAR_7;
 ssize_t VAR_8;
 struct timespec VAR_9;
 int VAR_10;

 if (VAR_5 == 0)
  return (0);

 VAR_9.tv_sec = VAR_0;
 VAR_9.tv_nsec = 0;
 VAR_7 = 0;
 do {
  VAR_10 = FUNC_0(VAR_3->read_queue, ((void*)0), 0, &VAR_6, 1,
   &VAR_9);
  if ((VAR_10 == 1) && (VAR_6.filter == VAR_1)) {
   VAR_8 = FUNC_1(VAR_3->sockfd,
    (char *)VAR_4 + VAR_7,
    (size_t)VAR_6.data <= VAR_5 - VAR_7 ?
    (size_t)VAR_6.data : VAR_5 - VAR_7);
   if (VAR_8 == -1)
    return (-1);
   else
    VAR_7 += VAR_8;

   if (VAR_6.flags & VAR_2)
    return (VAR_7 < VAR_5 ? -1 : 0);
  } else
   return (-1);
 } while (VAR_7 < VAR_5);

 return (0);
}
