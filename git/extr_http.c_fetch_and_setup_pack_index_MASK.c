
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packed_git {struct packed_git* next; } ;


 int FUNC_0 (struct packed_git*) ;
 char* FUNC_1 (unsigned char*,char const*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (unsigned char*) ;
 struct packed_git* FUNC_5 (unsigned char*,char*) ;
 char* FUNC_6 (unsigned char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct packed_git*) ;

__attribute__((used)) static int FUNC_9(struct packed_git **VAR_0,
 unsigned char *VAR_1, const char *VAR_2)
{
 struct packed_git *VAR_3;
 char *VAR_4 = ((void*)0);
 int VAR_5;

 if (FUNC_4(VAR_1)) {
  VAR_3 = FUNC_5(VAR_1, FUNC_6(VAR_1));
  if (!VAR_3)
   return -1;
  goto add_pack;
 }

 VAR_4 = FUNC_1(VAR_1, VAR_2);
 if (!VAR_4)
  return -1;

 VAR_3 = FUNC_5(VAR_1, VAR_4);
 if (!VAR_3) {
  FUNC_7(VAR_4);
  FUNC_3(VAR_4);

  return -1;
 }

 VAR_5 = FUNC_8(VAR_3);
 if (!VAR_5) {
  FUNC_0(VAR_3);
  VAR_5 = FUNC_2(VAR_4, FUNC_6(VAR_1));
 }
 FUNC_3(VAR_4);
 if (VAR_5)
  return -1;

add_pack:
 VAR_3->next = *VAR_0;
 *VAR_0 = VAR_3;
 return 0;
}
