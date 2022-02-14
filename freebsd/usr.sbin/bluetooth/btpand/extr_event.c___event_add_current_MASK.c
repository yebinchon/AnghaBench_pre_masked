
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct event*,int ) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_2(struct event *VAR_4)
{
 FUNC_1((VAR_4->flags & (VAR_1|VAR_0)) == 0);

 FUNC_0(&VAR_2, VAR_4, VAR_3);
 VAR_4->flags |= VAR_0;
}
