
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int buf; } ;
struct todo_list {TYPE_1__ buf; } ;
struct repository {int dummy; } ;


 struct todo_list VAR_0 ;
 char* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (struct todo_list*,struct todo_list*) ;
 int FUNC_6 (struct repository*,int ,struct todo_list*) ;
 int FUNC_7 (struct todo_list*) ;

int FUNC_8(struct repository *VAR_3)
{
 struct todo_list VAR_4 = VAR_0, VAR_5 = VAR_0;
 int VAR_6 = 0;

 if (FUNC_4(&VAR_5.buf, FUNC_2()) < 0) {
  VAR_6 = -1;
  goto out;
 }

 if (FUNC_4(&VAR_4.buf, FUNC_3()) < 0) {
  VAR_6 = -1;
  goto out;
 }

 VAR_6 = FUNC_6(VAR_3, VAR_4.buf.buf, &VAR_4);
 if (!VAR_6)
  VAR_6 = FUNC_6(VAR_3, VAR_5.buf.buf, &VAR_5);
 if (!VAR_6)
  VAR_6 = FUNC_5(&VAR_4, &VAR_5);
 if (VAR_6)
  FUNC_1(VAR_2, "%s", FUNC_0(VAR_1));
out:
 FUNC_7(&VAR_4);
 FUNC_7(&VAR_5);

 return VAR_6;
}
