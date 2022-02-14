
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda_state {int m_TMValue_RFCal; } ;


 int FUNC_0 (struct tda_state*) ;
 int FUNC_1 (struct tda_state*,int) ;
 int FUNC_2 (struct tda_state*,int *) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct tda_state *VAR_0)
{
 int VAR_1 = 0;
 do {
  FUNC_3(200);
  VAR_1 = FUNC_0(VAR_0);
  if (VAR_1 < 0)
   break;
  VAR_1 = FUNC_1(VAR_0, 0);
  if (VAR_1 < 0)
   break;
  VAR_1 = FUNC_1(VAR_0, 1);
  if (VAR_1 < 0)
   break;
  VAR_1 = FUNC_1(VAR_0, 2);
  if (VAR_1 < 0)
   break;
  VAR_1 = FUNC_1(VAR_0, 3);
  if (VAR_1 < 0)
   break;
  VAR_1 = FUNC_1(VAR_0, 4);
  if (VAR_1 < 0)
   break;
  VAR_1 = FUNC_1(VAR_0, 5);
  if (VAR_1 < 0)
   break;
  VAR_1 = FUNC_1(VAR_0, 6);
  if (VAR_1 < 0)
   break;
  VAR_1 = FUNC_2(VAR_0, &VAR_0->m_TMValue_RFCal);
  if (VAR_1 < 0)
   break;
 } while (0);

 return VAR_1;
}
