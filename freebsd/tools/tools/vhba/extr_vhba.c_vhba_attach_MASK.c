
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lock; int * sim; int * devq; int done; int actv; } ;
typedef TYPE_1__ vhba_softc_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_1 (int ,int ,int ,TYPE_1__*,int ,int *,int ,int ,int *) ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_6 ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_7 ;
 scalar_t__ FUNC_8 (int *,int ,int ) ;

__attribute__((used)) static int
FUNC_9(vhba_softc_t *VAR_8)
{
 FUNC_0(&VAR_8->actv);
 FUNC_0(&VAR_8->done);
 VAR_8->devq = FUNC_3(VAR_4);
 if (VAR_8->devq == ((void*)0)) {
  return (VAR_2);
 }
 VAR_8->sim = FUNC_1(VAR_6, VAR_7, VAR_5, VAR_8, 0, &VAR_8->lock, VAR_4, VAR_4, VAR_8->devq);
 if (VAR_8->sim == ((void*)0)) {
  FUNC_4(VAR_8->devq);
  return (VAR_2);
 }
 FUNC_7(VAR_8);
 FUNC_5(&VAR_8->lock);
 if (FUNC_8(VAR_8->sim, 0, 0) != VAR_0) {
  FUNC_2(VAR_8->sim, VAR_3);
  FUNC_6(&VAR_8->lock);
  return (VAR_1);
 }
 FUNC_6(&VAR_8->lock);
 return (0);
}
