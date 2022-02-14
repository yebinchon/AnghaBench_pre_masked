
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct cmsghdr {int cmsg_len; } ;
typedef int FILE ;


 int* FUNC_0 (struct cmsghdr*) ;
 int FUNC_1 (int *,char*,char*,int) ;
 int FUNC_2 (char*,int *) ;

__attribute__((used)) static void
FUNC_3(FILE *VAR_0, struct cmsghdr *VAR_1)
{
 u_char *VAR_2;

 FUNC_2("{", VAR_0);
 for (VAR_2 = FUNC_0(VAR_1);
      VAR_2 < (u_char *)VAR_1 + VAR_1->cmsg_len; VAR_2++) {
  FUNC_1(VAR_0, "%s0x%02x", VAR_2 == FUNC_0(VAR_1) ? "" : ",", *VAR_2);
 }
 FUNC_2("}", VAR_0);
}
