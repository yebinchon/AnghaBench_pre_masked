
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtas_error_log {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (scalar_t__,int ,int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int,int,int *,int ,int ,int ,int,int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,int*) ;
 int FUNC_5 (struct rtas_error_log*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_9, void *VAR_10)
{
 int VAR_11;
 int VAR_12;
 int VAR_13;

 VAR_11 = FUNC_4(VAR_1, VAR_0,
          &VAR_12);

 if (VAR_12 > 3)
  VAR_13 = 1;
 else
  VAR_13 = 0;

 FUNC_6(&VAR_8);

 VAR_11 = FUNC_2(VAR_6, 6, 1, ((void*)0),
      VAR_5,
      FUNC_8(VAR_9),
      VAR_4,
      VAR_13, FUNC_0(&VAR_7),
    FUNC_3());

 FUNC_1(VAR_7, VAR_2, 0);

 FUNC_5((struct rtas_error_log *)VAR_7);

 FUNC_7(&VAR_8);
 return VAR_3;
}
