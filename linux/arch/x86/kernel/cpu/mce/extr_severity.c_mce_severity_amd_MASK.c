
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mce {int status; } ;
typedef enum context { ____Placeholder_context } context ;
struct TYPE_2__ {scalar_t__ smca; scalar_t__ overflow_recov; } ;


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
 int FUNC_0 (struct mce*) ;
 TYPE_1__ VAR_10 ;
 int FUNC_1 (struct mce*,int) ;

__attribute__((used)) static int FUNC_2(struct mce *VAR_11, int VAR_12, char **VAR_13, bool VAR_14)
{
 enum context VAR_15 = FUNC_0(VAR_11);


 if (VAR_11->status & VAR_8)
  return VAR_4;

 if (VAR_11->status & VAR_9) {

  if (VAR_15 == VAR_0)
   return VAR_4;







  if (VAR_10.overflow_recov) {
   if (VAR_10.smca)
    return FUNC_1(VAR_11, VAR_15);


   return VAR_1;
  } else {

   if (VAR_11->status & VAR_7)
    return VAR_4;
  }





  return VAR_5;
 }





 if (VAR_11->status & VAR_6)
  return VAR_2;





 return VAR_3;
}
