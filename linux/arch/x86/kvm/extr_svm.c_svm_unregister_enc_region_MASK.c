
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_enc_region {int dummy; } ;
struct kvm {int lock; } ;
struct enc_region {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvm*,struct enc_region*) ;
 struct enc_region* FUNC_1 (struct kvm*,struct kvm_enc_region*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct kvm*) ;

__attribute__((used)) static int FUNC_5(struct kvm *VAR_2,
         struct kvm_enc_region *VAR_3)
{
 struct enc_region *VAR_4;
 int VAR_5;

 FUNC_2(&VAR_2->lock);

 if (!FUNC_4(VAR_2)) {
  VAR_5 = -VAR_1;
  goto failed;
 }

 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (!VAR_4) {
  VAR_5 = -VAR_0;
  goto failed;
 }

 FUNC_0(VAR_2, VAR_4);

 FUNC_3(&VAR_2->lock);
 return 0;

failed:
 FUNC_3(&VAR_2->lock);
 return VAR_5;
}
