
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {int sun_path; int sun_family; int sun_len; } ;


 int VAR_0 ;
 int FUNC_0 (struct sockaddr_un*,char,int) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static void
FUNC_3(struct sockaddr_un *VAR_1, const char *VAR_2)
{

    FUNC_0(VAR_1, '\0', sizeof(*VAR_1));



    VAR_1->sun_family = VAR_0;
    FUNC_1(VAR_1->sun_path, VAR_2);
}
