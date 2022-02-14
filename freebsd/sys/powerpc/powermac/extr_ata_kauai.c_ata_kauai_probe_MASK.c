
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct ata_kauai_softc {int shasta; } ;
typedef int phandle_t ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ kpd_devid; int * kpd_desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int,int) ;
 int FUNC_2 (struct ata_kauai_softc*,int) ;
 struct ata_kauai_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 TYPE_1__* VAR_2 ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (char const*,char*) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_3)
{
 struct ata_kauai_softc *VAR_4;
 u_int32_t VAR_5;
 phandle_t VAR_6;
 const char *VAR_7 = ((void*)0);
 int VAR_8, VAR_9;

 VAR_9 = 0;
 VAR_5 = FUNC_7(VAR_3);
        for (VAR_8 = 0; VAR_2[VAR_8].kpd_desc != ((void*)0); VAR_8++) {
                if (VAR_5 == VAR_2[VAR_8].kpd_devid) {
   VAR_9 = 1;
                        FUNC_4(VAR_3, VAR_2[VAR_8].kpd_desc);
  }
 }

 if (!VAR_9)
  return (VAR_0);

 VAR_6 = FUNC_6(VAR_3);
 VAR_4 = FUNC_3(VAR_3);
 FUNC_2(VAR_4, sizeof(struct ata_kauai_softc));

 VAR_7 = FUNC_5(VAR_3);
 if (VAR_7 != ((void*)0) && FUNC_8(VAR_7,"shasta-ata") == 0)
  VAR_4->shasta = 1;


 if (!VAR_4->shasta &&
     (VAR_7 == ((void*)0) || FUNC_8(VAR_7, "K2-UATA") != 0))
  FUNC_1(VAR_3, VAR_1, 0, 39, 1);

        return (FUNC_0(VAR_3));
}
