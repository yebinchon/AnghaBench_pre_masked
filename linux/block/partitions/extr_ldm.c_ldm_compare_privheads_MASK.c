
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct privhead {scalar_t__ ver_major; scalar_t__ ver_minor; scalar_t__ logical_disk_start; scalar_t__ logical_disk_size; scalar_t__ config_start; scalar_t__ config_size; int disk_id; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int *) ;

__attribute__((used)) static bool FUNC_2 (const struct privhead *VAR_0,
       const struct privhead *VAR_1)
{
 FUNC_0 (!VAR_0 || !VAR_1);

 return ((VAR_0->ver_major == VAR_1->ver_major) &&
  (VAR_0->ver_minor == VAR_1->ver_minor) &&
  (VAR_0->logical_disk_start == VAR_1->logical_disk_start) &&
  (VAR_0->logical_disk_size == VAR_1->logical_disk_size) &&
  (VAR_0->config_start == VAR_1->config_start) &&
  (VAR_0->config_size == VAR_1->config_size) &&
  FUNC_1(&VAR_0->disk_id, &VAR_1->disk_id));
}
