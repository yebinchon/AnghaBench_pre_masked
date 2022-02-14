
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sony_sc {void (* send_output_report ) (struct sony_sc*) ;int state_worker_initialized; int state_worker; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static inline void FUNC_1(struct sony_sc *VAR_1,
    void (*VAR_2)(struct sony_sc *))
{
 VAR_1->send_output_report = VAR_2;

 if (!VAR_1->state_worker_initialized)
  FUNC_0(&VAR_1->state_worker, VAR_0);

 VAR_1->state_worker_initialized = 1;
}
