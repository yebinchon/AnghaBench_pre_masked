
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct firmware_map_entry {char const* type; int list; int kobj; scalar_t__ end; scalar_t__ start; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(u64 VAR_3, u64 VAR_4,
      const char *VAR_5,
      struct firmware_map_entry *VAR_6)
{
 FUNC_0(VAR_3 > VAR_4);

 VAR_6->start = VAR_3;
 VAR_6->end = VAR_4 - 1;
 VAR_6->type = VAR_5;
 FUNC_1(&VAR_6->list);
 FUNC_2(&VAR_6->kobj, &VAR_2);

 FUNC_4(&VAR_1);
 FUNC_3(&VAR_6->list, &VAR_0);
 FUNC_5(&VAR_1);

 return 0;
}
