
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int untracked; int resolve_undo; int cache_tree; } ;


 int FUNC_0 (char const*) ;







 int FUNC_1 (char*) ;
 int FUNC_2 (char const*,unsigned long) ;
 int FUNC_3 (int ,char const*) ;
 int FUNC_4 (int ,int ,char const*) ;
 int FUNC_5 (struct index_state*,char const*,unsigned long) ;
 int FUNC_6 (struct index_state*,char const*,unsigned long) ;
 int FUNC_7 (char const*,unsigned long) ;
 int FUNC_8 (char const*,unsigned long) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_9(struct index_state *VAR_1,
    const char *VAR_2, const char *VAR_3, unsigned long VAR_4)
{
 switch (FUNC_0(VAR_2)) {
 case 129:
  VAR_1->cache_tree = FUNC_2(VAR_3, VAR_4);
  break;
 case 130:
  VAR_1->resolve_undo = FUNC_8(VAR_3, VAR_4);
  break;
 case 131:
  if (FUNC_6(VAR_1, VAR_3, VAR_4))
   return -1;
  break;
 case 128:
  VAR_1->untracked = FUNC_7(VAR_3, VAR_4);
  break;
 case 133:
  FUNC_5(VAR_1, VAR_3, VAR_4);
  break;
 case 134:
 case 132:

  break;
 default:
  if (*VAR_2 < 'A' || 'Z' < *VAR_2)
   return FUNC_3(FUNC_1("index uses %.4s extension, which we do not understand"),
         VAR_2);
  FUNC_4(VAR_0, FUNC_1("ignoring %.4s extension"), VAR_2);
  break;
 }
 return 0;
}
