
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtas_error_log {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__,int ,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int ,int,int,int *,int ,int ,int ,int,int ,int ) ;
 scalar_t__ FUNC_7 (struct rtas_error_log*) ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int) ;

__attribute__((used)) static irqreturn_t FUNC_12(int VAR_8, void *VAR_9)
{
 struct rtas_error_log *VAR_10;
 int VAR_11;
 int VAR_12;

 FUNC_9(&VAR_7);

 VAR_11 = FUNC_6(VAR_5, 6, 1, ((void*)0),
      VAR_4,
      FUNC_11(VAR_8),
      VAR_2, 1 ,
      FUNC_0(&VAR_6),
    FUNC_8());

 VAR_10 = (struct rtas_error_log *)VAR_6;

 if (VAR_11 == 0 &&
     FUNC_7(VAR_10) >= VAR_3)
  VAR_12 = 1;
 else
  VAR_12 = 0;


 FUNC_3(VAR_6, VAR_0, VAR_12);

 if (VAR_12) {
  FUNC_4("Fatal hardware error detected. Check RTAS error"
    " log for details. Powering off immediately\n");
  FUNC_1();
  FUNC_2();
 } else {
  FUNC_5("Recoverable hardware error detected\n");
 }

 FUNC_10(&VAR_7);
 return VAR_1;
}
