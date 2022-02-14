
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_swap {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct kvm_swap*,int,int ) ;
 int FUNC_1 (struct kvm_swap*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(void)
{
 struct kvm_swap VAR_2[16];
 int VAR_3, VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2, sizeof VAR_2 / sizeof VAR_2[0],
     VAR_0);

 FUNC_2();
 for (VAR_3 = 0; VAR_3 < VAR_4; ++VAR_3)
  FUNC_1(&VAR_2[VAR_3]);
 FUNC_3();
}
