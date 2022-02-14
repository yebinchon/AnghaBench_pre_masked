
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct pcr_softc {int* pcr_vals; } ;
struct cf_setting {int freq; } ;
typedef int register_t ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct pcr_softc* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_7, const struct cf_setting *VAR_8)
{
 struct pcr_softc *VAR_9;
 register_t VAR_10, VAR_11;
 uint64_t VAR_12;

 if (VAR_8 == ((void*)0))
  return (VAR_0);
 VAR_9 = FUNC_1(VAR_7);



 VAR_10 = VAR_5;

 if (VAR_8->freq == 10000)
  VAR_10 |= VAR_9->pcr_vals[0];
 else if (VAR_8->freq == 5000)
  VAR_10 |= VAR_9->pcr_vals[1];
 else if (VAR_8->freq == 2500)
  VAR_10 |= VAR_9->pcr_vals[2];

 VAR_11 = FUNC_3();
 FUNC_4(VAR_11 & ~VAR_1); FUNC_2();



 FUNC_6(VAR_4,0);
 FUNC_6(VAR_4,VAR_5);



 FUNC_6(VAR_4, VAR_10);



 do {
  FUNC_0(100);
  VAR_12 = FUNC_5(VAR_6);
 } while ((VAR_12 & VAR_3) && !(VAR_12 & VAR_2));

 FUNC_4(VAR_11); FUNC_2();

 return (0);
}
