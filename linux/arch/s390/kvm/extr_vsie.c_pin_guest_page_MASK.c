
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct kvm {int dummy; } ;
typedef scalar_t__ hpa_t ;
typedef int gpa_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct page* FUNC_0 (struct kvm*,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct page*) ;

__attribute__((used)) static int FUNC_4(struct kvm *VAR_2, gpa_t VAR_3, hpa_t *VAR_4)
{
 struct page *VAR_5;

 VAR_5 = FUNC_0(VAR_2, FUNC_1(VAR_3));
 if (FUNC_2(VAR_5))
  return -VAR_0;
 *VAR_4 = (hpa_t) FUNC_3(VAR_5) + (VAR_3 & ~VAR_1);
 return 0;
}
