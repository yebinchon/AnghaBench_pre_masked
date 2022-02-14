
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct branch {int * name; int refname; } ;


 int FUNC_0 (struct branch**,int,int ) ;
 struct branch** VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char const*,int *) ;
 int FUNC_2 (char const*,int *,int) ;
 struct branch* FUNC_3 (int,int) ;
 int * FUNC_4 (char const*) ;
 int FUNC_5 (char*,int *) ;
 int * FUNC_6 (char const*,int) ;

__attribute__((used)) static struct branch *FUNC_7(const char *VAR_3, int VAR_4)
{
 struct branch *VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  if (VAR_4 ? (!FUNC_2(VAR_3, VAR_0[VAR_6]->name, VAR_4) &&
      !VAR_0[VAR_6]->name[VAR_4]) :
      !FUNC_1(VAR_3, VAR_0[VAR_6]->name))
   return VAR_0[VAR_6];
 }

 FUNC_0(VAR_0, VAR_2 + 1, VAR_1);
 VAR_5 = FUNC_3(1, sizeof(struct branch));
 VAR_0[VAR_2++] = VAR_5;
 if (VAR_4)
  VAR_5->name = FUNC_6(VAR_3, VAR_4);
 else
  VAR_5->name = FUNC_4(VAR_3);
 VAR_5->refname = FUNC_5("refs/heads/%s", VAR_5->name);

 return VAR_5;
}
