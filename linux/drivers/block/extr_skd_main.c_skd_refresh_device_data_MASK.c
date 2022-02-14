
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skd_special_context {int dummy; } ;
struct skd_device {struct skd_special_context internal_skspcl; } ;


 int VAR_0 ;
 int FUNC_0 (struct skd_device*,struct skd_special_context*,int ) ;

__attribute__((used)) static void FUNC_1(struct skd_device *VAR_1)
{
 struct skd_special_context *VAR_2 = &VAR_1->internal_skspcl;

 FUNC_0(VAR_1, VAR_2, VAR_0);
}
