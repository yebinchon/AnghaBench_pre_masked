
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vmem_addr_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int u_int ;
struct dmar_unit {int irtids; int ir_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct dmar_unit*) ;
 int VAR_9 ;
 unsigned long long VAR_10 ;
 unsigned long long VAR_11 ;
 unsigned long long VAR_12 ;
 unsigned long long VAR_13 ;
 unsigned long long VAR_14 ;



 int FUNC_4 (int,char*) ;
 int VAR_15 ;
 int VAR_16 ;
 struct dmar_unit* FUNC_5 (int,int *) ;
 int FUNC_6 (struct dmar_unit*,int,int,int ) ;
 int FUNC_7 (int ,int,int,int*) ;

int
FUNC_8(u_int VAR_17, u_int VAR_18, u_int VAR_19, bool VAR_20,
    bool VAR_21, int VAR_22, u_int *VAR_23, uint32_t *VAR_24, uint32_t *VAR_25)
{
 struct dmar_unit *VAR_26;
 vmem_addr_t VAR_27;
 uint64_t VAR_28, VAR_29;
 u_int VAR_30;
 int VAR_31;
 uint16_t VAR_32;

 VAR_26 = FUNC_5(VAR_17, &VAR_32);
 if (VAR_26 == ((void*)0) || !VAR_26->ir_enabled) {
  *VAR_23 = -1;
  return (VAR_9);
 }

 VAR_31 = FUNC_7(VAR_26->irtids, 1, VAR_15 | VAR_16, &VAR_27);
 if (VAR_31 != 0) {
  FUNC_4(VAR_31 != VAR_9,
      ("impossible EOPNOTSUPP from vmem"));
  return (VAR_31);
 }
 VAR_30 = VAR_27;
 VAR_28 = 0;
 switch (VAR_22) {
 case 130:
  VAR_28 |= VAR_0;
  break;
 case 129:
  VAR_28 |= VAR_2;
  break;
 case 128:
  VAR_28 |= VAR_3;
  break;
 default:
  FUNC_4(VAR_19 != 0, ("No vector for IRQ %u", VAR_22));
  VAR_28 |= VAR_1 | FUNC_2(VAR_19);
  break;
 }
 VAR_28 |= (FUNC_3(VAR_26) ? FUNC_0(VAR_18) :
     FUNC_1(VAR_18)) |
     (VAR_20 ? VAR_7 : VAR_8) |
     VAR_6 | VAR_4 | VAR_5;
 FUNC_6(VAR_26, VAR_30, VAR_28, VAR_32);

 if (VAR_24 != ((void*)0)) {




  VAR_29 = (1ULL << 48) | ((uint64_t)(VAR_30 & 0x7fff) << 49) |
      ((VAR_30 & 0x8000) != 0 ? (1 << 11) : 0) |
      (VAR_20 ? VAR_13 : VAR_14) |
      (VAR_21 ? VAR_11 : VAR_12) |
      VAR_10 | VAR_19;
  *VAR_24 = VAR_29 >> 32;
  *VAR_25 = VAR_29;
 }
 *VAR_23 = VAR_30;
 return (0);
}
