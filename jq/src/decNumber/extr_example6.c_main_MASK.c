
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int yearspack ;
typedef int uint8_t ;
typedef int startpack ;
typedef int respack ;
typedef int ratepack ;
typedef int int32_t ;
typedef int decNumber ;
struct TYPE_9__ {int digits; scalar_t__ traps; } ;
typedef TYPE_1__ decContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *,int *,int *,TYPE_1__*) ;
 int FUNC_2 (int *,int *,int *,TYPE_1__*) ;
 int FUNC_3 (int *,char*,TYPE_1__*) ;
 int FUNC_4 (int *,int *,int *,TYPE_1__*) ;
 int FUNC_5 (int *,int *,int *,TYPE_1__*) ;
 int FUNC_6 (int *,int *,int *,TYPE_1__*) ;
 int FUNC_7 (int*,int,int*,int *) ;
 int FUNC_8 (int*,int,int*,int *) ;
 int FUNC_9 (char*,char*,...) ;
 int FUNC_10 (char*,char*,int) ;

int FUNC_11(int VAR_1, char *VAR_2[]) {
  {
  decNumber VAR_3, VAR_4, VAR_5;
  decNumber VAR_6, VAR_7, VAR_8;
  decNumber VAR_9;
  decContext VAR_10;

  uint8_t VAR_11[]={0x01, 0x00, 0x00, 0x0C};
  int32_t VAR_12=0;
  uint8_t VAR_13[]={0x06, 0x5C};
  int32_t VAR_14=1;
  uint8_t VAR_15[]={0x02, 0x0C};
  int32_t VAR_16=0;
  uint8_t VAR_17[16];
  int32_t VAR_18;
  char VAR_19[49];
  int VAR_20;

  if (VAR_1<0) FUNC_9("%s", VAR_2[1]);

  FUNC_0(&VAR_10, VAR_0);
  VAR_10.traps=0;
  VAR_10.digits=25;
  FUNC_3(&VAR_3, "1", &VAR_10);
  FUNC_3(&VAR_4, "-2", &VAR_10);
  FUNC_3(&VAR_5, "100", &VAR_10);

  FUNC_8(VAR_11, sizeof(VAR_11), &VAR_12, &VAR_6);
  FUNC_8(VAR_13, sizeof(VAR_13), &VAR_14, &VAR_7);
  FUNC_8(VAR_15, sizeof(VAR_15), &VAR_16, &VAR_8);

  FUNC_2(&VAR_7, &VAR_7, &VAR_5, &VAR_10);
  FUNC_1(&VAR_7, &VAR_7, &VAR_3, &VAR_10);
  FUNC_5(&VAR_7, &VAR_7, &VAR_8, &VAR_10);
  FUNC_4(&VAR_9, &VAR_7, &VAR_6, &VAR_10);
  FUNC_6(&VAR_9, &VAR_9, &VAR_4, &VAR_10);

  FUNC_7(VAR_17, sizeof(VAR_17), &VAR_18, &VAR_9);


  for (VAR_20=0; VAR_20<16; VAR_20++) {
    FUNC_10(&VAR_19[VAR_20*3], "%02x ", VAR_17[VAR_20]);
    }
  FUNC_9("Result: %s (scale=%ld)\n", VAR_19, (long int)VAR_18);

  }
  return 0;
  }
