
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct patch {int is_binary; scalar_t__ old_name; void* ws_rule; scalar_t__ new_name; } ;
struct apply_state {int linenr; scalar_t__ check; scalar_t__ apply; TYPE_1__* repo; } ;
typedef int git_binary ;
struct TYPE_2__ {int index; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct apply_state*,char*,unsigned long,int*,struct patch*) ;
 unsigned long FUNC_3 (char*,unsigned long) ;
 int FUNC_4 (char const*,char*,int) ;
 int FUNC_5 (struct patch*) ;
 int FUNC_6 (struct apply_state*,char*,unsigned long,struct patch*) ;
 int FUNC_7 (struct apply_state*,char*,unsigned long,struct patch*) ;
 int FUNC_8 (struct apply_state*,struct patch*) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (struct apply_state*,struct patch*) ;
 void* FUNC_11 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct apply_state *VAR_0, char *VAR_1, unsigned long VAR_2, struct patch *VAR_3)
{
 int VAR_4, VAR_5;
 int VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_2, &VAR_4, VAR_3);

 if (VAR_6 < 0)
  return VAR_6;

 FUNC_8(VAR_0, VAR_3);

 if (!FUNC_10(VAR_0, VAR_3))
  VAR_3->ws_rule = 0;
 else if (VAR_3->new_name)
  VAR_3->ws_rule = FUNC_11(VAR_0->repo->index,
       VAR_3->new_name);
 else
  VAR_3->ws_rule = FUNC_11(VAR_0->repo->index,
       VAR_3->old_name);

 VAR_5 = FUNC_7(VAR_0,
           VAR_1 + VAR_6 + VAR_4,
           VAR_2 - VAR_6 - VAR_4,
           VAR_3);

 if (VAR_5 < 0)
  return -128;

 if (!VAR_5) {
  static const char VAR_7[] = "GIT binary patch\n";
  int VAR_8 = VAR_4 + VAR_6;
  unsigned long VAR_9 = FUNC_3(VAR_1 + VAR_8, VAR_2 - VAR_8);

  if (VAR_9 == sizeof(VAR_7) - 1 &&
      !FUNC_4(VAR_7, VAR_1 + VAR_8, VAR_9)) {
   int VAR_10;
   VAR_0->linenr++;
   VAR_10 = FUNC_6(VAR_0, VAR_1 + VAR_8 + VAR_9,
         VAR_2 - VAR_8 - VAR_9, VAR_3);
   if (VAR_10 < 0)
    return -1;
   if (VAR_10)
    VAR_5 = VAR_10 + VAR_9;
   else
    VAR_5 = 0;
  }
  else if (!FUNC_4(" differ\n", VAR_1 + VAR_8 + VAR_9 - 8, 8)) {
   static const char *VAR_11[] = {
    "Binary files ",
    "Files ",
    ((void*)0),
   };
   int VAR_12;
   for (VAR_12 = 0; VAR_11[VAR_12]; VAR_12++) {
    int VAR_13 = FUNC_9(VAR_11[VAR_12]);
    if (VAR_13 < VAR_2 - VAR_8 &&
        !FUNC_4(VAR_11[VAR_12], VAR_1 + VAR_8, VAR_13)) {
     VAR_0->linenr++;
     VAR_3->is_binary = 1;
     VAR_5 = VAR_9;
     break;
    }
   }
  }





  if ((VAR_0->apply || VAR_0->check) &&
      (!VAR_3->is_binary && !FUNC_5(VAR_3))) {
   FUNC_1(FUNC_0("patch with only garbage at line %d"), VAR_0->linenr);
   return -128;
  }
 }

 return VAR_6 + VAR_4 + VAR_5;
}
