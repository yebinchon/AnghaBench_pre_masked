
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pseudo_lock_region {scalar_t__ size; int kmem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct pseudo_lock_region*) ;
 int FUNC_2 (struct pseudo_lock_region*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct pseudo_lock_region *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_2(VAR_4);
 if (VAR_5 < 0)
  return VAR_5;





 if (VAR_4->size > VAR_3) {
  FUNC_3("Requested region exceeds maximum size\n");
  VAR_5 = -VAR_0;
  goto out_region;
 }

 VAR_4->kmem = FUNC_0(VAR_4->size, VAR_2);
 if (!VAR_4->kmem) {
  FUNC_3("Unable to allocate memory\n");
  VAR_5 = -VAR_1;
  goto out_region;
 }

 VAR_5 = 0;
 goto out;
out_region:
 FUNC_1(VAR_4);
out:
 return VAR_5;
}
