
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm {int dummy; } ;
typedef int __be64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 unsigned long FUNC_1 (int,int,unsigned long) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct kvm*,unsigned long*,int,int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;

void FUNC_6(struct kvm *VAR_2, __be64 *VAR_3,
      unsigned long VAR_4)
{
 unsigned long VAR_5;
 unsigned char VAR_6;
 u64 VAR_7, VAR_8;

 VAR_7 = FUNC_0(VAR_3[0]);
 VAR_8 = FUNC_0(VAR_3[1]);
 if (FUNC_2(VAR_0)) {
  VAR_7 = FUNC_5(VAR_7, VAR_8);
  VAR_8 = FUNC_4(VAR_8);
 }
 VAR_5 = FUNC_1(VAR_7, VAR_8, VAR_4);
 VAR_6 = (FUNC_0(VAR_3[1]) & ~VAR_1) >> 8;

 *((char *)VAR_3 + 14) = VAR_6;
 FUNC_3(VAR_2, &VAR_5, 1, 1, 0);
}
