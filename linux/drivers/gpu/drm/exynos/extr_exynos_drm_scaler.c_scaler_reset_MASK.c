
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scaler_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static inline int FUNC_3(struct scaler_context *VAR_5)
{
 int VAR_6 = VAR_4;

 FUNC_2(VAR_2, VAR_1);
 do {
  FUNC_0();
 } while (--VAR_6 > 1 &&
   FUNC_1(VAR_1) & VAR_2);
 do {
  FUNC_0();
  FUNC_2(1, VAR_3);
 } while (--VAR_6 > 0 && FUNC_1(VAR_3) != 1);

 return VAR_6 ? 0 : -VAR_0;
}
