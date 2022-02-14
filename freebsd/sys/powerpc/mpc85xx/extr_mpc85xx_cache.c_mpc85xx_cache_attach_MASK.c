
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpc85xx_cache_softc {int * sc_mem; } ;
typedef int device_t ;
typedef int cache_size ;
typedef int cache_line_size ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_1 (int ,int ,int*,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int) ;
 struct mpc85xx_cache_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_6)
{
 struct mpc85xx_cache_softc *VAR_7 = FUNC_4(VAR_6);
 int VAR_8;
 int VAR_9, VAR_10;


 VAR_8 = 0;
 VAR_7->sc_mem = FUNC_1(VAR_6,
       VAR_5, &VAR_8, VAR_4);
 if (VAR_7->sc_mem == ((void*)0))
  return (VAR_0);


 __asm __volatile ("mbar; isync" ::: "memory");
 FUNC_3(VAR_7->sc_mem, VAR_3, VAR_1 | VAR_2);
 FUNC_2(VAR_7->sc_mem, VAR_3);
 __asm __volatile ("mbar" ::: "memory");

 VAR_9 = 0;
 VAR_10 = 0;
 FUNC_0(FUNC_6(VAR_6), "cache-size", &VAR_10,
     sizeof(VAR_10));
 FUNC_0(FUNC_6(VAR_6), "cache-line-size",
     &VAR_9, sizeof(VAR_9));

 if (VAR_9 != 0 && VAR_10 != 0)
  FUNC_5(VAR_6,
      "L2 cache size: %dKB, cache line size: %d bytes\n",
      VAR_10 / 1024, VAR_9);

 return (0);
}
