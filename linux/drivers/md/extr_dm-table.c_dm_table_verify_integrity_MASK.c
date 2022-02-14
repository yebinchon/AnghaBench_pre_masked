
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {int dummy; } ;
struct dm_table {int md; scalar_t__ integrity_supported; scalar_t__ integrity_added; } ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int ,struct gendisk*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct gendisk* FUNC_5 (struct dm_table*) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct dm_table *VAR_0)
{
 struct gendisk *VAR_1 = ((void*)0);

 if (VAR_0->integrity_added)
  return;

 if (VAR_0->integrity_supported) {




  VAR_1 = FUNC_5(VAR_0);
  if (VAR_1 &&
      FUNC_1(FUNC_4(VAR_0->md), VAR_1) >= 0)
   return;
 }

 if (FUNC_6(FUNC_4(VAR_0->md))) {
  FUNC_0("%s: unable to establish an integrity profile",
         FUNC_3(VAR_0->md));
  FUNC_2(FUNC_4(VAR_0->md));
 }
}
