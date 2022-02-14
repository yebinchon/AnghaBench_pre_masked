
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct cmsghdr {scalar_t__ cmsg_level; int cmsg_type; int cmsg_len; } ;


 int FUNC_0 (size_t) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,...) ;

int
FUNC_2(const struct cmsghdr *VAR_1, int VAR_2, size_t VAR_3)
{
 if (VAR_1 == ((void*)0)) {
  FUNC_1("cmsghdr is NULL");
  return (-1);
 }
 if (VAR_1->cmsg_level != VAR_0) {
  FUNC_1("cmsghdr.cmsg_level %d != SOL_SOCKET",
      VAR_1->cmsg_level);
  return (-1);
 }
 if (VAR_1->cmsg_type != VAR_2) {
  FUNC_1("cmsghdr.cmsg_type %d != %d",
      VAR_1->cmsg_type, VAR_2);
  return (-1);
 }
 if (VAR_1->cmsg_len != FUNC_0(VAR_3)) {
  FUNC_1("cmsghdr.cmsg_len %u != %zu",
      (u_int)VAR_1->cmsg_len, FUNC_0(VAR_3));
  return (-1);
 }
 return (0);
}
