
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {int sun_path; int sun_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sockaddr_un*,int ,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct sockaddr_un *VAR_2)
{
 FUNC_0(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->sun_family = VAR_0;
 FUNC_1(VAR_2->sun_path, VAR_1);
}
