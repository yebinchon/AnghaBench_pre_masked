
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_vc {int dummy; } ;
struct mbchain {int dummy; } ;


 scalar_t__ FUNC_0 (struct smb_vc*) ;
 int FUNC_1 (struct mbchain*,int ) ;
 int FUNC_2 (struct mbchain*,int ) ;
 int FUNC_3 (struct mbchain*,struct smb_vc*,char const*,int ,int) ;
 int FUNC_4 (char const*) ;

int
FUNC_5(struct mbchain *VAR_0, struct smb_vc *VAR_1, const char *VAR_2,
 int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_3(VAR_0, VAR_1, VAR_2, FUNC_4(VAR_2), VAR_3);
 if (VAR_4)
  return VAR_4;
 if (FUNC_0(VAR_1))
  return FUNC_1(VAR_0, 0);
 return FUNC_2(VAR_0, 0);
}
