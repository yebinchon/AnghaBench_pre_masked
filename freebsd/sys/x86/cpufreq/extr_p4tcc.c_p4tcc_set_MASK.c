
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct p4tcc_softc {int lowest_val; int auto_mode; } ;
struct cf_setting {int freq; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct p4tcc_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_7, const struct cf_setting *VAR_8)
{
 struct p4tcc_softc *VAR_9;
 uint64_t VAR_10, VAR_11;
 int VAR_12;

 if (VAR_8 == ((void*)0))
  return (VAR_0);
 VAR_9 = FUNC_0(VAR_7);





 VAR_12 = VAR_8->freq * VAR_4 / 10000;
 if (VAR_12 * 10000 != VAR_8->freq * VAR_4 ||
     VAR_12 < VAR_9->lowest_val || VAR_12 > VAR_4)
  return (VAR_0);






 VAR_11 = FUNC_1(VAR_2);
 VAR_10 = (VAR_4 - 1) << VAR_5;
 VAR_11 &= ~(VAR_10 | VAR_3);
 if (VAR_12 < VAR_4)
  VAR_11 |= (VAR_12 << VAR_5) | VAR_3;
 FUNC_2(VAR_2, VAR_11);
 if (VAR_11 & VAR_3)
  VAR_9->auto_mode = VAR_1;
 else
  VAR_9->auto_mode = VAR_6;

 return (0);
}
