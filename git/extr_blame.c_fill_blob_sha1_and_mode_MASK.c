
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct repository {int dummy; } ;
struct blame_origin {int mode; int blob_oid; int path; TYPE_2__* commit; } ;
struct TYPE_3__ {int oid; } ;
struct TYPE_4__ {TYPE_1__ object; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct repository*,int *,int ,int *,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct repository*,int *,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct repository *VAR_2,
       struct blame_origin *VAR_3)
{
 if (!FUNC_1(&VAR_3->blob_oid))
  return 0;
 if (FUNC_0(VAR_2, &VAR_3->commit->object.oid, VAR_3->path, &VAR_3->blob_oid, &VAR_3->mode))
  goto error_out;
 if (FUNC_2(VAR_2, &VAR_3->blob_oid, ((void*)0)) != VAR_0)
  goto error_out;
 return 0;
 error_out:
 FUNC_3(&VAR_3->blob_oid);
 VAR_3->mode = VAR_1;
 return -1;
}
