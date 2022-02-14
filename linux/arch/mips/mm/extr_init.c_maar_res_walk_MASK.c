
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct maar_walk_info {size_t num_cfg; struct maar_config* cfg; } ;
struct maar_config {int attrs; scalar_t__ upper; int lower; } ;


 int FUNC_0 (int ,unsigned int) ;
 scalar_t__ FUNC_1 (int ,unsigned int) ;
 size_t FUNC_2 (struct maar_config*) ;
 unsigned int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(unsigned long VAR_2, unsigned long VAR_3,
    void *VAR_4)
{
 struct maar_walk_info *VAR_5 = VAR_4;
 struct maar_config *VAR_6 = &VAR_5->cfg[VAR_5->num_cfg];
 unsigned int VAR_7;


 VAR_7 = FUNC_3(VAR_0 + 4);


 VAR_6->lower = FUNC_0(FUNC_4(VAR_2), VAR_7);
 VAR_6->upper = FUNC_1(FUNC_4(VAR_2 + VAR_3), VAR_7) - 1;
 VAR_6->attrs = VAR_1;


 if (!FUNC_5(VAR_5->num_cfg >= FUNC_2(VAR_5->cfg)))
  VAR_5->num_cfg++;

 return 0;
}
