
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; int response_code; } ;
struct init_sccb {int mask_length; TYPE_1__ header; } ;
typedef int sccb_mask_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct init_sccb*,int ,int) ;
 int FUNC_1 (struct init_sccb*,int ) ;
 int FUNC_2 (struct init_sccb*,int ) ;
 scalar_t__ FUNC_3 (int ,struct init_sccb*) ;
 int VAR_3 ;

int FUNC_4(struct init_sccb *VAR_4,
         sccb_mask_t VAR_5,
         sccb_mask_t VAR_6)
{
retry:
 FUNC_0(VAR_4, 0, sizeof(*VAR_4));
 VAR_4->header.length = sizeof(*VAR_4);
 if (VAR_3)
  VAR_4->mask_length = VAR_2;
 else
  VAR_4->mask_length = sizeof(sccb_mask_t);
 FUNC_1(VAR_4, VAR_5);
 FUNC_2(VAR_4, VAR_6);
 if (FUNC_3(VAR_1, VAR_4))
  return -VAR_0;
 if ((VAR_4->header.response_code == 0x74f0) && !VAR_3) {
  VAR_3 = 1;
  goto retry;
 }
 if (VAR_4->header.response_code != 0x20)
  return -VAR_0;
 return 0;
}
