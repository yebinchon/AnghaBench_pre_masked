
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct drxk_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,char*) ;
 unsigned long VAR_8 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct drxk_state*,int ,scalar_t__*) ;
 scalar_t__ FUNC_4 (unsigned long) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (struct drxk_state*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct drxk_state *VAR_9, bool VAR_10)
{
 int VAR_11;
 u16 VAR_12 = 0;
 u16 VAR_13 = VAR_3;
 u16 VAR_14 = VAR_6;
 unsigned long VAR_15;

 FUNC_0(1, "\n");

 if (!VAR_10) {
  VAR_13 = VAR_2;
  VAR_14 = VAR_5;
 }

 VAR_11 = FUNC_3(VAR_9, VAR_7, &VAR_12);
 if (VAR_11 >= 0 && VAR_12 == VAR_14) {

  return VAR_11;
 }

 VAR_11 = FUNC_6(VAR_9, VAR_4, VAR_13);

 VAR_15 = VAR_8 + FUNC_1(VAR_0);
 do {
  VAR_11 = FUNC_3(VAR_9, VAR_7, &VAR_12);
  if ((VAR_11 >= 0 && VAR_12 == VAR_14)
      || FUNC_4(VAR_15))
   break;
  FUNC_5(1000, 2000);
 } while (1);
 if (VAR_12 != VAR_14) {
  FUNC_2("SIO not ready\n");
  return -VAR_1;
 }
 return VAR_11;
}
