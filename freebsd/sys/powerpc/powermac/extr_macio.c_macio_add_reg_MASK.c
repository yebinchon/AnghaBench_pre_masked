
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macio_reg {scalar_t__ mr_base; scalar_t__ mr_size; } ;
struct macio_devinfo {int mdi_resources; } ;
typedef scalar_t__ phandle_t ;
typedef int layout_id ;
typedef int buf ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,char*,...) ;
 int FUNC_2 (scalar_t__,char*,int,void**) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_5 (int *,int ,int,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (char*,char*) ;

__attribute__((used)) static void
FUNC_7(phandle_t VAR_1, struct macio_devinfo *VAR_2)
{
 struct macio_reg *VAR_3, *VAR_4;
 phandle_t VAR_5;
 char VAR_6[8];
 int VAR_7, VAR_8 = 0, VAR_9, VAR_10;

 VAR_9 = FUNC_2(VAR_1, "reg", sizeof(*VAR_3), (void **)&VAR_3);
 if (VAR_9 == -1)
  return;
        if (VAR_3[0].mr_base == 0) {
  VAR_5 = FUNC_0(VAR_1);
  while (VAR_5 != 0) {
   VAR_10 = FUNC_1(VAR_5, "name", VAR_6, sizeof(VAR_6));
   if (VAR_10 > 0 && FUNC_6(VAR_6, "sound") == 0)
    break;
   VAR_5 = FUNC_4(VAR_5);
  }

                VAR_10 = FUNC_1(VAR_5, "layout-id", &VAR_8,
    sizeof(VAR_8));

                if (VAR_10 > 0 && (VAR_8 == 36 || VAR_8 == 76)) {
                        VAR_10 = FUNC_2(FUNC_3(VAR_1), "reg",
      sizeof(*VAR_4), (void **)&VAR_4);
                        VAR_3[0] = VAR_4[0];
                        VAR_3[1].mr_base = VAR_4[1].mr_base;
                        VAR_3[2].mr_base = VAR_4[1].mr_base + VAR_3[1].mr_size;
                }
        }

 for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++) {
  FUNC_5(&VAR_2->mdi_resources, VAR_0, VAR_7,
      VAR_3[VAR_7].mr_base, VAR_3[VAR_7].mr_base + VAR_3[VAR_7].mr_size,
      VAR_3[VAR_7].mr_size);
 }
}
