
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r5l_log {scalar_t__ device_size; int log_start; int last_checkpoint; } ;
typedef scalar_t__ sector_t ;


 scalar_t__ FUNC_0 (struct r5l_log*,int ,int ) ;

__attribute__((used)) static bool FUNC_1(struct r5l_log *VAR_0, sector_t VAR_1)
{
 sector_t VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_0->last_checkpoint,
     VAR_0->log_start);

 return VAR_0->device_size > VAR_2 + VAR_1;
}
