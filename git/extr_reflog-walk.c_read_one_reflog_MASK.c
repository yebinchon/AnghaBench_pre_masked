
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timestamp_t ;
struct reflog_info {int tz; void* message; int timestamp; void* email; int noid; int ooid; } ;
struct object_id {int dummy; } ;
struct complete_reflogs {int nr; struct reflog_info* items; int alloc; } ;


 int FUNC_0 (struct reflog_info*,int,int ) ;
 int FUNC_1 (int *,struct object_id*) ;
 void* FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(struct object_id *VAR_0, struct object_id *VAR_1,
  const char *VAR_2, timestamp_t VAR_3, int VAR_4,
  const char *VAR_5, void *VAR_6)
{
 struct complete_reflogs *VAR_7 = VAR_6;
 struct reflog_info *VAR_8;

 FUNC_0(VAR_7->items, VAR_7->nr + 1, VAR_7->alloc);
 VAR_8 = VAR_7->items + VAR_7->nr;
 FUNC_1(&VAR_8->ooid, VAR_0);
 FUNC_1(&VAR_8->noid, VAR_1);
 VAR_8->email = FUNC_2(VAR_2);
 VAR_8->timestamp = VAR_3;
 VAR_8->tz = VAR_4;
 VAR_8->message = FUNC_2(VAR_5);
 VAR_7->nr++;
 return 0;
}
