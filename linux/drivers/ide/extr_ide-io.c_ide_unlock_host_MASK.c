
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ide_host {int host_flags; int host_busy; int (* release_lock ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 () ;

__attribute__((used)) static inline void FUNC_2(struct ide_host *VAR_2)
{
 if (VAR_2->host_flags & VAR_0) {
  if (VAR_2->release_lock)
   VAR_2->release_lock();
  FUNC_0(VAR_1, &VAR_2->host_busy);
 }
}
