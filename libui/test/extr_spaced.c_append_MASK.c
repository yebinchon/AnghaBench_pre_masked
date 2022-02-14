
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thing {void* ptr; int type; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct thing*,int) ;
 struct thing* VAR_3 ;

__attribute__((used)) static void *FUNC_2(void *VAR_4, int VAR_5)
{
 if (VAR_2 >= VAR_0) {
  VAR_0 += VAR_1;
  VAR_3 = (struct thing *) FUNC_1(VAR_3, VAR_0 * sizeof (struct thing));
  if (VAR_3 == ((void*)0))
   FUNC_0("reallocating things array in test/spaced.c append()");
 }
 VAR_3[VAR_2].ptr = VAR_4;
 VAR_3[VAR_2].type = VAR_5;
 VAR_2++;
 return VAR_3[VAR_2 - 1].ptr;
}
