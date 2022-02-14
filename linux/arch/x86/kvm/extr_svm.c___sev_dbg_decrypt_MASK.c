
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm {int dummy; } ;


 int FUNC_0 (struct kvm*,unsigned long,unsigned long,int,int*,int) ;
 unsigned long FUNC_1 (unsigned long,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct kvm *VAR_0, unsigned long VAR_1,
        unsigned long VAR_2, int VAR_3, int *VAR_4)
{
 int VAR_5;





 VAR_1 = FUNC_1(VAR_1, 16);
 VAR_5 = VAR_1 & 15;
 VAR_3 = FUNC_2(VAR_3 + VAR_5, 16);

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, 0);
}
