
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct pmu_softc {int dummy; } ;


 int FUNC_0 (int,int) ;
 int* VAR_0 ;
 scalar_t__* VAR_1 ;
 scalar_t__ FUNC_1 (struct pmu_softc*) ;
 int FUNC_2 (struct pmu_softc*,int*) ;
 int FUNC_3 (struct pmu_softc*,int ) ;
 int FUNC_4 (struct pmu_softc*,int) ;
 int FUNC_5 (struct pmu_softc*,int ,int) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_6(void *VAR_3, int VAR_4, int VAR_5, uint8_t *VAR_6, int VAR_7,
    uint8_t *VAR_8)
{
 struct pmu_softc *VAR_9 = VAR_3;
 int VAR_10, VAR_11 = -1;
 uint8_t VAR_12, VAR_13;

 VAR_13 = FUNC_3(VAR_9, VAR_2);
 VAR_13 &= 0x10;
 FUNC_5(VAR_9, VAR_2, VAR_13);


 do {} while (FUNC_1(VAR_9));


 FUNC_4(VAR_9, VAR_4);


 if (VAR_1[VAR_4] < 0) {
  FUNC_4(VAR_9, VAR_5);
 }

 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
  FUNC_4(VAR_9, VAR_6[VAR_10]);
 }


 VAR_11 = VAR_0[VAR_4];
 if (VAR_11 == 0)
  goto done;


 if (VAR_11 == 1) {
  FUNC_2(VAR_9, VAR_8);
  goto done;
 } else
  VAR_8[0] = VAR_4;
 if (VAR_11 < 0) {
  FUNC_2(VAR_9, &VAR_12);
  VAR_11 = VAR_12 + 1;
 }
 for (VAR_10 = 1; VAR_10 < FUNC_0(VAR_11, VAR_7); VAR_10++)
  FUNC_2(VAR_9, &VAR_8[VAR_10]);

done:
 FUNC_5(VAR_9, VAR_2, (VAR_13 == 0) ? 0 : 0x90);

 return VAR_11;
}
