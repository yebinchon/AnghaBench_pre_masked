
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct opal_i2c_softc {int opal_id; } ;
struct opal_i2c_request {int buffer_pa; int size; int addr; int type; } ;
struct iic_msg {int flags; int slave; scalar_t__ buf; int len; } ;
typedef int req ;
typedef int device_t ;


 int FUNC_0 (struct opal_i2c_softc*) ;
 int FUNC_1 (struct opal_i2c_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct opal_i2c_softc* FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,struct opal_i2c_request*) ;
 int FUNC_7 (struct opal_i2c_request*,int ,int) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_3, struct iic_msg *VAR_4, uint32_t VAR_5)
{
 struct opal_i2c_softc *VAR_6;
 int VAR_7, VAR_8 = 0;
 struct opal_i2c_request VAR_9;

 VAR_6 = FUNC_2(VAR_3);

 FUNC_7(&VAR_9, 0, sizeof(VAR_9));

 FUNC_0(VAR_6);
 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  VAR_9.type = (VAR_4[VAR_7].flags & VAR_0) ?
      VAR_1 : VAR_2;
  VAR_9.addr = FUNC_3(VAR_4[VAR_7].slave >> 1);
  VAR_9.size = FUNC_4(VAR_4[VAR_7].len);
  VAR_9.buffer_pa = FUNC_5(FUNC_8((uint64_t)VAR_4[VAR_7].buf));

  VAR_8 = FUNC_6(VAR_6->opal_id, &VAR_9);
 }
 FUNC_1(VAR_6);

 return (VAR_8);
}
