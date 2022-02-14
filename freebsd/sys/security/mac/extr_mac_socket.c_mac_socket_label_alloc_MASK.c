
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct label {int dummy; } ;


 int FUNC_0 (int ,struct label*,int) ;
 int FUNC_1 (int ,struct label*,int) ;
 int FUNC_2 (int ,struct label*) ;
 int VAR_0 ;
 struct label* FUNC_3 (int) ;
 int FUNC_4 (struct label*) ;
 int VAR_1 ;
 int VAR_2 ;

struct label *
FUNC_5(int VAR_3)
{
 struct label *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4 == ((void*)0))
  return (((void*)0));

 if (VAR_3 & VAR_0)
  FUNC_0(VAR_2, VAR_4, VAR_3);
 else
  FUNC_1(VAR_2, VAR_4, VAR_3);
 if (VAR_5) {
  FUNC_2(VAR_1, VAR_4);
  FUNC_4(VAR_4);
  return (((void*)0));
 }
 return (VAR_4);
}
