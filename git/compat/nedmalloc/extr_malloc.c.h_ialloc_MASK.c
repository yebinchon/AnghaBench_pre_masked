
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mstate ;
typedef int mchunkptr ;
typedef scalar_t__ flag_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 size_t VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ,size_t) ;
 size_t FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 void* FUNC_10 (int ,scalar_t__) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (void*) ;
 int FUNC_13 (size_t*,int ,size_t) ;
 size_t FUNC_14 (size_t) ;
 int FUNC_15 (int ,int ,size_t) ;
 scalar_t__ FUNC_16 (int ) ;

__attribute__((used)) static void** FUNC_17(mstate VAR_2,
       size_t VAR_3,
       size_t* VAR_4,
       int VAR_5,
       void* VAR_6[]) {
  size_t VAR_7;
  size_t VAR_8;
  size_t VAR_9;
  void* VAR_10;
  mchunkptr VAR_11;
  size_t VAR_12;
  void** VAR_13;
  mchunkptr VAR_14;
  flag_t VAR_15;
  size_t VAR_16;
  size_t VAR_17;

  FUNC_9();

  if (VAR_6 != 0) {
    if (VAR_3 == 0)
      return VAR_6;
    VAR_13 = VAR_6;
    VAR_9 = 0;
  }
  else {

    if (VAR_3 == 0)
      return (void**)FUNC_10(VAR_2, 0);
    VAR_13 = 0;
    VAR_9 = FUNC_14(VAR_3 * (sizeof(void*)));
  }


  if (VAR_5 & 0x1) {
    VAR_7 = FUNC_14(*VAR_4);
    VAR_8 = VAR_3 * VAR_7;
  }
  else {
    VAR_7 = 0;
    VAR_8 = 0;
    for (VAR_17 = 0; VAR_17 != VAR_3; ++VAR_17)
      VAR_8 += FUNC_14(VAR_4[VAR_17]);
  }

  VAR_16 = VAR_8 + VAR_9;






  VAR_15 = FUNC_16(VAR_2);
  FUNC_7(VAR_2);
  VAR_10 = FUNC_10(VAR_2, VAR_16 - VAR_0);
  if (VAR_15)
    FUNC_8(VAR_2);
  if (VAR_10 == 0)
    return 0;

  if (FUNC_1(VAR_2)) return 0;
  VAR_11 = FUNC_12(VAR_10);
  VAR_12 = FUNC_6(VAR_11);

  FUNC_2(!FUNC_11(VAR_11));

  if (VAR_5 & 0x2) {
    FUNC_13((size_t*)VAR_10, 0, VAR_12 - VAR_1 - VAR_9);
  }


  if (VAR_13 == 0) {
    size_t VAR_18;
    VAR_14 = FUNC_5(VAR_11, VAR_8);
    VAR_18 = VAR_12 - VAR_8;
    VAR_13 = (void**) (FUNC_4(VAR_14));
    FUNC_15(VAR_2, VAR_14, VAR_18);
    VAR_12 = VAR_8;
  }


  for (VAR_17 = 0; ; ++VAR_17) {
    VAR_13[VAR_17] = FUNC_4(VAR_11);
    if (VAR_17 != VAR_3-1) {
      if (VAR_7 != 0)
 VAR_16 = VAR_7;
      else
 VAR_16 = FUNC_14(VAR_4[VAR_17]);
      VAR_12 -= VAR_16;
      FUNC_15(VAR_2, VAR_11, VAR_16);
      VAR_11 = FUNC_5(VAR_11, VAR_16);
    }
    else {
      FUNC_15(VAR_2, VAR_11, VAR_12);
      break;
    }
  }
  FUNC_0(VAR_2);
  return VAR_13;
}
