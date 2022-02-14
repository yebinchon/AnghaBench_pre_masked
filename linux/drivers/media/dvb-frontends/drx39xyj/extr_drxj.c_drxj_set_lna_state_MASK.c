
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drxuio_data {int value; void* uio; } ;
struct drxuio_cfg {int mode; void* uio; } ;
struct drx_demod_instance {int dummy; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drx_demod_instance*,struct drxuio_cfg*) ;
 int FUNC_1 (struct drx_demod_instance*,struct drxuio_data*) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int FUNC_3(struct drx_demod_instance *VAR_2, bool VAR_3)
{
 struct drxuio_cfg VAR_4;
 struct drxuio_data VAR_5;
 int VAR_6;

 VAR_4.uio = VAR_0;
 VAR_4.mode = VAR_1;

 VAR_6 = FUNC_0(VAR_2, &VAR_4);
 if (VAR_6) {
  FUNC_2("Failed to setup LNA GPIO!\n");
  return VAR_6;
 }

 VAR_5.uio = VAR_0;
 VAR_5.value = VAR_3;
 VAR_6 = FUNC_1(VAR_2, &VAR_5);
 if (VAR_6 != 0) {
  FUNC_2("Failed to %sable LNA!\n",
         VAR_3 ? "en" : "dis");
  return VAR_6;
 }
 return 0;
}
