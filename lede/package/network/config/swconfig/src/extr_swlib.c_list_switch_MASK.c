
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nl_msg {int dummy; } ;
struct genlmsghdr {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct genlmsghdr*,int ) ;
 int FUNC_1 (struct genlmsghdr*,int ) ;
 char* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,int ,int ,int ,int *) ;
 struct genlmsghdr* FUNC_4 (int ) ;
 int FUNC_5 (struct nl_msg*) ;
 int FUNC_6 (char*,char*,char*) ;
 int * VAR_5 ;

__attribute__((used)) static int
FUNC_7(struct nl_msg *VAR_6, void *VAR_7)
{
 struct genlmsghdr *VAR_8 = FUNC_4(FUNC_5(VAR_6));

 if (FUNC_3(VAR_5, VAR_3, FUNC_0(VAR_8, 0), FUNC_1(VAR_8, 0), ((void*)0)) < 0)
  goto done;

 if (!VAR_5[VAR_2] || !VAR_5[VAR_4])
  goto done;

 FUNC_6("Found: %s - %s\n", FUNC_2(VAR_5[VAR_2]),
  FUNC_2(VAR_5[VAR_1]));

done:
 return VAR_0;
}
