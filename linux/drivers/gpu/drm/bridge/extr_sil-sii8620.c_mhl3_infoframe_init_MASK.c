
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mhl3_infoframe {int version; int hev_format; } ;


 int FUNC_0 (struct mhl3_infoframe*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct mhl3_infoframe *VAR_0)
{
 FUNC_0(VAR_0, 0, sizeof(*VAR_0));

 VAR_0->version = 3;
 VAR_0->hev_format = -1;
 return 0;
}
