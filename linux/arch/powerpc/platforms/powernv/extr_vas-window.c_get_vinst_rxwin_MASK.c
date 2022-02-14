
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vas_window {int num_txwins; } ;
struct vas_instance {int mutex; scalar_t__* rxwin; } ;
typedef enum vas_cop_type { ____Placeholder_vas_cop_type } vas_cop_type ;


 int VAR_0 ;
 struct vas_window* FUNC_0 (int ) ;
 int FUNC_1 (struct vas_window*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 struct vas_window* FUNC_3 (struct vas_instance*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static struct vas_window *FUNC_6(struct vas_instance *VAR_2,
   enum vas_cop_type VAR_3, u32 VAR_4)
{
 struct vas_window *VAR_5;

 FUNC_4(&VAR_2->mutex);

 if (VAR_3 == VAR_1)
  VAR_5 = FUNC_3(VAR_2, VAR_4);
 else
  VAR_5 = VAR_2->rxwin[VAR_3] ?: FUNC_0(-VAR_0);

 if (!FUNC_1(VAR_5))
  FUNC_2(&VAR_5->num_txwins);

 FUNC_5(&VAR_2->mutex);

 return VAR_5;
}
