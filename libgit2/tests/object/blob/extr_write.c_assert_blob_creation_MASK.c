
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;
typedef int (* blob_creator_fn ) (int *,int ,char const*) ;


 int FUNC_0 (int) ;
 int FUNC_1 (char const*,char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,char*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(const char *VAR_1, const char *VAR_2, blob_creator_fn VAR_3)
{
 git_oid VAR_4;
 FUNC_1(VAR_1, "1..2...3... Can you hear me?\n");

 FUNC_2(VAR_3(&VAR_4, VAR_0, VAR_2));
 FUNC_0(FUNC_3(&VAR_4, "da5e4f20c91c81b44a7e298f3d3fb3fe2f178e32") == 0);
}
