
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwmbt_firmware {scalar_t__ buf; scalar_t__ fwname; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct iwmbt_firmware*,int ,int) ;

void
FUNC_2(struct iwmbt_firmware *VAR_0)
{
 if (VAR_0->fwname)
  FUNC_0(VAR_0->fwname);
 if (VAR_0->buf)
  FUNC_0(VAR_0->buf);
 FUNC_1(VAR_0, 0, sizeof(*VAR_0));
}
