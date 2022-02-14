
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct smuiic_softc {int sc_iic_inuse; int sc_busno; int sc_mtx; } ;
struct smu_cmd {int* data; int len; void* cmd; } ;
struct iic_msg {int flags; int slave; int len; int* buf; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 struct smuiic_softc* FUNC_2 (int ) ;
 int FUNC_3 (int*,int*,int) ;
 int FUNC_4 (int*,int,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct smuiic_softc*,int *,int ,char*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,struct smu_cmd*,int) ;
 int FUNC_10 (struct smuiic_softc*) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_6, struct iic_msg *VAR_7, uint32_t VAR_8)
{
 struct smuiic_softc *VAR_9 = FUNC_2(VAR_6);
 struct smu_cmd VAR_10;
 int VAR_11, VAR_12, VAR_13;

 FUNC_6(&VAR_9->sc_mtx);
 while (VAR_9->sc_iic_inuse)
  FUNC_7(VAR_9, &VAR_9->sc_mtx, 0, "smuiic", 100);

 VAR_9->sc_iic_inuse = 1;
 VAR_13 = 0;

 for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
  VAR_10.cmd = VAR_3;
  VAR_10.data[0] = VAR_9->sc_busno;
  if (VAR_7[VAR_11].flags & VAR_1)
   VAR_10.data[1] = VAR_4;
  else
   VAR_10.data[1] = VAR_5;

  VAR_10.data[2] = VAR_7[VAR_11].slave;
  if (VAR_7[VAR_11].flags & VAR_2)
   VAR_10.data[2] |= 1;

  if (VAR_7[VAR_11].flags & VAR_1) {
   FUNC_0(VAR_7[VAR_11].len < 4,
       ("oversize I2C combined message"));

   VAR_10.data[3] = FUNC_5(VAR_7[VAR_11].len, 3);
   FUNC_3(&VAR_10.data[4], VAR_7[VAR_11].buf, FUNC_5(VAR_7[VAR_11].len, 3));
   VAR_11++;
  } else {
   VAR_10.data[3] = 0;
   FUNC_4(&VAR_10.data[4], 0, 3);
  }

  VAR_10.data[7] = VAR_7[VAR_11].slave;
  if (VAR_7[VAR_11].flags & VAR_2)
   VAR_10.data[7] |= 1;

  VAR_10.data[8] = VAR_7[VAR_11].len;
  if (VAR_7[VAR_11].flags & VAR_2) {
   FUNC_4(&VAR_10.data[9], 0xff, VAR_7[VAR_11].len);
   VAR_10.len = 9;
  } else {
   FUNC_3(&VAR_10.data[9], VAR_7[VAR_11].buf, VAR_7[VAR_11].len);
   VAR_10.len = 9 + VAR_7[VAR_11].len;
  }

  FUNC_8(&VAR_9->sc_mtx);
  FUNC_9(FUNC_1(VAR_6), &VAR_10, 1);
  FUNC_6(&VAR_9->sc_mtx);

  for (VAR_12 = 0; VAR_12 < 10; VAR_12++) {
   VAR_10.cmd = VAR_3;
   VAR_10.len = 1;
   VAR_10.data[0] = 0;
   FUNC_4(&VAR_10.data[1], 0xff, VAR_7[VAR_11].len);

   FUNC_8(&VAR_9->sc_mtx);
   FUNC_9(FUNC_1(VAR_6), &VAR_10, 1);
   FUNC_6(&VAR_9->sc_mtx);

   if (!(VAR_10.data[0] & 0x80))
    break;

   FUNC_7(VAR_9, &VAR_9->sc_mtx, 0, "smuiic", 10);
  }

  if (VAR_10.data[0] & 0x80) {
   VAR_13 = VAR_0;
   VAR_7[VAR_11].len = 0;
   goto exit;
  }
  FUNC_3(VAR_7[VAR_11].buf, &VAR_10.data[1], VAR_7[VAR_11].len);
  VAR_7[VAR_11].len = VAR_10.len - 1;
 }

    exit:
 VAR_9->sc_iic_inuse = 0;
 FUNC_8(&VAR_9->sc_mtx);
 FUNC_10(VAR_9);
 return (VAR_13);
}
