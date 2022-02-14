
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pd_unit {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pd_unit*,char*,int) ;
 int FUNC_1 (struct pd_unit*,int) ;
 int FUNC_2 (struct pd_unit*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct pd_unit *VAR_5, int VAR_6, char *VAR_7)
{
 int VAR_8, VAR_9, VAR_10;

 VAR_8 = 0;
 while (VAR_8 < VAR_1) {
  VAR_9 = FUNC_2(VAR_5);
  VAR_8++;
  if (((VAR_9 & VAR_6) == VAR_6) && !(VAR_9 & VAR_3))
   break;
  FUNC_3(VAR_2);
 }
 VAR_10 = (FUNC_1(VAR_5, 1) << 8) + FUNC_1(VAR_5, 7);
 if (VAR_8 >= VAR_1)
  VAR_10 |= VAR_0;
 if ((VAR_10 & (VAR_4 | VAR_0)) && (VAR_7 != ((void*)0)))
  FUNC_0(VAR_5, VAR_7, VAR_10);
 return VAR_10;
}
