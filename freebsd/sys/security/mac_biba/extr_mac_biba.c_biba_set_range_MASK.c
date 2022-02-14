
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u_short ;
typedef int u_char ;
struct TYPE_3__ {int mbe_compartments; void* mbe_grade; void* mbe_type; } ;
struct TYPE_4__ {int mbe_compartments; void* mbe_grade; void* mbe_type; } ;
struct mac_biba {int mb_flags; TYPE_1__ mb_rangehigh; TYPE_2__ mb_rangelow; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int) ;

__attribute__((used)) static void
FUNC_1(struct mac_biba *VAR_1, u_short VAR_2, u_short VAR_3,
    u_char *VAR_4, u_short VAR_5, u_short VAR_6,
    u_char *VAR_7)
{

 VAR_1->mb_rangelow.mbe_type = VAR_2;
 VAR_1->mb_rangelow.mbe_grade = VAR_3;
 if (VAR_4 != ((void*)0))
  FUNC_0(VAR_1->mb_rangelow.mbe_compartments, VAR_4,
      sizeof(VAR_1->mb_rangelow.mbe_compartments));
 VAR_1->mb_rangehigh.mbe_type = VAR_5;
 VAR_1->mb_rangehigh.mbe_grade = VAR_6;
 if (VAR_7 != ((void*)0))
  FUNC_0(VAR_1->mb_rangehigh.mbe_compartments, VAR_7,
      sizeof(VAR_1->mb_rangehigh.mbe_compartments));
 VAR_1->mb_flags |= VAR_0;
}
