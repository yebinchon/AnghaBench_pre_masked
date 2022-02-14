
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unin_chip_reg {scalar_t__ mr_size; scalar_t__ mr_base; } ;
struct unin_chip_devinfo {int udi_resources; } ;
typedef int phandle_t ;


 int FUNC_0 (int ,char*,int,void**) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(phandle_t VAR_1, struct unin_chip_devinfo *VAR_2)
{
 struct unin_chip_reg *VAR_3;
 int VAR_4, VAR_5;

 VAR_5 = FUNC_0(VAR_1, "reg", sizeof(*VAR_3), (void **)&VAR_3);
 if (VAR_5 == -1)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
  FUNC_1(&VAR_2->udi_resources, VAR_0, VAR_4,
      VAR_3[VAR_4].mr_base,
      VAR_3[VAR_4].mr_base + VAR_3[VAR_4].mr_size,
      VAR_3[VAR_4].mr_size);
 }
}
