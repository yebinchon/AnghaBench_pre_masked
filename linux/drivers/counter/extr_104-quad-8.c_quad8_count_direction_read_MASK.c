
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct counter_device {int dummy; } ;
struct counter_count {int dummy; } ;
typedef int ssize_t ;
typedef enum counter_count_direction { ____Placeholder_counter_count_direction } counter_count_direction ;


 char** VAR_0 ;
 int FUNC_0 (struct counter_device*,struct counter_count*,int*) ;
 int FUNC_1 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct counter_device *VAR_1,
 struct counter_count *VAR_2, void *VAR_3, char *VAR_4)
{
 enum counter_count_direction VAR_5;

 FUNC_0(VAR_1, VAR_2, &VAR_5);

 return FUNC_1(VAR_4, "%s\n", VAR_0[VAR_5]);
}
