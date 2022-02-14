
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtas_error_log {int dummy; } ;
struct pseries_hp_errorlog {scalar_t__ resource; } ;
struct pseries_errorlog {scalar_t__ data; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (scalar_t__*) ;
 struct pseries_errorlog* FUNC_1 (struct rtas_error_log*,int ) ;
 int FUNC_2 (scalar_t__,int ,int ) ;
 int FUNC_3 (struct pseries_hp_errorlog*) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int ,int,int,int *,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_11, void *VAR_12)
{
 struct pseries_errorlog *VAR_13;
 struct pseries_hp_errorlog *VAR_14;

 FUNC_6(&VAR_10);

 FUNC_4(VAR_8, 6, 1, ((void*)0),
    VAR_7, FUNC_8(VAR_11),
    VAR_6, 0, FUNC_0(&VAR_9),
    FUNC_5());

 VAR_13 = FUNC_1((struct rtas_error_log *)VAR_9,
        VAR_2);
 VAR_14 = (struct pseries_hp_errorlog *)VAR_13->data;





 if (VAR_14->resource == VAR_4 ||
     VAR_14->resource == VAR_3 ||
     VAR_14->resource == VAR_5)
  FUNC_3(VAR_14);
 else
  FUNC_2(VAR_9, VAR_0, 0);

 FUNC_7(&VAR_10);
 return VAR_1;
}
