
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_multi_mship {int i6mm_maddr; } ;
struct in6_addr {int dummy; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct in6_multi_mship*,int ) ;
 int VAR_4 ;
 int FUNC_1 (struct ifnet*,struct in6_addr const*,int *,int *,int) ;
 struct in6_multi_mship* FUNC_2 (int,int ,int ) ;

__attribute__((used)) static struct in6_multi_mship *
FUNC_3(struct ifnet *VAR_5, const struct in6_addr *VAR_6,
    int *VAR_7, int VAR_8)
{
 struct in6_multi_mship *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_2(sizeof(*VAR_9), VAR_1, VAR_2);
 if (VAR_9 == ((void*)0)) {
  *VAR_7 = VAR_0;
  return (((void*)0));
 }

 VAR_8 = (VAR_8 * VAR_3) / VAR_4;

 VAR_10 = FUNC_1(VAR_5, VAR_6, ((void*)0), &VAR_9->i6mm_maddr, VAR_8);
 if (VAR_10) {
  *VAR_7 = VAR_10;
  FUNC_0(VAR_9, VAR_1);
  return (((void*)0));
 }

 return (VAR_9);
}
