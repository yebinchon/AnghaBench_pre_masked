
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unl {int family; int cache; int sock; int family_name; int hdrlen; } ;
struct genlmsghdr {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,char const*) ;
 int FUNC_4 (struct unl*,int ,int) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (struct unl*) ;
 scalar_t__ FUNC_7 (struct unl*) ;

int FUNC_8(struct unl *VAR_0, const char *VAR_1)
{
 FUNC_4(VAR_0, 0, sizeof(*VAR_0));

 if (FUNC_7(VAR_0))
  goto error_out;

 VAR_0->hdrlen = FUNC_0(sizeof(struct genlmsghdr));
 VAR_0->family_name = FUNC_5(VAR_1);
 if (!VAR_0->family_name)
  goto error;

 if (FUNC_1(VAR_0->sock))
  goto error;

 if (FUNC_2(VAR_0->sock, &VAR_0->cache))
  goto error;

 VAR_0->family = FUNC_3(VAR_0->cache, VAR_1);
 if (!VAR_0->family)
  goto error;

 return 0;

error:
 FUNC_6(VAR_0);
error_out:
 return -1;
}
