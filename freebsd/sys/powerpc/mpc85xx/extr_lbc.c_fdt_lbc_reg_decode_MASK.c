
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lbc_softc {TYPE_1__* sc_banks; } ;
struct lbc_devinfo {int di_bank; int di_res; } ;
typedef int rman_res_t ;
typedef int phandle_t ;
typedef int pcell_t ;
struct TYPE_2__ {int kva; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,void**) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int*) ;
 int VAR_1 ;
 int FUNC_3 (char*,int,int,...) ;
 scalar_t__ FUNC_4 (int ,int*,int*) ;
 int FUNC_5 (void*,int) ;
 int FUNC_6 (int *,int ,int,int,int,int) ;

__attribute__((used)) static int
FUNC_7(phandle_t VAR_2, struct lbc_softc *VAR_3,
    struct lbc_devinfo *VAR_4)
{
 rman_res_t VAR_5, VAR_6, VAR_7;
 pcell_t *VAR_8, *VAR_9;
 pcell_t VAR_10, VAR_11;
 int VAR_12, VAR_13;
 int VAR_14, VAR_15, VAR_16, VAR_17;

 if (FUNC_4(FUNC_1(VAR_2), &VAR_10, &VAR_11) != 0)
  return (VAR_0);

 VAR_12 = sizeof(pcell_t) * (VAR_10 + VAR_11);
 VAR_13 = FUNC_0(VAR_2, "reg", VAR_12,
     (void **)&VAR_8);
 FUNC_3("addr_cells = %d, size_cells = %d\n", VAR_10, VAR_11);
 FUNC_3("tuples = %d, tuple size = %d\n", VAR_13, VAR_12);
 if (VAR_13 <= 0)

  return (0);

 VAR_9 = VAR_8;
 for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {

  VAR_17 = FUNC_5((void *)VAR_8, 1);
  VAR_4->di_bank = VAR_17;
  VAR_8 += 1;


  VAR_5 = VAR_7 = 0;
  for (VAR_15 = 0; VAR_15 < VAR_10; VAR_15++) {
   VAR_5 <<= 32;
   VAR_5 |= VAR_8[VAR_15];
  }
  for (VAR_15 = 0; VAR_15 < VAR_11; VAR_15++) {
   VAR_7 <<= 32;
   VAR_7 |= VAR_8[VAR_10 + VAR_15 - 1];
  }
  VAR_8 += VAR_10 - 1 + VAR_11;


  VAR_5 = VAR_3->sc_banks[VAR_17].kva + VAR_5;
  VAR_6 = VAR_5 + VAR_7 - 1;

  FUNC_3("reg addr bank = %d, start = %jx, end = %jx, "
      "count = %jx\n", VAR_17, VAR_5, VAR_6, VAR_7);


  FUNC_6(&VAR_4->di_res, VAR_1, VAR_17, VAR_5,
      VAR_6, VAR_7);
 }
 VAR_16 = 0;
 FUNC_2(VAR_9);
 return (VAR_16);
}
