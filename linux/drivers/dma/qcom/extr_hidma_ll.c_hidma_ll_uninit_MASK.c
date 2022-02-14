
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hidma_tre {int dummy; } ;
struct hidma_lldev {int nr_tres; scalar_t__ evca; scalar_t__ tre_write_offset; int pending_tre_count; int * trepool; int task; scalar_t__ initialized; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct hidma_lldev*) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,scalar_t__) ;

int FUNC_6(struct hidma_lldev *VAR_4)
{
 u32 VAR_5;
 int VAR_6 = 0;
 u32 VAR_7;

 if (!VAR_4)
  return -VAR_0;

 if (!VAR_4->initialized)
  return 0;

 VAR_4->initialized = 0;

 VAR_5 = sizeof(struct hidma_tre) * VAR_4->nr_tres;
 FUNC_4(&VAR_4->task);
 FUNC_2(VAR_4->trepool, 0, VAR_5);
 VAR_4->trepool = ((void*)0);
 FUNC_0(&VAR_4->pending_tre_count, 0);
 VAR_4->tre_write_offset = 0;

 VAR_6 = FUNC_1(VAR_4);





 VAR_7 = FUNC_3(VAR_4->evca + VAR_3);
 FUNC_5(VAR_7, VAR_4->evca + VAR_1);
 FUNC_5(0, VAR_4->evca + VAR_2);
 return VAR_6;
}
