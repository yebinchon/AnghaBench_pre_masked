
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct adf_etr_ring_data* private; } ;
struct adf_etr_ring_data {void* base_addr; int msg_size; int ring_size; } ;
typedef int loff_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void *FUNC_2(struct seq_file *VAR_0, void *VAR_1, loff_t *VAR_2)
{
 struct adf_etr_ring_data *VAR_3 = VAR_0->private;

 if (*VAR_2 >= (FUNC_1(VAR_3->ring_size) /
       FUNC_0(VAR_3->msg_size)))
  return ((void*)0);

 return VAR_3->base_addr +
  (FUNC_0(VAR_3->msg_size) * (*VAR_2)++);
}
