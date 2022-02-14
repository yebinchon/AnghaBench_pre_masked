
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shortlog {int wrap_lines; scalar_t__ wrap; scalar_t__ in1; scalar_t__ in2; } ;
struct option {struct shortlog* value; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (char const**,char,void*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(const struct option *VAR_4, const char *VAR_5, int VAR_6)
{
 struct shortlog *VAR_7 = VAR_4->value;

 VAR_7->wrap_lines = !VAR_6;
 if (VAR_6)
  return 0;
 if (!VAR_5) {
  VAR_7->wrap = VAR_2;
  VAR_7->in1 = VAR_0;
  VAR_7->in2 = VAR_1;
  return 0;
 }

 VAR_7->wrap = FUNC_1(&VAR_5, ',', VAR_2);
 VAR_7->in1 = FUNC_1(&VAR_5, ',', VAR_0);
 VAR_7->in2 = FUNC_1(&VAR_5, '\0', VAR_1);
 if (VAR_7->wrap < 0 || VAR_7->in1 < 0 || VAR_7->in2 < 0)
  return FUNC_0(VAR_3);
 if (VAR_7->wrap &&
     ((VAR_7->in1 && VAR_7->wrap <= VAR_7->in1) ||
      (VAR_7->in2 && VAR_7->wrap <= VAR_7->in2)))
  return FUNC_0(VAR_3);
 return 0;
}
