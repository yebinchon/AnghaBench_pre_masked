
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ide_host {int host_flags; int (* get_lock ) (int ,int *) ;int host_busy; } ;
typedef int ide_hwif_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static inline int FUNC_2(struct ide_host *VAR_3, ide_hwif_t *VAR_4)
{
 int VAR_5 = 0;

 if (VAR_3->host_flags & VAR_0) {
  VAR_5 = FUNC_1(VAR_1, &VAR_3->host_busy);
  if (VAR_5 == 0) {
   if (VAR_3->get_lock)
    VAR_3->get_lock(VAR_2, VAR_4);
  }
 }
 return VAR_5;
}
