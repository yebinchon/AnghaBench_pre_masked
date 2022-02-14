
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct finfo {int flag; scalar_t__ forward_fd; int uaddr; int caller_addr; } ;


 struct finfo* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int
FUNC_2(int VAR_4)
{
 struct finfo *VAR_5;

 VAR_5 = &VAR_0[VAR_4];
 if (VAR_5->flag & VAR_1) {
  FUNC_1(VAR_5->caller_addr);

  if (VAR_5->forward_fd >= VAR_3)
   VAR_3--;
  FUNC_0(VAR_5->uaddr);
  VAR_5->flag &= ~VAR_1;
  VAR_2--;
  return (1);
 }
 return (0);
}
