
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int ibf_lock; scalar_t__ ibf; int status_io; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static inline uint8_t FUNC_3(void)
{
 uint8_t VAR_2;
 unsigned long VAR_3;

 FUNC_1(&VAR_1.ibf_lock, VAR_3);
 VAR_2 = FUNC_0(VAR_1.status_io);
 if (!(VAR_2 & VAR_0))
  VAR_1.ibf = 0;
 FUNC_2(&VAR_1.ibf_lock, VAR_3);

 return VAR_2;
}
