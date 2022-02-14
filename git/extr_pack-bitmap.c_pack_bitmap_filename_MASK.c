
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packed_git {int pack_name; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,size_t*) ;
 char* FUNC_2 (char*,int,int ) ;

__attribute__((used)) static char *FUNC_3(struct packed_git *VAR_0)
{
 size_t VAR_1;

 if (!FUNC_1(VAR_0->pack_name, ".pack", &VAR_1))
  FUNC_0("pack_name does not end in .pack");
 return FUNC_2("%.*s.bitmap", (int)VAR_1, VAR_0->pack_name);
}
