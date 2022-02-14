
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int const*) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (int *,char*) ;

__attribute__((used)) static int FUNC_5(const char *VAR_0, const char *VAR_1,
 const git_oid *VAR_2, unsigned int VAR_3, void *VAR_4)
{
 git_oid VAR_5;

 FUNC_0(VAR_4);

 FUNC_4(&VAR_5, "49322bb17d3acc9146f98c97d078513228bbf3c0");

 FUNC_1(VAR_0 == ((void*)0));
 FUNC_3("remote_url", VAR_1);
 FUNC_2(&VAR_5, VAR_2);
 FUNC_1(VAR_3 == 0);

 return 0;
}
