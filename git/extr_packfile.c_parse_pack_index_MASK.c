
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packed_git {int hash; int pack_name; } ;


 struct packed_git* FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (char const*,struct packed_git*) ;
 int FUNC_2 (struct packed_git*) ;
 int FUNC_3 (int ,unsigned char*) ;
 int FUNC_4 (int ,char const*,size_t) ;
 char* FUNC_5 (unsigned char*) ;
 size_t FUNC_6 (int ,int) ;
 int FUNC_7 (char const*) ;

struct packed_git *FUNC_8(unsigned char *VAR_0, const char *VAR_1)
{
 const char *VAR_2 = FUNC_5(VAR_0);
 size_t VAR_3 = FUNC_6(FUNC_7(VAR_2), 1);
 struct packed_git *VAR_4 = FUNC_0(VAR_3);

 FUNC_4(VAR_4->pack_name, VAR_2, VAR_3);
 FUNC_3(VAR_4->hash, VAR_0);
 if (FUNC_1(VAR_1, VAR_4)) {
  FUNC_2(VAR_4);
  return ((void*)0);
 }

 return VAR_4;
}
