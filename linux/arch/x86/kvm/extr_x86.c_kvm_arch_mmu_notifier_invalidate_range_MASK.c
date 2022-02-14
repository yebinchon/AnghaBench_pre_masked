
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (struct kvm*,int) ;
 int FUNC_1 (struct kvm*,int ) ;

int FUNC_2(struct kvm *VAR_3,
  unsigned long VAR_4, unsigned long VAR_5,
  bool VAR_6)
{
 unsigned long VAR_7;





 VAR_7 = FUNC_0(VAR_3, VAR_0 >> VAR_2);
 if (VAR_4 <= VAR_7 && VAR_7 < VAR_5)
  FUNC_1(VAR_3, VAR_1);

 return 0;
}
