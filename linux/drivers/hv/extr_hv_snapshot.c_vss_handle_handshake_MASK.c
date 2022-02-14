
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int operation; } ;
struct hv_vss_msg {TYPE_1__ vss_hdr; } ;
typedef int our_ver ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int*,int,int ) ;
 int FUNC_1 (char*,int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_2(struct hv_vss_msg *VAR_5)
{
 u32 VAR_6 = 128;

 switch (VAR_5->vss_hdr.operation) {
 case 129:

  VAR_2 = 129;
  break;
 case 128:

  if (FUNC_0(VAR_3, &VAR_6, sizeof(VAR_6),
       VAR_4))
   return -VAR_0;
  VAR_2 = 128;
  break;
 default:
  return -VAR_1;
 }
 FUNC_1("VSS: userspace daemon ver. %d connected\n", VAR_2);
 return 0;
}
