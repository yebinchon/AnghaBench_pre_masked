
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {int sun_path; } ;
struct sockaddr {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int,struct sockaddr const*,int) ;
 int FUNC_3 (int ,char*,int,int,int ,int) ;

int
FUNC_4(int VAR_1, const struct sockaddr_un *VAR_2)
{
  int VAR_3;

  FUNC_0();
  VAR_3 = FUNC_2(VAR_1, (const struct sockaddr *)VAR_2, sizeof *VAR_2);
  FUNC_3(VAR_0, "%d = bind(%d, \"%s\", %d)\n",
            VAR_3, VAR_1, VAR_2->sun_path, (int)sizeof(*VAR_2));
  FUNC_1();
  return VAR_3;
}
