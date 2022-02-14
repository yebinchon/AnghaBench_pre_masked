
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmsghdr {int cmsg_type; int cmsg_level; int cmsg_len; } ;


 scalar_t__ FUNC_0 (struct cmsghdr*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(char *VAR_2, int VAR_3, int VAR_4)
{
 struct cmsghdr *VAR_5;
 int *VAR_6, VAR_7;

 VAR_5 = (struct cmsghdr *)VAR_2;
 VAR_5->cmsg_len = FUNC_1(VAR_4 * sizeof(int));
 VAR_5->cmsg_level = VAR_1;
 VAR_5->cmsg_type = VAR_0;
 for (VAR_6 = (int *)FUNC_0(VAR_5), VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
  *VAR_6++ = VAR_3;
}
