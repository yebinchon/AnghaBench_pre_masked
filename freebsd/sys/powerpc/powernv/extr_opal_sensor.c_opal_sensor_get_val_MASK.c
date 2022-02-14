
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct opal_sensor_softc {int dummy; } ;
struct opal_msg {int * params; } ;
typedef int msg ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct opal_sensor_softc*) ;
 int FUNC_2 (struct opal_sensor_softc*) ;
 int FUNC_3 (struct opal_msg*,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ,int,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct opal_msg*,int,int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int
FUNC_9(struct opal_sensor_softc *VAR_4, uint32_t VAR_5, uint64_t *VAR_6)
{
 struct opal_msg VAR_7;
 uint32_t VAR_8;
 int VAR_9, VAR_10;

 VAR_10 = FUNC_4();
 FUNC_1(VAR_4);
 VAR_9 = FUNC_5(VAR_2, VAR_5, VAR_10, FUNC_8(&VAR_8));

 if (VAR_9 == VAR_1) {

  FUNC_0(100);
  FUNC_3(&VAR_7, sizeof(VAR_7));
  VAR_9 = FUNC_7(&VAR_7, sizeof(VAR_7), VAR_10);

  if (VAR_9 == VAR_3)
   VAR_8 = VAR_7.params[0];
 }
 FUNC_2(VAR_4);

 if (VAR_9 == VAR_3)
  *VAR_6 = VAR_8;
 else
  VAR_9 = VAR_0;

 FUNC_6(VAR_10);
 return (VAR_9);
}
