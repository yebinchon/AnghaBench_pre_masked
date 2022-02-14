
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_7__ {int member_0; } ;
struct TYPE_8__ {TYPE_1__ member_0; } ;
typedef TYPE_2__ git_oid ;
struct TYPE_9__ {int checksum; int index_file_path; } ;
typedef TYPE_3__ git_index ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,int,int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int,TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_6(git_index *VAR_4)
{
 int VAR_5;
 ssize_t VAR_6;
 git_oid VAR_7 = {{ 0 }};

 if ((VAR_5 = FUNC_4(VAR_4->index_file_path, VAR_2)) < 0)
  return VAR_5;

 if (FUNC_3(VAR_5, -20, VAR_3) < 0) {
  FUNC_2(VAR_5);
  FUNC_0(VAR_0, "failed to seek to end of file");
  return -1;
 }

 VAR_6 = FUNC_5(VAR_5, &VAR_7, VAR_1);
 FUNC_2(VAR_5);

 if (VAR_6 < 0)
  return -1;

 return !!FUNC_1(&VAR_7, &VAR_4->checksum);
}
