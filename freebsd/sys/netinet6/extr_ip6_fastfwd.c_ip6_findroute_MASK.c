
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_flowinfo; int sin6_scope_id; int sin6_addr; } ;
struct nhop6_basic {int nh_flags; } ;
struct mbuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mbuf*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ,int *,int ,int ,int ,struct nhop6_basic*) ;
 int FUNC_3 (struct mbuf*,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct mbuf*) ;

__attribute__((used)) static int
FUNC_5(struct nhop6_basic *VAR_8, const struct sockaddr_in6 *VAR_9,
    struct mbuf *VAR_10)
{

 if (FUNC_2(FUNC_1(VAR_10), &VAR_9->sin6_addr,
     VAR_9->sin6_scope_id, 0, VAR_9->sin6_flowinfo, VAR_8) != 0) {
  FUNC_0(VAR_7);
  FUNC_0(VAR_6);
  FUNC_3(VAR_10, VAR_1,
      VAR_2, 0);
  return (VAR_0);
 }
 if (VAR_8->nh_flags & VAR_4) {
  FUNC_0(VAR_6);
  FUNC_4(VAR_10);
  return (VAR_0);
 }

 if (VAR_8->nh_flags & VAR_5) {
  FUNC_0(VAR_6);
  FUNC_3(VAR_10, VAR_1,
      VAR_3, 0);
  return (VAR_0);
 }
 return (0);
}
