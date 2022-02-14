
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ ptr; } ;
typedef TYPE_1__ git_buf ;
struct TYPE_6__ {int flags; int mkdir_flags; int dirmode; int to_root; scalar_t__ from_prefix; } ;
typedef TYPE_2__ cp_r_info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (scalar_t__,int ,int ,int ,int *) ;

__attribute__((used)) static int FUNC_2(cp_r_info *VAR_3, git_buf *VAR_4)
{
 int VAR_5 = 0;


 if ((VAR_3->flags & VAR_1) == 0) {
  VAR_5 = FUNC_0(
   VAR_3->to_root, VAR_3->dirmode,
   (VAR_3->flags & VAR_0) ? VAR_2 : 0);

  VAR_3->flags |= VAR_1;
 }


 if (!VAR_5)
  VAR_5 = FUNC_1(
   VAR_4->ptr + VAR_3->from_prefix, VAR_3->to_root,
   VAR_3->dirmode, VAR_3->mkdir_flags, ((void*)0));

 return VAR_5;
}
