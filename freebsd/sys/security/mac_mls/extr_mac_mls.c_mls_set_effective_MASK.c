
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u_short ;
typedef int u_char ;
struct TYPE_2__ {int mme_compartments; void* mme_level; void* mme_type; } ;
struct mac_mls {int mm_flags; TYPE_1__ mm_effective; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int) ;

__attribute__((used)) static void
FUNC_1(struct mac_mls *VAR_1, u_short VAR_2, u_short VAR_3,
    u_char *VAR_4)
{

 VAR_1->mm_effective.mme_type = VAR_2;
 VAR_1->mm_effective.mme_level = VAR_3;
 if (VAR_4 != ((void*)0))
  FUNC_0(VAR_1->mm_effective.mme_compartments, VAR_4,
      sizeof(VAR_1->mm_effective.mme_compartments));
 VAR_1->mm_flags |= VAR_0;
}
