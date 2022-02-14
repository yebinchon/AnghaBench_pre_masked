
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u_short ;
typedef int u_char ;
struct TYPE_3__ {int mme_compartments; void* mme_level; void* mme_type; } ;
struct TYPE_4__ {int mme_compartments; void* mme_level; void* mme_type; } ;
struct mac_mls {int mm_flags; TYPE_1__ mm_rangehigh; TYPE_2__ mm_rangelow; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int) ;

__attribute__((used)) static void
FUNC_1(struct mac_mls *VAR_1, u_short VAR_2, u_short VAR_3,
    u_char *VAR_4, u_short VAR_5, u_short VAR_6,
    u_char *VAR_7)
{

 VAR_1->mm_rangelow.mme_type = VAR_2;
 VAR_1->mm_rangelow.mme_level = VAR_3;
 if (VAR_4 != ((void*)0))
  FUNC_0(VAR_1->mm_rangelow.mme_compartments, VAR_4,
      sizeof(VAR_1->mm_rangelow.mme_compartments));
 VAR_1->mm_rangehigh.mme_type = VAR_5;
 VAR_1->mm_rangehigh.mme_level = VAR_6;
 if (VAR_7 != ((void*)0))
  FUNC_0(VAR_1->mm_rangehigh.mme_compartments, VAR_7,
      sizeof(VAR_1->mm_rangehigh.mme_compartments));
 VAR_1->mm_flags |= VAR_0;
}
