
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct servtab {int se_fd; struct servtab* se_next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 struct servtab* VAR_3 ;
 long FUNC_2 (int ) ;
 int FUNC_3 (long) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static struct servtab *
FUNC_5(struct servtab *VAR_4)
{
 struct servtab *VAR_5;
 long VAR_6;

 VAR_5 = (struct servtab *)FUNC_1(sizeof (*VAR_5));
 if (VAR_5 == (struct servtab *)0) {
  FUNC_4(VAR_1, "malloc: %m");
  FUNC_0(VAR_0);
 }
 *VAR_5 = *VAR_4;
 VAR_5->se_fd = -1;
 VAR_6 = FUNC_2(VAR_2);
 VAR_5->se_next = VAR_3;
 VAR_3 = VAR_5;
 FUNC_3(VAR_6);
 return (VAR_5);
}
