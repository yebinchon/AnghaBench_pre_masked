
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct drxd_state {int m_EcOcRegOcModeLop; int m_EcOcRegSncSncLvl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct drxd_state*,int ,int*,int ) ;
 int FUNC_1 (struct drxd_state*,int ,int,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct drxd_state *VAR_17)
{
 int VAR_18 = 0;
 u16 VAR_19 = 0;
 u16 VAR_20 = VAR_17->m_EcOcRegOcModeLop;
 u16 VAR_21 = 0;
 u16 VAR_22 = 0;

 do {

  VAR_18 = FUNC_0(VAR_17, VAR_16, &VAR_19, 0);
  if (VAR_18 < 0)
   break;

  VAR_17->m_EcOcRegSncSncLvl = VAR_19;



  VAR_18 = FUNC_0(VAR_17, VAR_14, &VAR_21, 0);
  if (VAR_18 < 0)
   break;
  VAR_18 = FUNC_0(VAR_17, VAR_13, &VAR_22, 0);
  if (VAR_18 < 0)
   break;
  VAR_18 = FUNC_1(VAR_17, VAR_5, VAR_21, 0);
  if (VAR_18 < 0)
   break;
  VAR_18 = FUNC_1(VAR_17, VAR_4, VAR_22, 0);
  if (VAR_18 < 0)
   break;
  VAR_20 &= ~(VAR_9);
  VAR_20 |= VAR_8;
  VAR_18 = FUNC_1(VAR_17, VAR_12, VAR_20, 0);
  if (VAR_18 < 0)
   break;
  VAR_18 = FUNC_1(VAR_17, VAR_2, VAR_1, 0);
  if (VAR_18 < 0)
   break;

  FUNC_2(1);

  VAR_18 = FUNC_1(VAR_17, VAR_6, VAR_7, 0);
  if (VAR_18 < 0)
   break;


  VAR_19 &= ~(VAR_15);
  VAR_18 = FUNC_1(VAR_17, VAR_16, VAR_19, 0);
  if (VAR_18 < 0)
   break;
  VAR_20 &= ~(VAR_11);
  VAR_20 |= VAR_10;
  VAR_20 |= 0x2;
  VAR_18 = FUNC_1(VAR_17, VAR_12, VAR_20, 0);
  if (VAR_18 < 0)
   break;
  VAR_18 = FUNC_1(VAR_17, VAR_3, 0x0, 0);
  if (VAR_18 < 0)
   break;
  VAR_18 = FUNC_1(VAR_17, VAR_2, VAR_0, 0);
  if (VAR_18 < 0)
   break;
 } while (0);

 return VAR_18;
}
