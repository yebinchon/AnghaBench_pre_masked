
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct cuda_softc {int sc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct cuda_softc*,int,int,int *) ;

__attribute__((used)) static void
FUNC_2(void *VAR_4, int VAR_5)
{
 struct cuda_softc *VAR_6 = VAR_4;
 uint8_t VAR_7[] = {VAR_2, 0};

 VAR_7[1] = (VAR_5 & VAR_3) ? VAR_0 : VAR_1;
 FUNC_0(VAR_6->sc_dev);
 FUNC_1(VAR_6, 1, 2, VAR_7);

 while (1)
  FUNC_0(VAR_6->sc_dev);
}
