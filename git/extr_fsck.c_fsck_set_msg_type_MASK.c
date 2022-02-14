
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsck_options {int* msg_type; } ;
struct TYPE_2__ {scalar_t__ msg_type; } ;


 int FUNC_0 (int*,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,char const*,...) ;
 int FUNC_2 (int,struct fsck_options*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char const*) ;

void FUNC_5(struct fsck_options *VAR_4,
  const char *VAR_5, const char *VAR_6)
{
 int VAR_7 = FUNC_3(VAR_5), VAR_8;

 if (VAR_7 < 0)
  FUNC_1("Unhandled message id: %s", VAR_5);
 VAR_8 = FUNC_4(VAR_6);

 if (VAR_8 != VAR_0 && VAR_3[VAR_7].msg_type == VAR_1)
  FUNC_1("Cannot demote %s to %s", VAR_5, VAR_6);

 if (!VAR_4->msg_type) {
  int VAR_9;
  int *VAR_10;
  FUNC_0(VAR_10, VAR_2);
  for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++)
   VAR_10[VAR_9] = FUNC_2(VAR_9, VAR_4);
  VAR_4->msg_type = VAR_10;
 }

 VAR_4->msg_type[VAR_7] = VAR_8;
}
