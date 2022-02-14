
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ patch_id; int data_code; } ;
struct microcode_amd {TYPE_1__ hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct microcode_amd *VAR_2)
{
 u32 VAR_3, VAR_4;

 FUNC_1(VAR_1, (u64)(long)&VAR_2->hdr.data_code);


 FUNC_0(VAR_0, VAR_3, VAR_4);
 if (VAR_3 != VAR_2->hdr.patch_id)
  return -1;

 return 0;
}
