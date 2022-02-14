
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ib_gid {scalar_t__ raw; } ;
struct net_device {int dummy; } ;
struct in_device {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 struct in_device* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct in_device*,int ) ;
 int FUNC_2 (struct in_device*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1, union ib_gid *VAR_2, bool VAR_3)
{
 struct in_device *VAR_4 = ((void*)0);

 if (VAR_1) {
  FUNC_3();
  VAR_4 = FUNC_0(VAR_1);
  if (VAR_4) {
   if (VAR_3)
    FUNC_2(VAR_4,
      *(__be32 *)(VAR_2->raw + 12));
   else
    FUNC_1(VAR_4,
      *(__be32 *)(VAR_2->raw + 12));
  }
  FUNC_4();
 }
 return (VAR_4) ? 0 : -VAR_0;
}
