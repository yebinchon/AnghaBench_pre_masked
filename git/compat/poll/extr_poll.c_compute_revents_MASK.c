
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fd_set ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int,int *) ;
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
 int VAR_17 ;
 int FUNC_1 (int,int ,int*) ;
 int FUNC_2 (int,char*,int,int ) ;

__attribute__((used)) static int
FUNC_3 (int VAR_18, int VAR_19, fd_set *VAR_20, fd_set *VAR_21, fd_set *VAR_22)
{
  int VAR_23 = 0;
  if (FUNC_0 (VAR_18, VAR_20))
    {
      int VAR_24;
      int VAR_25;
      char VAR_26[64];
      VAR_24 = FUNC_2 (VAR_18, VAR_26, sizeof (VAR_26), VAR_7);
      VAR_25 = (VAR_24 < 0) ? VAR_17 : 0;

      if (VAR_24 == 0)
 VAR_23 |= VAR_9;



      else if (VAR_24 > 0 || ( VAR_25 == VAR_3))
 VAR_23 |= (VAR_10 | VAR_14) & VAR_19;


      else if (VAR_25 == VAR_5 || VAR_25 == VAR_1
        || VAR_25 == VAR_0 || VAR_25 == VAR_2)
 VAR_23 |= VAR_9;


      else if ( VAR_25 == VAR_4)
 VAR_23 |= (VAR_10 | VAR_14) & VAR_19;

      else
 VAR_23 |= VAR_8;
    }

  if (FUNC_0 (VAR_18, VAR_21))
    VAR_23 |= (VAR_11 | VAR_16 | VAR_15) & VAR_19;

  if (FUNC_0 (VAR_18, VAR_22))
    VAR_23 |= (VAR_12 | VAR_13) & VAR_19;

  return VAR_23;
}
