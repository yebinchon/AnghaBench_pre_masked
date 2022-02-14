
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm {int dummy; } ;
struct enc_region {int list; int npages; int pages; } ;


 int FUNC_0 (struct enc_region*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct kvm*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct kvm *VAR_0,
        struct enc_region *VAR_1)
{






 FUNC_2(VAR_1->pages, VAR_1->npages);

 FUNC_3(VAR_0, VAR_1->pages, VAR_1->npages);
 FUNC_1(&VAR_1->list);
 FUNC_0(VAR_1);
}
