
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct request {int * end_io_data; } ;
struct gendisk {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct request_queue*,struct gendisk*,struct request*,int,int ) ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct request_queue *VAR_4, struct gendisk *VAR_5,
     struct request *VAR_6, int VAR_7)
{
 FUNC_0(VAR_3);
 unsigned long VAR_8;

 VAR_6->end_io_data = &VAR_3;
 FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7, VAR_1);


 VAR_8 = VAR_2;
 if (VAR_8)
  while (!FUNC_3(&VAR_3, VAR_8 * (VAR_0/2)));
 else
  FUNC_2(&VAR_3);
}
