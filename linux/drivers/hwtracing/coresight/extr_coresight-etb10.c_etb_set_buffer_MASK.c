
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_output_handle {int head; } ;
struct cs_buffers {int nr_pages; unsigned long cur; unsigned long offset; int data_size; } ;
struct coresight_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 struct cs_buffers* FUNC_0 (struct perf_output_handle*) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(struct coresight_device *VAR_3,
     struct perf_output_handle *VAR_4)
{
 int VAR_5 = 0;
 unsigned long VAR_6;
 struct cs_buffers *VAR_7 = FUNC_0(VAR_4);

 if (!VAR_7)
  return -VAR_0;


 VAR_6 = VAR_4->head & ((VAR_7->nr_pages << VAR_1) - 1);


 VAR_7->cur = VAR_6 / VAR_2;


 VAR_7->offset = VAR_6 % VAR_2;

 FUNC_1(&VAR_7->data_size, 0);

 return VAR_5;
}
