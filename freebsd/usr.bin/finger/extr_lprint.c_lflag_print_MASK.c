
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int (* seq ) (TYPE_3__*,TYPE_2__*,TYPE_2__*,int) ;} ;
struct TYPE_10__ {int data; } ;
struct TYPE_9__ {int dir; } ;
typedef TYPE_1__ PERSON ;
typedef TYPE_2__ DBT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__* VAR_6 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__**,int ,int) ;
 int VAR_7 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char) ;
 int FUNC_5 (int ,int ,char*) ;
 int FUNC_6 (TYPE_3__*,TYPE_2__*,TYPE_2__*,int) ;

void
FUNC_7(void)
{
 PERSON *VAR_8;
 int VAR_9, VAR_10;
 PERSON *VAR_11;
 DBT VAR_12, VAR_13;

 for (VAR_9 = VAR_0;; VAR_9 = VAR_1) {
  VAR_10 = (*VAR_6->seq)(VAR_6, &VAR_13, &VAR_12, VAR_9);
  if (VAR_10 == -1)
   FUNC_0(1, "db seq");
  if (VAR_10 == 1)
   break;
  FUNC_2(&VAR_11, VAR_12.data, sizeof VAR_11);
  VAR_8 = VAR_11;
  if (VAR_9 != VAR_0)
   FUNC_4('\n');
  FUNC_1(VAR_8);
  if (!VAR_7) {
   (void)FUNC_5(VAR_8->dir,
       VAR_2, "Mail forwarded to");
   (void)FUNC_5(VAR_8->dir, VAR_4, "Project");
   if (!FUNC_5(VAR_8->dir, VAR_3, "Plan"))
    (void)FUNC_3("No Plan.\n");
   (void)FUNC_5(VAR_8->dir,
       VAR_5, "Public key");
  }
 }
}
