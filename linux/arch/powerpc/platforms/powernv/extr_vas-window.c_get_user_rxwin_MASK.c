
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vas_window {scalar_t__ cop; scalar_t__ tx_win; } ;
struct vas_instance {int vas_id; struct vas_window** windows; } ;


 int VAR_0 ;
 struct vas_window* FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int*,int*) ;

__attribute__((used)) static struct vas_window *FUNC_2(struct vas_instance *VAR_2, u32 VAR_3)
{
 int VAR_4, VAR_5;
 struct vas_window *VAR_6;

 FUNC_1(VAR_3, &VAR_4, &VAR_5);

 if (VAR_2->vas_id != VAR_4)
  return FUNC_0(-VAR_0);

 VAR_6 = VAR_2->windows[VAR_5];

 if (!VAR_6 || VAR_6->tx_win || VAR_6->cop != VAR_1)
  return FUNC_0(-VAR_0);

 return VAR_6;
}
