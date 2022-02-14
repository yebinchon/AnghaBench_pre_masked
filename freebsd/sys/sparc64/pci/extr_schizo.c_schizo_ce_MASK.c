
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct schizo_softc {int sc_mtx; int sc_dev; int sc_stats_dma_ce; } ;


 int VAR_0 ;
 int FUNC_0 (struct schizo_softc*,int ) ;
 int FUNC_1 (struct schizo_softc*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,char*,unsigned long long,unsigned long long) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(void *VAR_4)
{
 struct schizo_softc *VAR_5 = VAR_4;
 uint64_t VAR_6, VAR_7;
 int VAR_8;

 FUNC_3(VAR_5->sc_mtx);

 VAR_6 = FUNC_0(VAR_5, VAR_1);
 for (VAR_8 = 0; VAR_8 < 1000; VAR_8++)
  if (((VAR_7 = FUNC_0(VAR_5, VAR_3)) &
      VAR_2) == 0)
   break;
 VAR_5->sc_stats_dma_ce++;
 FUNC_2(VAR_5->sc_dev,
     "correctable DMA error AFAR %#llx AFSR %#llx\n",
     (unsigned long long)VAR_6, (unsigned long long)VAR_7);


 FUNC_1(VAR_5, VAR_3, VAR_7);

 FUNC_4(VAR_5->sc_mtx);

 return (VAR_0);
}
