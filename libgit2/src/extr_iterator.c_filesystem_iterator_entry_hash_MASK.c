
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int ptr; } ;
typedef TYPE_3__ git_buf ;
struct TYPE_12__ {int st_mode; } ;
struct TYPE_14__ {int id; int path; TYPE_2__ st; } ;
typedef TYPE_4__ filesystem_iterator_entry ;
struct TYPE_11__ {scalar_t__ type; int repo; } ;
struct TYPE_15__ {int root; TYPE_1__ base; } ;
typedef TYPE_5__ filesystem_iterator ;


 TYPE_3__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int ,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int ,int ,int ,int *) ;
 int FUNC_5 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_6(
 filesystem_iterator *VAR_4,
 filesystem_iterator_entry *VAR_5)
{
 git_buf VAR_6 = VAR_0;
 int VAR_7;

 if (FUNC_0(VAR_5->st.st_mode)) {
  FUNC_5(&VAR_5->id, 0, VAR_3);
  return 0;
 }

 if (VAR_4->base.type == VAR_1)
  return FUNC_4(&VAR_5->id,
   VAR_4->base.repo, VAR_5->path, VAR_2, ((void*)0));

 if (!(VAR_7 = FUNC_2(&VAR_6, VAR_4->root, VAR_5->path)))
  VAR_7 = FUNC_3(&VAR_5->id, VAR_6.ptr, VAR_2);

 FUNC_1(&VAR_6);
 return VAR_7;
}
