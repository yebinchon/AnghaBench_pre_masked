
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timestamp_t ;
struct object_id {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (char const*,struct object_id*,int ) ;
 int FUNC_3 (struct object_id*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_4(struct object_id *VAR_2, struct object_id *VAR_3,
  const char *VAR_4, timestamp_t VAR_5, int VAR_6,
  const char *VAR_7, void *VAR_8)
{
 const char *VAR_9 = VAR_8;

 if (VAR_1)
  FUNC_1(VAR_0, FUNC_0("Checking reflog %s->%s"),
      FUNC_3(VAR_2), FUNC_3(VAR_3));

 FUNC_2(VAR_9, VAR_2, 0);
 FUNC_2(VAR_9, VAR_3, VAR_5);
 return 0;
}
