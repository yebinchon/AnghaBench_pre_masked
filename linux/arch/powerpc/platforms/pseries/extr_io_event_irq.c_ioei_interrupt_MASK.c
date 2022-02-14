
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtas_error_log {int dummy; } ;
struct pseries_io_event {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int ,struct pseries_io_event*) ;
 int VAR_4 ;
 struct pseries_io_event* FUNC_2 (struct rtas_error_log*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,int,int,int *,int ,int ,int ,int,int ,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_7, void *VAR_8)
{
 struct pseries_io_event *VAR_9;
 int VAR_10;

 for (;;) {
  VAR_10 = FUNC_3(VAR_4, 6, 1, ((void*)0),
        VAR_3,
        FUNC_4(VAR_7),
        VAR_2, 1 ,
        FUNC_0(VAR_5),
        VAR_1);
  if (VAR_10 != 0)
   break;

  VAR_9 = FUNC_2((struct rtas_error_log *)VAR_5);
  if (!VAR_9)
   continue;

  FUNC_1(&VAR_6,
        0, VAR_9);
 }
 return VAR_0;
}
