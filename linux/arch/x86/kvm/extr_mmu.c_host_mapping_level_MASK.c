
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm {int dummy; } ;
typedef int gfn_t ;


 unsigned long FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_1 (struct kvm*,int ) ;

__attribute__((used)) static int FUNC_2(struct kvm *VAR_2, gfn_t VAR_3)
{
 unsigned long VAR_4;
 int VAR_5, VAR_6 = 0;

 VAR_4 = FUNC_1(VAR_2, VAR_3);

 for (VAR_5 = VAR_1; VAR_5 <= VAR_0; ++VAR_5) {
  if (VAR_4 >= FUNC_0(VAR_5))
   VAR_6 = VAR_5;
  else
   break;
 }

 return VAR_6;
}
