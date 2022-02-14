
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* replace_email; struct TYPE_8__* replace_name; struct TYPE_8__* real_email; struct TYPE_8__* real_name; } ;
typedef TYPE_1__ git_mailmap_entry ;
struct TYPE_9__ {int entries; } ;
typedef TYPE_2__ git_mailmap ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int,int) ;
 void* FUNC_3 (char const*,size_t) ;
 int FUNC_4 (int *,TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(
 git_mailmap *VAR_3,
 const char *VAR_4, size_t VAR_5,
 const char *VAR_6, size_t VAR_7,
 const char *VAR_8, size_t VAR_9,
 const char *VAR_10, size_t VAR_11)
{
 int VAR_12;
 git_mailmap_entry *VAR_13 = FUNC_2(1, sizeof(git_mailmap_entry));
 FUNC_0(VAR_13);

 FUNC_1(VAR_3 && VAR_10 && *VAR_10);

 if (VAR_5 > 0) {
  VAR_13->real_name = FUNC_3(VAR_4, VAR_5);
  FUNC_0(VAR_13->real_name);
 }
 if (VAR_7 > 0) {
  VAR_13->real_email = FUNC_3(VAR_6, VAR_7);
  FUNC_0(VAR_13->real_email);
 }
 if (VAR_9 > 0) {
  VAR_13->replace_name = FUNC_3(VAR_8, VAR_9);
  FUNC_0(VAR_13->replace_name);
 }
 VAR_13->replace_email = FUNC_3(VAR_10, VAR_11);
 FUNC_0(VAR_13->replace_email);

 VAR_12 = FUNC_4(&VAR_3->entries, VAR_13, VAR_2);
 if (VAR_12 == VAR_0)
  VAR_12 = VAR_1;
 else if (VAR_12 < 0)
  FUNC_5(VAR_13);

 return VAR_12;
}
