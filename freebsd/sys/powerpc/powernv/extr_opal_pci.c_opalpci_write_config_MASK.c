
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int u_int ;
struct opalpci_softc {int phb_id; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct opalpci_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int,int,...) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_8, u_int VAR_9, u_int VAR_10, u_int VAR_11,
    u_int VAR_12, uint32_t VAR_13, int VAR_14)
{
 struct opalpci_softc *VAR_15;
 uint64_t VAR_16;
 int VAR_17 = VAR_7;

 VAR_15 = FUNC_0(VAR_8);

 VAR_16 = (VAR_9 << 8) | ((VAR_10 & 0x1f) << 3) | (VAR_11 & 0x7);

 switch (VAR_14) {
 case 1:
  VAR_17 = FUNC_1(VAR_2, VAR_15->phb_id,
      VAR_16, VAR_12, VAR_13);
  break;
 case 2:
  VAR_17 = FUNC_1(VAR_3, VAR_15->phb_id,
      VAR_16, VAR_12, VAR_13);
  break;
 case 4:
  VAR_17 = FUNC_1(VAR_4, VAR_15->phb_id,
      VAR_16, VAR_12, VAR_13);
  break;
 }

 if (VAR_17 != VAR_7) {




  if (VAR_17 != VAR_1) {
   FUNC_1(VAR_6,
       VAR_15->phb_id, VAR_5,
       VAR_0);
  }
 }
}
