
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct schizo_softc {int sc_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct schizo_softc*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,unsigned long long,unsigned long long) ;

__attribute__((used)) static int
FUNC_3(void *VAR_4)
{
 struct schizo_softc *VAR_5 = VAR_4;
 uint64_t VAR_6, VAR_7;
 int VAR_8;

 VAR_6 = FUNC_0(VAR_5, VAR_2);
 for (VAR_8 = 0; VAR_8 < 1000; VAR_8++)
  if (((VAR_7 = FUNC_0(VAR_5, VAR_3)) &
      VAR_1) == 0)
   break;
 FUNC_2("%s: uncorrectable DMA error AFAR %#llx AFSR %#llx",
     FUNC_1(VAR_5->sc_dev), (unsigned long long)VAR_6,
     (unsigned long long)VAR_7);
 return (VAR_0);
}
