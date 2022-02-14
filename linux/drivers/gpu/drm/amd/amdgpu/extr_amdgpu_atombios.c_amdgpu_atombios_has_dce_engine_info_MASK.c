
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct atom_context {scalar_t__ bios; } ;
struct amdgpu_mode_info {struct atom_context* atom_context; } ;
struct amdgpu_device {struct amdgpu_mode_info mode_info; } ;
struct TYPE_4__ {scalar_t__ ucNumOfDispPath; } ;
struct TYPE_3__ {int usDisplayPathTableOffset; } ;
typedef TYPE_1__ ATOM_OBJECT_HEADER ;
typedef TYPE_2__ ATOM_DISPLAY_OBJECT_PATH_TABLE ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct atom_context*,int,scalar_t__*,int*,int*,scalar_t__*) ;
 scalar_t__ FUNC_2 (int ) ;

bool FUNC_3(struct amdgpu_device *VAR_2)
{
 struct amdgpu_mode_info *VAR_3 = &VAR_2->mode_info;
 struct atom_context *VAR_4 = VAR_3->atom_context;
 int VAR_5 = FUNC_0(VAR_0, VAR_1);
 u16 VAR_6, VAR_7;
 u8 VAR_8, VAR_9;
 ATOM_DISPLAY_OBJECT_PATH_TABLE *VAR_10;
 ATOM_OBJECT_HEADER *VAR_11;

 if (!FUNC_1(VAR_4, VAR_5, &VAR_6, &VAR_8, &VAR_9, &VAR_7))
  return 0;

 if (VAR_9 < 2)
  return 0;

 VAR_11 = (ATOM_OBJECT_HEADER *) (VAR_4->bios + VAR_7);
 VAR_10 = (ATOM_DISPLAY_OBJECT_PATH_TABLE *)
     (VAR_4->bios + VAR_7 +
      FUNC_2(VAR_11->usDisplayPathTableOffset));

 if (VAR_10->ucNumOfDispPath)
  return 1;
 else
  return 0;
}
