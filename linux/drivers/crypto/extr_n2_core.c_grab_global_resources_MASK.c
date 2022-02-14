
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spu_queue {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_8(void)
{
 int VAR_7 = 0;

 FUNC_2(&VAR_6);

 if (VAR_5++)
  goto out;

 VAR_7 = FUNC_4();
 if (VAR_7)
  goto out;

 VAR_7 = FUNC_7();
 if (VAR_7)
  goto out_hvapi_release;

 VAR_7 = -VAR_0;
 VAR_3 = FUNC_0(VAR_2, sizeof(struct spu_queue *),
        VAR_1);
 if (!VAR_3)
  goto out_queue_cache_destroy;

 VAR_4 = FUNC_0(VAR_2, sizeof(struct spu_queue *),
        VAR_1);
 if (!VAR_4)
  goto out_free_cwq_table;

 VAR_7 = 0;

out:
 if (VAR_7)
  VAR_5--;
 FUNC_3(&VAR_6);
 return VAR_7;

out_free_cwq_table:
 FUNC_1(VAR_3);
 VAR_3 = ((void*)0);

out_queue_cache_destroy:
 FUNC_6();

out_hvapi_release:
 FUNC_5();
 goto out;
}
