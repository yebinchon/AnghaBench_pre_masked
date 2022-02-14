
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct edid_quirk {scalar_t__ product_id; int quirks; int vendor; } ;
struct edid {int dummy; } ;


 int FUNC_0 (struct edid_quirk*) ;
 scalar_t__ FUNC_1 (struct edid const*) ;
 struct edid_quirk* VAR_0 ;
 scalar_t__ FUNC_2 (struct edid const*,int ) ;

__attribute__((used)) static u32 FUNC_3(const struct edid *VAR_1)
{
 const struct edid_quirk *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  VAR_2 = &VAR_0[VAR_3];

  if (FUNC_2(VAR_1, VAR_2->vendor) &&
      (FUNC_1(VAR_1) == VAR_2->product_id))
   return VAR_2->quirks;
 }

 return 0;
}
