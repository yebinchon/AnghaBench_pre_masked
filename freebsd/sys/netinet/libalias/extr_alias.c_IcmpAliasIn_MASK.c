
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libalias {int packetAliasMode; } ;
struct ip {int dummy; } ;
struct icmp {int icmp_type; int icmp_code; } ;
 int FUNC_0 (struct libalias*,struct ip*) ;
 int FUNC_1 (struct libalias*,struct ip*) ;
 int FUNC_2 (struct libalias*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct ip*) ;

__attribute__((used)) static int
FUNC_4(struct libalias *VAR_3, struct ip *VAR_4)
{
 int VAR_5;
 struct icmp *VAR_6;

 FUNC_2(VAR_3);

 if (VAR_3->packetAliasMode & VAR_2)
  return (VAR_1);

 VAR_6 = (struct icmp *)FUNC_3(VAR_4);

 VAR_5 = VAR_0;
 switch (VAR_6->icmp_type) {
 case 134:
 case 129:
  if (VAR_6->icmp_code == 0) {
   VAR_5 = FUNC_0(VAR_3, VAR_4);
  }
  break;
 case 128:
 case 132:
 case 131:
 case 133:
  VAR_5 = FUNC_1(VAR_3, VAR_4);
  break;
 case 135:
 case 130:
  VAR_5 = FUNC_0(VAR_3, VAR_4);
  break;
 }
 return (VAR_5);
}
