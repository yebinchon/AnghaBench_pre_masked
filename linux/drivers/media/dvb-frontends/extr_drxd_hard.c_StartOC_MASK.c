
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drxd_state {int m_EcOcRegOcModeLop; int m_EcOcRegSncSncLvl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct drxd_state*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct drxd_state *VAR_7)
{
 int VAR_8 = 0;

 do {

  VAR_8 = FUNC_0(VAR_7, VAR_2, VAR_1, 0);
  if (VAR_8 < 0)
   break;


  VAR_8 = FUNC_0(VAR_7, VAR_6, VAR_7->m_EcOcRegSncSncLvl, 0);
  if (VAR_8 < 0)
   break;
  VAR_8 = FUNC_0(VAR_7, VAR_5, VAR_7->m_EcOcRegOcModeLop, 0);
  if (VAR_8 < 0)
   break;


  VAR_8 = FUNC_0(VAR_7, VAR_4, VAR_3, 0);
  if (VAR_8 < 0)
   break;


  VAR_8 = FUNC_0(VAR_7, VAR_2, VAR_0, 0);
  if (VAR_8 < 0)
   break;
 } while (0);
 return VAR_8;
}
