
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct device {int dummy; } ;
struct alg_props {scalar_t__ databytelen; int sglen; } ;
struct TYPE_3__ {struct alg_props*** ap; } ;
struct TYPE_4__ {TYPE_1__ of; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct device*,char*,size_t,size_t,int,int ,scalar_t__) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static bool FUNC_1(struct device *VAR_2, u32 VAR_3, u32 VAR_4, int VAR_5)
{
 struct alg_props *VAR_6 = &VAR_1.of.ap[VAR_3][VAR_4][VAR_5];

 if (!VAR_6->sglen || VAR_6->databytelen < VAR_0) {
  if (VAR_2)
   FUNC_0(VAR_2, "bogus sglen/databytelen for %u/%u/%u: "
     "%u/%u (ignored)\n", VAR_3, VAR_4, VAR_5,
     VAR_6->sglen, VAR_6->databytelen);
  return 0;
 }

 return 1;
}
