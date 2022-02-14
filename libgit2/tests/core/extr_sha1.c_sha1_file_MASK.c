
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef int git_oid ;
typedef int git_hash_ctx ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,char*,size_t) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char const*,int ) ;
 scalar_t__ FUNC_9 (int,char*,int) ;

__attribute__((used)) static int FUNC_10(git_oid *VAR_1, const char *VAR_2)
{
 git_hash_ctx VAR_3;
 char VAR_4[2048];
 int VAR_5, VAR_6;
 ssize_t VAR_7;

 VAR_5 = FUNC_8(VAR_2, VAR_0);
 FUNC_0(VAR_5 >= 0);

 FUNC_2(FUNC_4(&VAR_3));

 while ((VAR_7 = FUNC_9(VAR_5, VAR_4, 2048)) > 0)
  FUNC_2(FUNC_6(&VAR_3, VAR_4, (size_t)VAR_7));

 FUNC_1(0, VAR_7);
 FUNC_7(VAR_5);

 VAR_6 = FUNC_5(VAR_1, &VAR_3);
 FUNC_3(&VAR_3);

 return VAR_6;
}
