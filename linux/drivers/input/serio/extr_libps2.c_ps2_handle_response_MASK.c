
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ps2dev {int cmdcnt; int flags; int wait; int * cmdbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

bool FUNC_1(struct ps2dev *VAR_2, u8 VAR_3)
{
 if (VAR_2->cmdcnt)
  VAR_2->cmdbuf[--VAR_2->cmdcnt] = VAR_3;

 if (VAR_2->flags & VAR_1) {
  VAR_2->flags &= ~VAR_1;
  if (VAR_2->cmdcnt)
   FUNC_0(&VAR_2->wait);
 }

 if (!VAR_2->cmdcnt) {
  VAR_2->flags &= ~VAR_0;
  FUNC_0(&VAR_2->wait);
 }

 return 1;
}
