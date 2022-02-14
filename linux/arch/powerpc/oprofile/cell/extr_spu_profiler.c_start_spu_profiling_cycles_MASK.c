
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int ktime_t ;
struct TYPE_5__ {int function; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (int,int,int ) ;
 int FUNC_4 (char*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int *,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_1__ VAR_13 ;

int FUNC_6(unsigned int VAR_14)
{
 ktime_t VAR_15;

 FUNC_4("timer resolution: %lu\n", VAR_6);
 VAR_15 = VAR_9;
 FUNC_0(&VAR_13, VAR_0, VAR_4);
 FUNC_1(&VAR_13, VAR_15);
 VAR_13.function = VAR_8;


 VAR_10 = FUNC_3(VAR_5 * VAR_7, sizeof(u32),
     VAR_3);

 if (!VAR_10)
  return -VAR_2;

 VAR_11 = 1;
 FUNC_2(&VAR_13, VAR_15, VAR_4);
 FUNC_5(&VAR_12, VAR_1);

 return 0;
}
