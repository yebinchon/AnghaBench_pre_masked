
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archiver_args {int commit_oid; int time; } ;
struct archiver {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct archiver_args*,int ) ;
 int VAR_1 ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_6(const struct archiver *VAR_5,
        struct archiver_args *VAR_6)
{
 int VAR_7;

 FUNC_1(VAR_0, ((void*)0));

 FUNC_0(&VAR_6->time, &VAR_2, &VAR_4);

 FUNC_2(&VAR_3, 0);

 VAR_7 = FUNC_4(VAR_6, VAR_1);
 if (!VAR_7)
  FUNC_5(VAR_6->commit_oid);

 FUNC_3(&VAR_3);

 return VAR_7;
}
