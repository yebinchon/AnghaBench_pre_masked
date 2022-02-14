
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bsdar {int dummy; } ;
struct ar_obj {int fd; struct ar_obj* name; int size; struct ar_obj* maddr; } ;


 int FUNC_0 (struct bsdar*,int ,char*,struct ar_obj*) ;
 int VAR_0 ;
 int FUNC_1 (struct ar_obj*) ;
 scalar_t__ FUNC_2 (struct ar_obj*,int ) ;

__attribute__((used)) static void
FUNC_3(struct bsdar *VAR_1, struct ar_obj *VAR_2)
{
 if (VAR_2->fd == -1)
  FUNC_1(VAR_2->maddr);
 else
  if (VAR_2->maddr != ((void*)0) && FUNC_2(VAR_2->maddr, VAR_2->size))
   FUNC_0(VAR_1, VAR_0,
       "can't munmap file: %s", VAR_2->name);
 FUNC_1(VAR_2->name);
 FUNC_1(VAR_2);
}
