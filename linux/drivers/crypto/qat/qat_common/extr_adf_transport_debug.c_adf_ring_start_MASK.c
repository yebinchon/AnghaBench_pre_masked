
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct adf_etr_ring_data* private; } ;
struct adf_etr_ring_data {void* base_addr; int msg_size; int ring_size; } ;
typedef int loff_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 void* VAR_0 ;
 int FUNC_2 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void *FUNC_3(struct seq_file *VAR_2, loff_t *VAR_3)
{
 struct adf_etr_ring_data *VAR_4 = VAR_2->private;

 FUNC_2(&VAR_1);
 if (*VAR_3 == 0)
  return VAR_0;

 if (*VAR_3 >= (FUNC_1(VAR_4->ring_size) /
       FUNC_0(VAR_4->msg_size)))
  return ((void*)0);

 return VAR_4->base_addr +
  (FUNC_0(VAR_4->msg_size) * (*VAR_3)++);
}
