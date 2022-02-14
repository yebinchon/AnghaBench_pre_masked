
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msghdr {int dummy; } ;
struct cmsghdr {scalar_t__ cmsg_level; scalar_t__ cmsg_type; scalar_t__ cmsg_len; } ;


 scalar_t__ FUNC_0 (struct cmsghdr*) ;
 scalar_t__ FUNC_1 (struct msghdr*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct msghdr*,struct cmsghdr*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

int
FUNC_4(struct msghdr *VAR_2)
{
 struct cmsghdr *VAR_3;

 for (VAR_3 = (struct cmsghdr *)FUNC_1(VAR_2); VAR_3;
     VAR_3 = (struct cmsghdr *)FUNC_3(VAR_2, VAR_3)) {
  if (VAR_3->cmsg_level == VAR_0 &&
      VAR_3->cmsg_type == VAR_1 &&
      VAR_3->cmsg_len == FUNC_2(sizeof(int)))
   return (*(int *)FUNC_0(VAR_3));
 }

 return (-1);
}
