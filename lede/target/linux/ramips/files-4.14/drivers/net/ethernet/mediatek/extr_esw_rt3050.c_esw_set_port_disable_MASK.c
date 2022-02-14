
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt305x_esw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 unsigned int FUNC_0 (struct rt305x_esw*) ;
 int FUNC_1 (struct rt305x_esw*,int ,unsigned int,unsigned int) ;
 int FUNC_2 (struct rt305x_esw*,int,int ,int) ;

__attribute__((used)) static void FUNC_3(struct rt305x_esw *VAR_10, unsigned VAR_11)
{
 unsigned VAR_12;
 unsigned VAR_13;
 unsigned VAR_14;
 int VAR_15;

 VAR_12 = FUNC_0(VAR_10);
 VAR_14 = VAR_12 ^ VAR_11;
 VAR_13 = VAR_12 & VAR_11;


 FUNC_1(VAR_10, VAR_9,
         (VAR_7 <<
   VAR_8),
         VAR_13 << VAR_8);

 for (VAR_15 = 0; VAR_15 < VAR_6; VAR_15++) {
  if (!(VAR_14 & (1 << VAR_15)))
   continue;
  if (VAR_11 & (1 << VAR_15)) {

   FUNC_2(VAR_10, VAR_15, VAR_5,
      VAR_3);
  } else {

   FUNC_2(VAR_10, VAR_15, VAR_5,
      VAR_2 |
      VAR_0 |
      VAR_1 |
      VAR_4);
  }
 }


 FUNC_1(VAR_10, VAR_9,
         (VAR_7 <<
   VAR_8),
         VAR_11 << VAR_8);
}
