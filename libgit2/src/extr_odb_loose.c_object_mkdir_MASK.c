
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int object_dir_mode; int objects_dir; scalar_t__ objects_dirlen; } ;
typedef TYPE_1__ loose_backend ;
struct TYPE_6__ {scalar_t__ ptr; } ;
typedef TYPE_2__ git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int ,int ,int,int *) ;

__attribute__((used)) static int FUNC_1(const git_buf *VAR_3, const loose_backend *VAR_4)
{
 return FUNC_0(
  VAR_3->ptr + VAR_4->objects_dirlen, VAR_4->objects_dir, VAR_4->object_dir_mode,
  VAR_0 | VAR_1 | VAR_2, ((void*)0));
}
