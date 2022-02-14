
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nuport_mac_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned long,unsigned long) ;

__attribute__((used)) static inline int FUNC_3(struct nuport_mac_priv *VAR_5)
{
 unsigned long VAR_6;
 unsigned long VAR_7 = VAR_4 + 3 * VAR_1;

 do {
  VAR_6 = VAR_4;
  if (!(FUNC_1(VAR_2) & VAR_3))
   return 0;
  FUNC_0();
 } while (!FUNC_2(VAR_6, VAR_7));

 return -VAR_0;
}
