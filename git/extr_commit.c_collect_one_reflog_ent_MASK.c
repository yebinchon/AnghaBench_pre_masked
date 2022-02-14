
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timestamp_t ;
struct rev_collect {scalar_t__ initial; } ;
struct object_id {int dummy; } ;


 int FUNC_0 (struct object_id*,struct rev_collect*) ;

__attribute__((used)) static int FUNC_1(struct object_id *VAR_0, struct object_id *VAR_1,
      const char *VAR_2, timestamp_t VAR_3,
      int VAR_4, const char *VAR_5, void *VAR_6)
{
 struct rev_collect *VAR_7 = VAR_6;

 if (VAR_7->initial) {
  VAR_7->initial = 0;
  FUNC_0(VAR_0, VAR_7);
 }
 FUNC_0(VAR_1, VAR_7);
 return 0;
}
