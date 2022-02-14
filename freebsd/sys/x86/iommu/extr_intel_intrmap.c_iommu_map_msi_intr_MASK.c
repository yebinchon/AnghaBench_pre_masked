
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int u_int ;
struct dmar_unit {int ir_enabled; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct dmar_unit*) ;
 int VAR_5 ;
 int FUNC_4 (int,char*) ;
 int VAR_6 ;
 struct dmar_unit* FUNC_5 (int ,int *,int*) ;
 int FUNC_6 (struct dmar_unit*,int,int,int ) ;
 scalar_t__ VAR_7 ;

int
FUNC_7(device_t VAR_8, u_int VAR_9, u_int VAR_10, u_int VAR_11,
    uint64_t *VAR_12, uint32_t *VAR_13)
{
 struct dmar_unit *VAR_14;
 uint64_t VAR_15;
 uint16_t VAR_16;
 int VAR_17;

 VAR_14 = FUNC_5(VAR_8, &VAR_16, &VAR_17);
 if (VAR_17) {
  FUNC_4(VAR_14 == ((void*)0), ("DMAR cannot translate itself"));





  *VAR_13 = VAR_10;
  *VAR_12 = VAR_6 | ((VAR_9 & 0xff) << 12);
  if (VAR_7)
   *VAR_12 |= ((uint64_t)VAR_9 & 0xffffff00) << 32;
  else
   FUNC_4(VAR_9 <= 0xff, ("cpu id too big %d", VAR_9));
  return (0);
 }
 if (VAR_14 == ((void*)0) || !VAR_14->ir_enabled || VAR_11 == -1)
  return (VAR_5);

 VAR_15 = (FUNC_3(VAR_14) ? FUNC_0(VAR_9) :
     FUNC_1(VAR_9)) | FUNC_2(VAR_10) |
     VAR_0 | VAR_4 | VAR_3 |
     VAR_1 | VAR_2;
 FUNC_6(VAR_14, VAR_11, VAR_15, VAR_16);

 if (VAR_12 != ((void*)0)) {




  *VAR_12 = VAR_6 | ((VAR_11 & 0x7fff) << 5) |
      ((VAR_11 & 0x8000) << 2) | 0x18;
  *VAR_13 = 0;
 }
 return (0);
}
