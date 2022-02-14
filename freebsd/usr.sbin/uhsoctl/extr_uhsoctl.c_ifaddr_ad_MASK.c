
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_len; } ;
struct ifaliasreq {int ifra_mask; int ifra_addr; int ifra_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,unsigned long,char*) ;
 int FUNC_2 (int *,struct sockaddr*,int ) ;
 int FUNC_3 (struct ifaliasreq*,int ,int) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,char const*,int) ;

__attribute__((used)) static int
FUNC_6(unsigned long VAR_2, const char *VAR_3, struct sockaddr *VAR_4, struct sockaddr *VAR_5)
{
 struct ifaliasreq VAR_6;
 int VAR_7, VAR_8;

 VAR_7 = FUNC_4(VAR_0, VAR_1, 0);
 if (VAR_7 < 0)
  return (-1);

 FUNC_3(&VAR_6, 0, sizeof(struct ifaliasreq));
 FUNC_5(VAR_6.ifra_name, VAR_3, sizeof(VAR_6.ifra_name));
 FUNC_2(&VAR_6.ifra_addr, VAR_4, VAR_4->sa_len);
 FUNC_2(&VAR_6.ifra_mask, VAR_5, VAR_5->sa_len);

 VAR_8 = FUNC_1(VAR_7, VAR_2, (char *)&VAR_6);
 FUNC_0(VAR_7);
 return (VAR_8);
}
