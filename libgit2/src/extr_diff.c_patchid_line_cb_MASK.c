
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct patch_id_args {int ctx; } ;
struct TYPE_9__ {int origin; int content_len; int content; } ;
typedef TYPE_1__ git_diff_line ;
typedef int git_diff_hunk ;
typedef int git_diff_delta ;
struct TYPE_10__ {int size; int ptr; } ;
typedef TYPE_2__ git_buf ;


 TYPE_2__ VAR_0 ;






 int VAR_1 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 int FUNC_3 (TYPE_2__*,char) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_7(
 const git_diff_delta *VAR_2,
 const git_diff_hunk *VAR_3,
 const git_diff_line *VAR_4,
 void *VAR_5)
{
 struct patch_id_args *VAR_6 = (struct patch_id_args *) VAR_5;
 git_buf VAR_7 = VAR_0;
 int VAR_8;

 FUNC_0(VAR_2);
 FUNC_0(VAR_3);

 switch (VAR_4->origin) {
     case 133:
  FUNC_3(&VAR_7, '+');
  break;
     case 129:
  FUNC_3(&VAR_7, '-');
  break;
     case 131:
  break;
     case 130:
     case 132:
     case 128:




  return 0;
     default:
  FUNC_4(VAR_1, "invalid line origin for patch");
  return -1;
 }

 FUNC_2(&VAR_7, VAR_4->content, VAR_4->content_len);
 FUNC_6(&VAR_7);

 if ((VAR_8 = FUNC_5(&VAR_6->ctx, VAR_7.ptr, VAR_7.size)) < 0)
  goto out;

out:
 FUNC_1(&VAR_7);
 return VAR_8;
}
