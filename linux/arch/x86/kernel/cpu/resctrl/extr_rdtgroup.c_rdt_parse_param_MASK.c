
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rdt_fs_context {int enable_cdpl3; int enable_cdpl2; int enable_mba_mbps; } ;
struct fs_parse_result {int dummy; } ;
struct fs_parameter {int dummy; } ;
struct fs_context {int dummy; } ;
struct TYPE_2__ {int x86_vendor; } ;


 int VAR_0 ;



 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (struct fs_context*,int *,struct fs_parameter*,struct fs_parse_result*) ;
 struct rdt_fs_context* FUNC_1 (struct fs_context*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct fs_context *VAR_4, struct fs_parameter *VAR_5)
{
 struct rdt_fs_context *VAR_6 = FUNC_1(VAR_4);
 struct fs_parse_result VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_4, &VAR_3, VAR_5, &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 switch (VAR_8) {
 case 130:
  VAR_6->enable_cdpl3 = 1;
  return 0;
 case 129:
  VAR_6->enable_cdpl2 = 1;
  return 0;
 case 128:
  if (VAR_2.x86_vendor != VAR_1)
   return -VAR_0;
  VAR_6->enable_mba_mbps = 1;
  return 0;
 }

 return -VAR_0;
}
