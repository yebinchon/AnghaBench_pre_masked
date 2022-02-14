
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fs_context {TYPE_1__* root; } ;
struct TYPE_2__ {int d_sb; } ;


 int FUNC_0 (struct fs_context*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct fs_context *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_2, VAR_1);
 if (VAR_3 == 0)
  VAR_0 = VAR_2->root->d_sb;
 return VAR_3;
}
