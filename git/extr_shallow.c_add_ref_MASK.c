
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct commit_array {int nr; scalar_t__* commits; int alloc; } ;


 int FUNC_0 (scalar_t__*,int,int ) ;
 scalar_t__ FUNC_1 (int ,struct object_id const*,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(const char *VAR_1, const struct object_id *VAR_2,
     int VAR_3, void *VAR_4)
{
 struct commit_array *VAR_5 = VAR_4;
 FUNC_0(VAR_5->commits, VAR_5->nr + 1, VAR_5->alloc);
 VAR_5->commits[VAR_5->nr] = FUNC_1(VAR_0,
            VAR_2, 1);
 if (VAR_5->commits[VAR_5->nr])
  VAR_5->nr++;
 return 0;
}
