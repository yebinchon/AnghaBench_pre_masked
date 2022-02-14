
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UInt32 ;
typedef int Byte ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 () ;
 void** FUNC_1 (int) ;
 int* VAR_6 ;
 size_t* VAR_7 ;
 void** FUNC_2 (int) ;
 void* FUNC_3 (int,int,int,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int) ;

void FUNC_5(void)
{
  unsigned VAR_11;
  for (VAR_11 = 0; VAR_11 < 256; VAR_11++)
    VAR_6[VAR_7[VAR_11]] = (Byte)VAR_11;

  for (VAR_11 = 0; VAR_11 < 256; VAR_11++)
  {
    {
      UInt32 VAR_12 = VAR_7[VAR_11];
      UInt32 VAR_13 = FUNC_4(VAR_12);
      UInt32 VAR_14 = VAR_13 ^ VAR_12;
      FUNC_2(0)[VAR_11] = FUNC_3(VAR_13, VAR_12, VAR_12, VAR_14);
      FUNC_2(1)[VAR_11] = FUNC_3(VAR_14, VAR_13, VAR_12, VAR_12);
      FUNC_2(2)[VAR_11] = FUNC_3(VAR_12, VAR_14, VAR_13, VAR_12);
      FUNC_2(3)[VAR_11] = FUNC_3(VAR_12, VAR_12, VAR_14, VAR_13);
    }
    {
      UInt32 VAR_15 = VAR_6[VAR_11];
      UInt32 VAR_16 = FUNC_4(VAR_15);
      UInt32 VAR_17 = FUNC_4(VAR_16);
      UInt32 VAR_18 = FUNC_4(VAR_17);
      UInt32 VAR_19 = VAR_18 ^ VAR_15;
      UInt32 VAR_20 = VAR_18 ^ VAR_16 ^ VAR_15;
      UInt32 VAR_21 = VAR_18 ^ VAR_17 ^ VAR_15;
      UInt32 VAR_22 = VAR_18 ^ VAR_17 ^ VAR_16;
      FUNC_1(0)[VAR_11] = FUNC_3(VAR_22, VAR_19, VAR_21, VAR_20);
      FUNC_1(1)[VAR_11] = FUNC_3(VAR_20, VAR_22, VAR_19, VAR_21);
      FUNC_1(2)[VAR_11] = FUNC_3(VAR_21, VAR_20, VAR_22, VAR_19);
      FUNC_1(3)[VAR_11] = FUNC_3(VAR_19, VAR_21, VAR_20, VAR_22);
    }
  }

  VAR_9 = VAR_2;
  VAR_8 = VAR_0;
  VAR_10 = VAR_4;
}
