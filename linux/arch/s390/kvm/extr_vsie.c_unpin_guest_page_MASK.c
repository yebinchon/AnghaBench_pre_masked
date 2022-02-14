
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm {int dummy; } ;
typedef int hpa_t ;
typedef int gpa_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct kvm*,int ) ;

__attribute__((used)) static void FUNC_3(struct kvm *VAR_1, gpa_t VAR_2, hpa_t VAR_3)
{
 FUNC_1(VAR_3 >> VAR_0);

 FUNC_2(VAR_1, FUNC_0(VAR_2));
}
