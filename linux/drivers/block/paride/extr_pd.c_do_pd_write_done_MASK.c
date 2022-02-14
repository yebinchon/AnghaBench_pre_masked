
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum action { ____Placeholder_action } action ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 () ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,int ,char*) ;
 int VAR_12 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static enum action FUNC_3(void)
{
 if (!FUNC_0() && !FUNC_2(VAR_8, VAR_11))
  return VAR_1;

 if (FUNC_1(VAR_9, VAR_5, "do_pd_write_done") & VAR_4) {
  if (VAR_10 < VAR_3) {
   VAR_10++;
   VAR_12 = VAR_7;
   return VAR_6;
  }
  return VAR_0;
 }
 return VAR_2;
}
