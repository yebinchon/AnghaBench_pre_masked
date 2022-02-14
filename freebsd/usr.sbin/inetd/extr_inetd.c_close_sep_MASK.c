
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct servtab {int se_fd; scalar_t__ se_numchild; scalar_t__ se_count; } ;


 scalar_t__ FUNC_0 (int,int *) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct servtab*) ;

__attribute__((used)) static void
FUNC_3(struct servtab *VAR_1)
{
 if (VAR_1->se_fd >= 0) {
  if (FUNC_0(VAR_1->se_fd, &VAR_0))
   FUNC_2(VAR_1);
  (void) FUNC_1(VAR_1->se_fd);
  VAR_1->se_fd = -1;
 }
 VAR_1->se_count = 0;
 VAR_1->se_numchild = 0;
}
