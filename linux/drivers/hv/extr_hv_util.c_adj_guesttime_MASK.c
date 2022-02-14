
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef void* u64 ;
struct TYPE_5__ {int lock; void* host_time; void* ref_time; } ;
struct TYPE_4__ {void* (* read ) (TYPE_1__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 void* FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static inline void FUNC_4(u64 VAR_4, u64 VAR_5, u8 VAR_6)
{
 unsigned long VAR_7;
 u64 VAR_8;





 FUNC_1(&VAR_2.lock, VAR_7);

 VAR_8 = VAR_3->read(VAR_3);
 VAR_2.host_time = VAR_4;
 VAR_2.ref_time = VAR_8;
 VAR_2.host_time += (VAR_8 - VAR_5);

 FUNC_2(&VAR_2.lock, VAR_7);


 if (VAR_6 & VAR_0)
  FUNC_0(&VAR_1);
}
