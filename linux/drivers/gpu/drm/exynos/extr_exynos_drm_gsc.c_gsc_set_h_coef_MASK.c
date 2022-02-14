
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gsc_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int,int) ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 int FUNC_1 (int ,int ) ;
 int *** VAR_9 ;

__attribute__((used)) static void FUNC_2(struct gsc_context *VAR_10, unsigned long VAR_11)
{
 int VAR_12, VAR_13, VAR_14, VAR_15;

 if (VAR_11 <= VAR_8)
  VAR_15 = 0;
 else if (VAR_11 <= VAR_7)
  VAR_15 = 1;
 else if (VAR_11 <= VAR_6)
  VAR_15 = 2;
 else if (VAR_11 <= VAR_5)
  VAR_15 = 3;
 else if (VAR_11 <= VAR_4)
  VAR_15 = 4;
 else if (VAR_11 <= VAR_3)
  VAR_15 = 5;
 else
  VAR_15 = 6;

 for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++)
  for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++)
   for (VAR_14 = 0; VAR_14 < VAR_0; VAR_14++)
    FUNC_1(VAR_9[VAR_15][VAR_12][VAR_13],
     FUNC_0(VAR_12, VAR_13, VAR_14));
}
