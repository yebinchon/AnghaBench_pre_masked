
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int member_0; } ;
struct TYPE_6__ {char const* path; int id; void* mode; TYPE_1__ member_0; } ;
typedef TYPE_2__ git_index_entry ;


 size_t FUNC_0 (char const***) ;
 void* VAR_0 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 int FUNC_4 (int *,char*) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_5(void)
{
 git_index_entry VAR_5 = {0};
 const char *VAR_6[][3] = {
  { "ancestor", "ours", "theirs" },
  { "ancestor2", "ours2", "theirs2" },
  { "ancestor3", "ours3", "theirs3" } };
 const char **VAR_7;
 size_t VAR_8;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_6); VAR_8++) {
  VAR_7 = VAR_6[VAR_8];


  VAR_5.path = VAR_7[0];
  VAR_5.mode = VAR_0;
  FUNC_1(&VAR_5, VAR_1);
  FUNC_4(&VAR_5.id, "1f85ca51b8e0aac893a621b61a9c2661d6aa6d81");
  FUNC_2(FUNC_3(VAR_4, &VAR_5));


  VAR_5.path = VAR_7[1];
  VAR_5.mode = VAR_0;
  FUNC_1(&VAR_5, VAR_2);
  FUNC_4(&VAR_5.id, "1f85ca51b8e0aac893a621b61a9c2661d6aa6d81");
  FUNC_2(FUNC_3(VAR_4, &VAR_5));


  VAR_5.path = VAR_7[2];
  VAR_5.mode = VAR_0;
  FUNC_1(&VAR_5, VAR_3);
  FUNC_4(&VAR_5.id, "1f85ca51b8e0aac893a621b61a9c2661d6aa6d81");
  FUNC_2(FUNC_3(VAR_4, &VAR_5));
 }
}
