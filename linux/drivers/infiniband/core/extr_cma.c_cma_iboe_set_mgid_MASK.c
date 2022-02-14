
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union ib_gid {int* raw; } ;
struct sockaddr_in6 {int sin6_addr; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr {scalar_t__ sa_family; } ;
typedef enum ib_gid_type { ____Placeholder_ib_gid_type } ib_gid_type ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sockaddr*) ;
 int FUNC_1 (union ib_gid*,int *,int) ;
 int FUNC_2 (union ib_gid*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct sockaddr *VAR_2, union ib_gid *VAR_3,
         enum ib_gid_type VAR_4)
{
 struct sockaddr_in *VAR_5 = (struct sockaddr_in *)VAR_2;
 struct sockaddr_in6 *VAR_6 = (struct sockaddr_in6 *)VAR_2;

 if (FUNC_0(VAR_2)) {
  FUNC_2(VAR_3, 0, sizeof *VAR_3);
 } else if (VAR_2->sa_family == VAR_0) {
  FUNC_1(VAR_3, &VAR_6->sin6_addr, sizeof *VAR_3);
 } else {
  VAR_3->raw[0] =
   (VAR_4 == VAR_1) ? 0 : 0xff;
  VAR_3->raw[1] =
   (VAR_4 == VAR_1) ? 0 : 0x0e;
  VAR_3->raw[2] = 0;
  VAR_3->raw[3] = 0;
  VAR_3->raw[4] = 0;
  VAR_3->raw[5] = 0;
  VAR_3->raw[6] = 0;
  VAR_3->raw[7] = 0;
  VAR_3->raw[8] = 0;
  VAR_3->raw[9] = 0;
  VAR_3->raw[10] = 0xff;
  VAR_3->raw[11] = 0xff;
  *(__be32 *)(&VAR_3->raw[12]) = VAR_5->sin_addr.s_addr;
 }
}
