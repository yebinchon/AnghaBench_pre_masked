
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int _FP_W_TYPE ;
typedef int _FP_I_TYPE ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int,int,int,int,int) ;
 int FUNC_2 (int,int,int,int,int) ;
 int FUNC_3 (int,int,int,int) ;

void
FUNC_4(_FP_W_TYPE VAR_1[2], _FP_W_TYPE VAR_2[2],
        _FP_W_TYPE VAR_3, _FP_W_TYPE VAR_4,
        _FP_W_TYPE VAR_5, _FP_W_TYPE VAR_6)
{
  _FP_W_TYPE VAR_7, VAR_8, VAR_9, VAR_10;
  _FP_I_TYPE VAR_11, VAR_12;

  if (VAR_5 == 0)
    {

      if (VAR_6 > VAR_3)
 {


   FUNC_2 (VAR_7, VAR_4, VAR_3, VAR_4, VAR_6);
   VAR_8 = 0;


 }
      else
 {


   if (VAR_6 == 0)
     VAR_6 = 1 / VAR_6;

   FUNC_2 (VAR_8, VAR_3, 0, VAR_3, VAR_6);
   FUNC_2 (VAR_7, VAR_4, VAR_3, VAR_4, VAR_6);


 }

      VAR_9 = VAR_4;
      VAR_10 = 0;
    }
  else
    {
      if (VAR_5 > VAR_3)
 {


   VAR_7 = 0;
   VAR_8 = 0;


   VAR_9 = VAR_4;
   VAR_10 = VAR_3;
 }
      else
 {


   FUNC_0 (VAR_12, VAR_5);
   if (VAR_12 == 0)
     {
       if (VAR_3 > VAR_5 || VAR_4 >= VAR_6)
  {
    VAR_7 = 1;
    FUNC_1 (VAR_3, VAR_4, VAR_3, VAR_4, VAR_5, VAR_6);
  }
       else
  VAR_7 = 0;

       VAR_8 = 0;

       VAR_9 = VAR_4;
       VAR_10 = VAR_3;
     }
   else
     {
       _FP_W_TYPE VAR_13, VAR_14, VAR_15;



       VAR_11 = VAR_0 - VAR_12;

       VAR_5 = (VAR_5 << VAR_12) | (VAR_6 >> VAR_11);
       VAR_6 = VAR_6 << VAR_12;
       VAR_15 = VAR_3 >> VAR_11;
       VAR_3 = (VAR_3 << VAR_12) | (VAR_4 >> VAR_11);
       VAR_4 = VAR_4 << VAR_12;

       FUNC_2 (VAR_7, VAR_3, VAR_15, VAR_3, VAR_5);
       FUNC_3 (VAR_13, VAR_14, VAR_7, VAR_6);

       if (VAR_13 > VAR_3 || (VAR_13 == VAR_3 && VAR_14 > VAR_4))
  {
    VAR_7--;
    FUNC_1 (VAR_13, VAR_14, VAR_13, VAR_14, VAR_5, VAR_6);
  }

       VAR_8 = 0;


       FUNC_1 (VAR_3, VAR_4, VAR_3, VAR_4, VAR_13, VAR_14);
       VAR_9 = (VAR_3 << VAR_11) | (VAR_4 >> VAR_12);
       VAR_10 = VAR_3 >> VAR_12;
     }
 }
    }

  VAR_1[0] = VAR_7; VAR_1[1] = VAR_8;
  VAR_2[0] = VAR_9, VAR_2[1] = VAR_10;
}
