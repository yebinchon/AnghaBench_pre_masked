
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sec_dev_info {int queues_in_use; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sec_dev_info** VAR_2 ;

__attribute__((used)) static struct sec_dev_info *FUNC_0(void)
{
 struct sec_dev_info *VAR_3 = ((void*)0);
 struct sec_dev_info *VAR_4;
 int VAR_5 = VAR_1 + 1;
 int VAR_6;


 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_4 = VAR_2[VAR_6];
  if (VAR_4 &&
      VAR_4->queues_in_use < VAR_5) {
   VAR_5 = VAR_4->queues_in_use;
   VAR_3 = VAR_4;
  }
 }

 return VAR_3;
}
