
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nhop4_basic {int nh_flags; } ;
struct mbuf {int dummy; } ;
struct in_addr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mbuf*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct nhop4_basic*,int) ;
 scalar_t__ FUNC_3 (int ,struct in_addr,int ,int ,struct nhop4_basic*) ;
 int FUNC_4 (struct mbuf*,int ,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (struct mbuf*) ;

__attribute__((used)) static int
FUNC_6(struct nhop4_basic *VAR_8, struct in_addr VAR_9, struct mbuf *VAR_10)
{

 FUNC_2(VAR_8, sizeof(*VAR_8));
 if (FUNC_3(FUNC_1(VAR_10), VAR_9, 0, 0, VAR_8) != 0) {
  FUNC_0(VAR_7);
  FUNC_0(VAR_6);
  FUNC_4(VAR_10, VAR_1, VAR_2, 0, 0);
  return (VAR_0);
 }



 if ((VAR_8->nh_flags & (VAR_3 | VAR_4)) != 0) {
  FUNC_0(VAR_6);
  FUNC_5(VAR_10);
  return (VAR_0);
 }

 if (VAR_8->nh_flags & VAR_5) {
  FUNC_0(VAR_6);
  FUNC_4(VAR_10, VAR_1, VAR_2, 0, 0);
  return (VAR_0);
 }

 return (0);
}
