
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct iwch_pd {int dummy; } ;
struct TYPE_2__ {int pbl_addr; int pbl_size; int stag; int len; int va_fbo; int zbva; int perms; int pdid; } ;
struct iwch_mr {TYPE_1__ attr; } ;
struct iwch_dev {int rdev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int *,int *,int ,int ,int ,int ,int ,int,int ,int ) ;
 int FUNC_2 (struct iwch_mr*,int ) ;

int FUNC_3(struct iwch_dev *VAR_1, struct iwch_pd *VAR_2,
        struct iwch_mr *VAR_3, int VAR_4)
{
 u32 VAR_5;
 int VAR_6;

 if (FUNC_1(&VAR_1->rdev,
       &VAR_5, VAR_3->attr.pdid,
       VAR_3->attr.perms,
       VAR_3->attr.zbva,
       VAR_3->attr.va_fbo,
       VAR_3->attr.len,
       VAR_4 - 12,
       VAR_3->attr.pbl_size, VAR_3->attr.pbl_addr))
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_3, VAR_5);
 if (VAR_6)
  FUNC_0(&VAR_1->rdev, VAR_3->attr.stag, VAR_3->attr.pbl_size,
         VAR_3->attr.pbl_addr);
 return VAR_6;
}
