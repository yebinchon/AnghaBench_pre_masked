
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ucSpreadSpectrumType; int ucEnable; void* usSpreadSpectrumStep; void* usSpreadSpectrumAmount; void* usSpreadSpectrumAmountFrac; } ;
union atom_enable_ss {TYPE_2__ v3; } ;
typedef int uint32_t ;
struct TYPE_6__ {unsigned int num_crtc; int atom_context; TYPE_1__** crtcs; } ;
struct amdgpu_device {TYPE_3__ mode_info; } ;
struct amdgpu_atom_ss {scalar_t__ percentage; int type; int step; int amount; } ;
typedef int args ;
struct TYPE_4__ {int pll_id; scalar_t__ enabled; } ;



 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int,int *) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (union atom_enable_ss*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct amdgpu_device *VAR_7,
         int VAR_8,
         int VAR_9,
         int VAR_10,
         struct amdgpu_atom_ss *VAR_11)
{
 unsigned VAR_12;
 int VAR_13 = FUNC_0(VAR_5, VAR_6);
 union atom_enable_ss VAR_14;

 if (VAR_8) {





  if (VAR_11->percentage == 0)
   return;
  if (VAR_11->type & VAR_0)
   return;
 } else {
  for (VAR_12 = 0; VAR_12 < VAR_7->mode_info.num_crtc; VAR_12++) {
   if (VAR_7->mode_info.crtcs[VAR_12] &&
       VAR_7->mode_info.crtcs[VAR_12]->enabled &&
       VAR_12 != VAR_10 &&
       VAR_9 == VAR_7->mode_info.crtcs[VAR_12]->pll_id) {




    return;
   }
  }
 }

 FUNC_3(&VAR_14, 0, sizeof(VAR_14));

 VAR_14.v3.usSpreadSpectrumAmountFrac = FUNC_2(0);
 VAR_14.v3.ucSpreadSpectrumType = VAR_11->type & VAR_4;
 switch (VAR_9) {
 case 130:
  VAR_14.v3.ucSpreadSpectrumType |= VAR_2;
  break;
 case 129:
  VAR_14.v3.ucSpreadSpectrumType |= VAR_3;
  break;
 case 131:
  VAR_14.v3.ucSpreadSpectrumType |= VAR_1;
  break;
 case 128:
  return;
 }
 VAR_14.v3.usSpreadSpectrumAmount = FUNC_2(VAR_11->amount);
 VAR_14.v3.usSpreadSpectrumStep = FUNC_2(VAR_11->step);
 VAR_14.v3.ucEnable = VAR_8;

 FUNC_1(VAR_7->mode_info.atom_context, VAR_13, (uint32_t *)&VAR_14);
}
