
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct diff_filespec {int mode; int oid_valid; int oid; int path; } ;
struct TYPE_5__ {int * pair; int two; } ;


 int FUNC_0 (TYPE_1__*,int,int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int ,int ) ;
 int FUNC_4 (struct diff_filespec*) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct diff_filespec *VAR_3)
{
 int VAR_4 = FUNC_4(VAR_3);

 if (VAR_4 >= 0)
  return -1;
 VAR_4 = -VAR_4 - 1;


 FUNC_0(VAR_0, VAR_2 + 1, VAR_1);
 VAR_2++;
 if (VAR_4 < VAR_2)
  FUNC_1(VAR_0 + VAR_4 + 1, VAR_0 + VAR_4,
      VAR_2 - VAR_4 - 1);
 VAR_0[VAR_4].two = FUNC_2(VAR_3->path);
 FUNC_3(VAR_0[VAR_4].two, &VAR_3->oid, VAR_3->oid_valid,
        VAR_3->mode);
 VAR_0[VAR_4].pair = ((void*)0);
 return 0;
}
