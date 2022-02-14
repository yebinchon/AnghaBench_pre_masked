
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packed_git {int index_version; } ;
struct pack_idx_option {int version; } ;


 int FUNC_0 (char*) ;
 struct packed_git* FUNC_1 (char const*,int ,int) ;
 int FUNC_2 (struct packed_git*) ;
 int FUNC_3 (int ,char const*) ;
 int FUNC_4 (struct packed_git*) ;
 scalar_t__ FUNC_5 (struct packed_git*) ;
 int FUNC_6 (struct packed_git*,struct pack_idx_option*) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static void FUNC_8(struct pack_idx_option *VAR_0, const char *VAR_1)
{
 struct packed_git *VAR_2 = FUNC_1(VAR_1, FUNC_7(VAR_1), 1);

 if (!VAR_2)
  FUNC_3(FUNC_0("Cannot open existing pack file '%s'"), VAR_1);
 if (FUNC_5(VAR_2))
  FUNC_3(FUNC_0("Cannot open existing pack idx file for '%s'"), VAR_1);


 VAR_0->version = VAR_2->index_version;

 if (VAR_0->version == 2)
  FUNC_6(VAR_2, VAR_0);
 FUNC_2(VAR_2);
 FUNC_4(VAR_2);
}
