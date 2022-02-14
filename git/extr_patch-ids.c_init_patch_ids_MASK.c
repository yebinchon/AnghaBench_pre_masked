
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct repository {int dummy; } ;
struct TYPE_5__ {int recursive; } ;
struct TYPE_6__ {TYPE_1__ flags; scalar_t__ detect_rename; } ;
struct patch_ids {TYPE_2__ diffopts; int patches; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int ,TYPE_2__*,int) ;
 int FUNC_2 (struct patch_ids*,int ,int) ;
 int VAR_0 ;
 int FUNC_3 (struct repository*,TYPE_2__*) ;

int FUNC_4(struct repository *VAR_1, struct patch_ids *VAR_2)
{
 FUNC_2(VAR_2, 0, sizeof(*VAR_2));
 FUNC_3(VAR_1, &VAR_2->diffopts);
 VAR_2->diffopts.detect_rename = 0;
 VAR_2->diffopts.flags.recursive = 1;
 FUNC_0(&VAR_2->diffopts);
 FUNC_1(&VAR_2->patches, VAR_0, &VAR_2->diffopts, 256);
 return 0;
}
