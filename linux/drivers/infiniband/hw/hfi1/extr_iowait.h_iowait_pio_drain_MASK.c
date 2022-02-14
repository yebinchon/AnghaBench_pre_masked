
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iowait {int pio_busy; int wait_pio; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int,int ) ;

__attribute__((used)) static inline void FUNC_2(struct iowait *VAR_1)
{
 FUNC_1(VAR_1->wait_pio,
      !FUNC_0(&VAR_1->pio_busy),
      VAR_0);
}
