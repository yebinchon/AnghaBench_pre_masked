
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_edid {scalar_t__ length; int raw_edid; } ;


 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static bool FUNC_1(struct dc_edid *VAR_0, struct dc_edid *VAR_1)
{
 if (VAR_0->length != VAR_1->length)
  return 0;

 if (VAR_1->length == 0)
  return 0;

 return (FUNC_0(VAR_0->raw_edid, VAR_1->raw_edid, VAR_1->length) == 0);
}
