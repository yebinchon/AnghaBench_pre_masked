
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static u64 FUNC_4(u64 VAR_5)
{
 if (FUNC_2(VAR_5))
  return VAR_5 & ~VAR_4;

 if (FUNC_1(VAR_5))
  return VAR_5;






 FUNC_0((VAR_5 & VAR_0) &&
    !FUNC_3(VAR_5),
    "kvm: Writable SPTE is not locklessly dirty-trackable\n");

 FUNC_0(VAR_5 & (VAR_2 <<
     VAR_3),
    "kvm: Access Tracking saved bit locations are not zero\n");

 VAR_5 |= (VAR_5 & VAR_2) <<
  VAR_3;
 VAR_5 &= ~VAR_1;

 return VAR_5;
}
