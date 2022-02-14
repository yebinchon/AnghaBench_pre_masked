
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msghdr {size_t msg_controllen; } ;
struct iovec {int dummy; } ;
struct cmsghdr {int cmsg_type; int cmsg_len; int cmsg_level; } ;
struct TYPE_2__ {scalar_t__ send_array_flag; } ;


 struct cmsghdr* FUNC_0 (struct msghdr*) ;
 int FUNC_1 (size_t) ;
 size_t FUNC_2 (int ) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct msghdr*,struct iovec*,void*) ;

void
FUNC_5(struct msghdr *VAR_2, struct iovec *VAR_3,
    void *VAR_4, size_t VAR_5, int VAR_6, size_t VAR_7)
{
 struct cmsghdr *VAR_8;

 FUNC_4(VAR_2, VAR_3, VAR_4);
 if (VAR_4 != ((void*)0)) {
  if (VAR_1.send_array_flag)
   FUNC_3("sending an array");
  else
   FUNC_3("sending a scalar");
  VAR_2->msg_controllen = VAR_1.send_array_flag ?
      VAR_5 : FUNC_2(0);
  VAR_8 = FUNC_0(VAR_2);
  VAR_8->cmsg_level = VAR_0;
  VAR_8->cmsg_type = VAR_6;
  VAR_8->cmsg_len = FUNC_1(VAR_1.send_array_flag ? VAR_7 : 0);
 } else
  VAR_2->msg_controllen = 0;
}
