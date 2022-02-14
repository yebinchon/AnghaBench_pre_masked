
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct merge_msg_entry {TYPE_1__* merge_head; } ;
struct TYPE_6__ {scalar_t__ length; scalar_t__* contents; } ;
typedef TYPE_2__ git_vector ;
typedef int git_filebuf ;
struct TYPE_5__ {char* remote_url; } ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_2__*,char*,char*,int ,char const*,char) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(
 git_filebuf *VAR_1,
 git_vector *VAR_2,
 char VAR_3)
{
 const char *VAR_4;

 if (VAR_2->length == 0)
  return 0;

 VAR_4 = ((struct merge_msg_entry *)VAR_2->contents[0])->merge_head->remote_url;

 return FUNC_0(VAR_1, VAR_2,
  "branch", "branches", FUNC_1(VAR_0), VAR_4, VAR_3);
}
