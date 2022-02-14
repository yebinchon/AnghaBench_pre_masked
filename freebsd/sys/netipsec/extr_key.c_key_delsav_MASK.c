
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct secasvar {scalar_t__ state; scalar_t__ refcnt; int flags; int lft_c; struct secasvar* lock; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct secasvar*,int ) ;
 int FUNC_2 (struct secasvar*) ;
 int FUNC_3 (struct secasvar*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void
FUNC_5(struct secasvar *VAR_5)
{
 FUNC_0(VAR_5 != ((void*)0), ("null sav"));
 FUNC_0(VAR_5->state == VAR_2,
     ("attempt to free non DEAD SA %p", VAR_5));
 FUNC_0(VAR_5->refcnt == 0, ("reference count %u > 0",
     VAR_5->refcnt));






 FUNC_2(VAR_5);
 if ((VAR_5->flags & VAR_3) == 0) {
  FUNC_3(VAR_5->lock);
  FUNC_1(VAR_5->lock, VAR_0);
  FUNC_4(VAR_4, VAR_5->lft_c);
 }
 FUNC_1(VAR_5, VAR_1);
}
