
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x_info_blk_hdr {int dummy; } ;
typedef void dentry ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_1 ;
 void* FUNC_2 () ;
 void* FUNC_3 (void*,void*) ;
 void* FUNC_4 (void*,void*) ;
 void* FUNC_5 (void*,char*,char*) ;
 void* FUNC_6 (void*,char*) ;
 int FUNC_7 (int ,void*) ;
 int FUNC_8 (int ,void*) ;
 int FUNC_9 (int ) ;

int FUNC_10(struct dentry *VAR_2)
{
 struct dentry *VAR_3, *VAR_4;
 void *VAR_5, *VAR_6;
 int VAR_7, VAR_8;
 void *VAR_9, *VAR_10;

 VAR_9 = FUNC_2();
 if (FUNC_0(VAR_9))
  return FUNC_1(VAR_9);

 VAR_3 = FUNC_6(VAR_2, "systems");
 if (FUNC_0(VAR_3)) {
  VAR_8 = FUNC_1(VAR_3);
  goto err_out;
 }
 VAR_5 = (struct x_info_blk_hdr *)VAR_9;
 VAR_6 = VAR_5 + FUNC_9(VAR_1);
 for (VAR_7 = 0; VAR_7 < FUNC_8(VAR_1, VAR_5); VAR_7++) {
  VAR_6 = FUNC_3(VAR_3, VAR_6);
  if (FUNC_0(VAR_6)) {
   VAR_8 = FUNC_1(VAR_6);
   goto err_out;
  }
 }
 if (FUNC_7(VAR_1, VAR_5) &
     VAR_0) {
  VAR_10 = FUNC_4(VAR_2, VAR_6);
  if (FUNC_0(VAR_10)) {
   VAR_8 = FUNC_1(VAR_10);
   goto err_out;
  }
 }
 VAR_4 = FUNC_6(VAR_2, "hyp");
 if (FUNC_0(VAR_4)) {
  VAR_8 = FUNC_1(VAR_4);
  goto err_out;
 }
 VAR_10 = FUNC_5(VAR_4, "type", "LPAR Hypervisor");
 if (FUNC_0(VAR_10)) {
  VAR_8 = FUNC_1(VAR_10);
  goto err_out;
 }
 VAR_8 = 0;

err_out:
 return VAR_8;
}
