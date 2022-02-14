
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edid {int extensions; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct edid* FUNC_0 (struct edid const*,int,int ) ;

struct edid *FUNC_1(const struct edid *VAR_2)
{
 return FUNC_0(VAR_2, (VAR_2->extensions + 1) * VAR_0, VAR_1);
}
